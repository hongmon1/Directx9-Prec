#pragma once

#include <windows.h>
#include "d3dUtility.h"

//
// Global
//
extern IDirect3DDevice9* Device;

class d3dInit
{
public:
	static bool Setup();
	static void Cleanup();
	static bool Display(float timeDelta);
};

class d3dCreate
{
public:
	static bool Setup();
	static void Cleanup();
	static bool Display(float timeDelta);
};