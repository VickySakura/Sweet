#pragma once

#include <cmath>
#include <cstdlib>
#include <ctime>
const float EulerNum = 2.718283f;

float Sigmoid(float x) {
	return 1.0 / (1.0 + std::pow(EulerNum, 0.0 - x));
}

float Sigmoid_(float x) {
	return std::pow(EulerNum, 0.0 - x) / std::pow(1.0 + std::pow(EulerNum, 0.0 - x), 2.0);
}

float Random(void) {
	std::srand(std::clock() * std::time(NULL));
	return ((float)(std::rand() % 10000)) / 10000.0;
}