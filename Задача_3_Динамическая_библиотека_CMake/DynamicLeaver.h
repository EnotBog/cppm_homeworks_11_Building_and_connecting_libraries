#pragma once
#ifdef DYNAMICLEAVERLIB_EXPORTS
#define DYNAMICLEAVERLIB_API __declspec(dllexport)
#else
#define DYNAMICLEAVERLIB_API __declspec(dllimport)

#endif // DYNAMICLEAVERLIB_EXPORTS

#include <string>

class Leaver
{
public:

	DYNAMICLEAVERLIB_API std::string leave(std::string name);

};

