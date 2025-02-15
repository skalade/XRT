// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2023 Advanced Micro Device, Inc. All rights reserved.

// TODO: set up CMake
// % g++ -g -std=c++17 -I${XILINX_XRT}/include -L${XILINX_XRT}/lib \
//       -o hip_device.exe main.cpp -lxrt_hip

#include "hip/hip.h"

int main()
{
  hipDevice_t device;
  auto status = hipDeviceGet(&device, 0);
  return status;
}
