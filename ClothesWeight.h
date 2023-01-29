#pragma once
#include <vector>
#include "Clothes.h"
class ClothesWeight
{
	std::vector<Clothes> clothes;
public:
	Clothes* pushToWeight(Clothes* cl);
};

