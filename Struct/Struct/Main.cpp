#include <iostream>;
struct Point {//struct variables default public. Useful for simplifying code
	//essentially structs are user-defined types
	int x;
	int y;
};

void DrawLine(Point start, Point end) {
	using namespace std;
	cout << start.x << end.y << endl;

}

int main() {
	Point start;
	start.x = 5;
	start.y = 4;
	Point end;
	end.x = 10;
	end.y = 8;

	DrawLine(start, end);

	return 0;
}