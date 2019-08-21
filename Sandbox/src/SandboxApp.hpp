#pragma once
#include <Swallow.h>
#include "StartLayer.hpp"

class Sandbox : public Swallow::Application
{
public:
	Sandbox();
	virtual ~Sandbox();

private:
	Sandbox(const Sandbox &s) = default;
	Sandbox &operator=(const Sandbox &s) = default;

};