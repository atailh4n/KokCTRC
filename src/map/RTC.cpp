/*
 * © 2025 - Ata İlhan Köktürk
 * Licensed under the GNU General Public License, Version 3 (GPLv3)
 * See the LICENSE file for details.
 */

#include <map/RTC.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

// ROCm -> CUDA mapping
std::map<std::string, std::string> rocmToCudaMappings = {
    {"hipMalloc", "cudaMalloc"},
    {"hipMemcpy", "cudaMemcpy"},
    {"hipDeviceSynchronize", "cudaDeviceSynchronize"}
};