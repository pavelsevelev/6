#include <iostream>
#include <time.h>

using namespace std;

const int N = 5;
const int C = 5;

int main()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	buf.tm_mday;

	int date = buf.tm_mday % C;
	int sum = 0;

	int array[N][C] = {};


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < C; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j];
		}
		cout << endl;
	}
	for (int j = 0; j < C; j++)
	{
		sum += array[date][j];

	}
	cout << endl << "on " << buf.tm_mday << "date sum = " << sum << endl;
}
