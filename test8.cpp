#include <simplecpp>
main_program {
	char la = 97;

	cout<<la<<endl;
	for (int i = 0; i <=10; i++) 
	{
		for (int j = 0; j<=10; j++) 
		{
			for (int k = 0; k<=10; k++) 
			{
				if (i + j + k >= 20) {
					goto errorr ;
				}
				else {
					cout << 1/(float(i + j + k) - 20)<< " ";
				}

			}
			cout << "\n";
		}
	}
errorr :
	cout << "this is why you need goto" << endl;

}

