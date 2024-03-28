

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

void printTriangle(int width, int height);

void TwiterTower() {
	int shape;
	cout << "Rectangle: Press 1,Triangle: Press 2, Quit: Press 3." << endl;
	cin >> shape;
	int width, height;
	while (shape == 1 || shape == 2) {
		cout << "Enter width:" << endl;
		cin >> width;
		cout << "Enter height:" << endl;
		cin >> height;
		int remainder = abs(height - width);
		switch (shape) {
			//מלבן
		case 1:
			if (remainder > 5 || remainder == 0)
				cout << "Area:" << width * height << endl;
			else
				cout << "Primeter:" << (2 * width) + (2 * height) << endl;
			break;
			//משולש
		case 2:
			int choose;
			cout << "To print the primeter of the triangle press 1, To print the triangle press 2:" << endl;
			cin >> choose;
			if (choose == 1) {
				double yeter = sqrt(((double(width) / 2) * ((double)width / 2)) + (height * height));
				cout << "Primeter: " << 2 * yeter + width << endl;
			}
			else {
				if (choose == 2) {
					if (width % 2 == 0 || width > (2 * height)) {
						cout << "The triangle cannot be printed." << endl;
					}
					else {
						printTriangle(width, height);
					}
				}
			}
		}
		cout << "Rectangle: Press 1,triangle: Press 2, Quit: Press 3." << endl;
		cin >> shape;
	}
}
void printTriangle(int width, int height) {
	if (height == 2) {
		int i;
		for (i = 0; i < height / 2; i++)
			cout << " ";
		cout << "*" << endl;
		for (i = 0; i < width; i++)
			cout << "*";
		cout << endl;
		return;
	}

	int printMid = (height - 2) / (((width + 1) / 2) - 2);
	int firstLine = printMid + ((height - 2) % (((width + 1) / 2) - 2));
	int i, j, k, pre = 1;
	for (i = 0; i < height; i++) {
		for (j = 0; j < width / 2 - (pre / 2) + 1; j++) {
			cout << " ";
		}
		for (k = 0; k < pre; k++) {
			cout << "*";
		}
		if (i == 0 || i == firstLine || i > firstLine && ((i - firstLine) % printMid) == 0)
			pre += 2;
		cout << endl;
	}
}


int main()
{
	TwiterTower();
}
