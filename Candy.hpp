#pragma once

#include <algorithm>
#include <vector>
#include <stack>

#include "func.hpp"

class Candy {
public:
	// Value
	std::vector<float>weight;
	std::vector<float>input;
	float bios;
	float output;
	float correct;
	std::stack<float>back;
	int size;

	// Functions
	Candy(int Size) {
		size = Size;
		for (int i = 0; i < size; i++) {
			weight.push_back(Random());
			input.push_back(0.0);
		}
		bios = Random();
	}
	
	float Sweet(void) {
		float sum = 0.0;
		for (int i = 0; i < size; i++) {
			sum += weight[0]*input[0];
		}
		sum += bios;
		output = Sigmoid(sum);
		return output;
	}
	void Salt(void) {
		// loss
		int cor = back.size();
		for (; back.empty()==false;) {
			correct += back.top();
			back.pop();
		}
		if (cor > 0) {
			correct /= cor;
		}

		std::vector<float> num;
		for (int i = 0; i < size; i++) {
			num.push_back(weight[i]);
		}
		float _b;
		// ...(Unfinished)
	}
};