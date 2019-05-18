#include <iostream> 
#include <string> 
using namespace std; 

int main() 
{ 

string product [10] = {"Pasta", "Potato", "Sausage", "Cucumber", "Apple", "Egg", "Rice" , "Buckwheat", "Chicken", "Bread"};
int calorie [10] = {112, 82, 266, 15, 52, 157, 130, 313, 190, 265};
for (int i = 0; i < 10; i++) 
cout << product[i]<<endl;

string prod, prod1, prod2;
cout << "Input what you eat today:" << endl; 
cin >> prod;
cout << "Input what you eat today:" << endl; 
cin >> prod1;
cout << "Input what you eat today:" << endl; 
cin >> prod2;
int temp1, temp2, temp3;
for (int i = 0; i < 10; i++)
{
	if (product[i] == prod)
	{
		temp1 = calorie[i];
	}
		if (product[i] == prod1)
	{
		temp2 = calorie[i];
	}
		if (product[i] == prod2)
	{
		temp3 = calorie[i];
	}

}
cout <<"Calories in foods = " << temp1 + temp2 + temp3;
cout <<"You had eat well";
cout <<"Calorie intake = 2000 to 2200";
	system("pause");
	return 0;
}
