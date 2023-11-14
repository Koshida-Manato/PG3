#include "Enemy.h"
#include <stdio.h>

int main() {

	Enemy* enemy_ = new Enemy;

	while (enemy_->GetCount() == false) {
		enemy_->Update();
	}

	return 0;
}