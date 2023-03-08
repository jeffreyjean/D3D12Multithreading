//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#include "stdafx.h"
#include "D3D12Multithreading.h"

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
#ifdef _ARM64_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
    D3D12Multithreading sample(1280, 720, L"D3D12 Multithreading Sample - ARM64 build");
#else
    D3D12Multithreading sample(1280, 720, L"D3D12 Multithreading Sample - X64   build");
#endif
    return Win32Application::Run(&sample, hInstance, nCmdShow);
}
