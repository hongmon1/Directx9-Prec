#pragma once

#include <windows.h>
#include "d3dUtility.h"

//
// Global
//
extern IDirect3DDevice9* Device;

const int Width = 640;
const int Height = 480;

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

class d3dColorTriangle
{
public:
	static bool Setup();
	static void Cleanup();
	static bool Display(float timeDelta);
};