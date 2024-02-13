#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size() {
	diagonal = 20;
	area = diagonal * diagonal / 2;
}

void Rectangle::Draw() { printf("くけい%d\n", area); }
