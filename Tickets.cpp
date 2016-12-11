#include <iostream>

using namespace  std;

int two()
{
	int sum = 0;
	int i, j, k;
	char ticket[6];

	for (i = 0; i <= 999999; i++) {
		for (k = i, j = 0; j < 6; j++, k /= 10) {
			ticket[j] = k % 10;
		}
		if (ticket[0] + ticket[1] + ticket[2] == ticket[3] + ticket[4] + ticket[5]) {
			++sum;
		}
	}
	return sum;
}

int six()
{
	int l = 0;
	int a, b, c, d, e, f;
		for (a = 0; a <= 9; ++a)
		{
			for (b = 0;b <= 9;++b)
			{
				for (c = 0; c <= 9; ++c)
				{
					for (d = 0;d <= 9;++d)
					{
						for (e = 0;e <= 9;++e)
						{
							for (f = 0;f <= 9;++f)
							{
								if ( a + b + c == d + e + f)
								{
									l++;
								}
							}
						}
					}
				}
			}
		}
		
		return l;

}

int one() {

	int q, w, r, t, y, u, x;
	int	m=0;
	for (x = 0; x <= 999999; x++) {
		
		q = x % 1000000;
		q = q / 100000;
			
			w = x % 100000;
			w = w / 10000;
			
				r = x % 10000;
				r = r / 1000;
				
				t = x % 1000;
				t = t / 100;
				
			y = x % 100;
			y = y / 10;
		
		u = x % 10;


		if (q + w + r == t + y + u) 
		{
			m++;
		}
	}	

	return m;
}

int main()
{
	setlocale(0, "");

	int odin=one();
	cout << "One cycle, number of tickets: " << odin << endl;

	int dva = two();
	cout << "Two cycles, number of tickets: " << dva << endl;

	int shest=six();
	cout <<"Six cycles, number of tickets: " << shest << endl;

	
	system("pause");
	return 0;
}
