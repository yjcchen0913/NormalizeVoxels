#include<iostream>

using namespace std;

void main()
{
	/** normalize voxels */

	int XoldMin = 0;
	int XoldMax = 511;
	int XoldRange = XoldMax - XoldMin;

	int YoldMin = 0;
	int YoldMax = 511;
	int YoldRange = YoldMax - YoldMin;

	int ZoldMin = 0;
	int ZoldMax = 180;
	int ZoldRange = ZoldMax - ZoldMin;

	int newMin = -1;
	int newMax = 1;
	int newRange = newMax - newMin;

	double scaleX;
	double scaleY;
	double scaleZ;

	double x,y,z;

	for (int i = 0; i < 512; i++)
	{

		scaleX = double((i - XoldMin)) / XoldRange;
		scaleY = double((i - YoldMin)) / YoldRange;
		scaleZ = double((i - ZoldMin)) / ZoldRange;

		x = newRange*scaleX + newMin;
		y = newRange*scaleY + newMin;
		z = newRange*scaleZ + newMin;

		cout << "NormX: " << x;

	}

}
