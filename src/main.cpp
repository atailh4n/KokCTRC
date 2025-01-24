/*
 * © 2025 - Ata İlhan Köktürk
 * Licensed under the GNU General Public License, Version 3 (GPLv3)
 * See the LICENSE file for details.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <map/CTR.h>


// Currently just for CUDA -> ROCm basically.
std::string transformCode(const std::string& code) {
    std::string transformedCode = code;
    for (const auto& [cuda, rocm] : cudaToRocmMappings) {
        size_t pos = transformedCode.find(cuda);
        while (pos != std::string::npos) {
            transformedCode.replace(pos, cuda.length(), rocm);
            pos = transformedCode.find(cuda, pos + rocm.length());
        }
    }
    return transformedCode;
}

int main() {
    std::string code = "cudaMalloc(ptr, size); cudaMemcpy(dst, src, size, cudaMemcpyHostToDevice);";
    std::cout << "Original Code:\n" << code << "\n";

    std::string transformed = transformCode(code);
    std::cout << "Transformed Code:\n" << transformed << "\n";

    return 0;
}
