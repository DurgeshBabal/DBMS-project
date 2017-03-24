#include "../include/dop.h"

using namespace std;
using namespace posix_time;
	void dop::setdate()
	{
		date d;
		getdate(&d);
		dd = d.da_day;
		mm = d.da_mon;
		yy = d.da_year;
	}

	void dop::output()
	{
		printf("%02d/",dd);
		printf("%02d/",mm);
		cout << yy;
	}
