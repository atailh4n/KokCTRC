/*
 * © 2025 - Ata İlhan Köktürk
 * Licensed under the GNU General Public License, Version 3 (GPLv3)
 * See the LICENSE file for details.
 */

#include <map/CTR.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

// CUDA -> ROCM mapping
std::map<std::string, std::string> cudaToRocmMappings = {
    {"cudaMalloc", "hipMalloc"},
    {"cudaMemcpy", "hipMemcpy"},
    {"cudaDeviceSynchronize", "hipDeviceSynchronize"}
};