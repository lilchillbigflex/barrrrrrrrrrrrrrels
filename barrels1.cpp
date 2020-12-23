#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void remove_by_index(int* barrel, int N, int r)
{

	for (int i = r; i < N - 1; ++i)
		barrel[i] = barrel[i + 1];
	barrel[N - 1] = 0;
}

int main()
{
	int M;
	int i;
	int j;
	int N;
	int r;
	int k;
	
	cout << "Enter quantity of barrels: ";
	cin >> N;
	
	int* barrel = new int[N];
	int* barrel2 = new int[N];
	srand(time(0));

	for (int i = 0; i < N; i++)
	{
		 barrel[i] = i+1;
	}
	cout << endl;
	M = N;
	for (int i = 0; i < M; i++)
	{
		r = barrel[rand() % N];
		cout << r << " ";
		r--;
		for (k = r; k < N; k++)
		{
			if (barrel[k] < barrel[k - 1])
			{
				for (j = k; j < N - 1; j++)
					barrel[j] = barrel[j + 1];
				k--; N--;
			}
		}
		
		
		
	}


	
	delete[] barrel;
return 0;
}