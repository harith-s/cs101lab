#include <simplecpp>
int sqrt (int n)
{
        int sqrt = 0;
        for(int i = 1; i < n; i++)
        {
                if (i*i >= n)
                {
                        sqrt = ((i*i - n) > n - ((i-1)*(i-1))) ? i-1 : i;
                        cout << (i*i == n ? i : i-1) << " theoretical sqrt" << endl;
                        break;
                }
        }

	return sqrt ;
}




void palin(int n) 
{
	int mod = 0, temp = n, count = 0;

	while ( n  > 0) 
	{
		count++;
		mod = mod * 10 + (n % 10);
		n = n / 10;
	}
	cout << ( temp == mod ? "palindrom" : "not a palindrome") << endl << count << endl;
}

float ln (float x) 
{
	float sum = 0;
	for ( int r=10000; r <=x*10000; sum += 1/float(r), r++);
	return sum;
}
main_program 
{
	int n;
	//cin >> n;
	//cout << sqrt(n) << endl;

	//palin(n);
	cout << ln(2);

}
