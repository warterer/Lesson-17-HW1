#include "Employee.h"
using namespace std;

int main()
{
	//Employee a("Smith", 1980, "Manager", 3200, "Bachelor");
	//Employee b("Doe", 1961, "DepLeader", 6000, "Bachelor");
	//Employee c("Jackson", 1983, "Promoter", 1200, "Bachelor");
	//Employee d("Canella", 1976, "Manager", 3100, "Bachelor");
	//Employee e("Jablonowski", 1959, "Lawyer", 4200, "Bachelor");
	Employee arr[5] = { {"Smith", 1980, "Manager", 3200, "Bachelor"}, {"Doe", 1961, "DepLeader", 6000, "Bachelor"}, 
		{"Jackson", 1983, "Promoter", 1200, "Bachelor"}, {"Canella", 1976, "Manager", 3100, "Bachelor"},
		{"Jablonowski", 1959, "Lawyer", 4200, "Bachelor"} };
	for (int i = 0; i < 5; i++)
	{
		arr[i].show();
	}
}