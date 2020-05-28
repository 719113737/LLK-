#pragma once
#include<iostream>
#include<cstdlib>
constexpr auto NX = 4;
constexpr auto NY = 3;
typedef struct block {
	int x;
	int y;
	int mask;
	bool exist;
	bool visit;
}block;
int mask[][3] = {
	1,2,3,
	1,3,2,
	1,2,3,
	1,3,2
};
block*** blocks;
int goal;  
int gx, gy; 
int sx,sy;
bool find; 
int xd[4] = {0,0,-1,1 }; 
int yd[4] = { 1,-1,0,0 };
void init() {
	blocks = new block**[NX+2];
	for (int i = 0; i < NX+2; i++) {
		blocks[i] = new block*[NY+2];
		for (int j = 0; j < NY+2; j++) {
			blocks[i][j] = new block;
			blocks[i][j]->visit = false;
			if (i == 0 || j == 0 || i == NX+1 || j == NY+1) {
				blocks[i][j]->mask = 0;
				blocks[i][j]->exist = false;
				std::cout << blocks[i][j]->mask << " ";
				continue;
			}
			blocks[i][j]->x = i;
			blocks[i][j]->y = j;
			blocks[i][j]->exist = true;
			blocks[i][j]->mask = mask[i-1][j-1];
			
			std::cout << blocks[i][j]->mask<<" ";
		}
		std::cout << std::endl;
	}
}
void clear() {
	for (int i = 0; i < NX + 2; i++) {
		for (int j = 0; j < NY + 2; j++) {
			blocks[i][j]->visit = false;
		}
	}
}
void visites() {
	for (int i = 0; i < NX + 2; i++) {
		for (int j = 0; j < NY + 2; j++) {
			std::cout << blocks[i][j]->visit << "  ";
		}
		std::cout << std::endl;
	}
}
bool isIn(int x, int y) {
	bool flag = x >= 0 && x <= NX +1 && y >= 0 && y <= NY +1;
	return flag;
}

void dfs(int x, int y, int delta, int turn) {
	if (find||turn>2) return;
	if (blocks[x][y]->exist && blocks[x][y]->mask != goal) return;
	if (turn == 2) {
		if (blocks[x][y]->exist && blocks[x][y]->mask == goal) {
			find = true;
			gx = x;
			gy = y;
			std::cout << sx<<","<<sy<<"  "<<gx << "," << gy << std::endl;
			return;
		}
		x += xd[delta];
		y += yd[delta];
		while (!find&&isIn(x, y)) {
			if (blocks[x][y]->exist && blocks[x][y]->mask == goal) {
				find = true;
				return;
			}
			x += xd[delta];
			y += yd[delta];
			
		}
		if (find) {
			gx = x;
			gy = y;
			std::cout << sx << "," << sy << "  " << gx << "," << gy << std::endl;
		}
		return;
	}
	if (blocks[x][y]->mask == goal&&delta!=-1) {
		gx = x;
		gy = y;
		find = true;
		std::cout <<sx << "," << sy << "  " << gx << "," << gy << std::endl;
		return;
	}
	int ex[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		if (isIn(x + xd[i], y + yd[i])&&!blocks[x + xd[i]][y + yd[i]]->visit) ex[i] = 1;
	}
	if (delta != -1) {
		int k = delta < 2 ? 1 - delta : 5 - delta;
		ex[k] = 0;
	}
	for (int i = 0; i < 4; i++) {

		if (ex[i]) {
			blocks[x + xd[i]][y + yd[i]]->visit = true;
			if (delta==-1||i == delta) {

				dfs(x + xd[i], y + yd[i], i, turn);
			}
			else dfs(x + xd[i], y + yd[i], i, turn + 1);
		}
	}
}

bool auto_deal() {
	int n = NX*NY/2;
	while (true) {
		clear();
		int flag = 0;
		for (int i = 1; i < NX+2; i++) {
			for (int j = 1; j < NY+2; j++) {
				if (blocks[i][j]->exist) {
					sx = i;
					sy = j;
					find = false;
					goal = blocks[i][j]->mask;
					dfs(i, j, -1, 0);
					if (find) {
						blocks[i][j]->exist = false;
						blocks[i][j]->mask = 0;
						blocks[gx][gy]->exist = false;
						blocks[gx][gy]->mask = 0;
						flag = 0;
						n--;
						if (n == 0) return true;
					}
					else {
						flag++;
					}
				}
			}
		}

		if (flag >= n) return false;
	}
}

