#include <iostream>
#include "clsDate.h"
#include "clsPeriod.h"

using namespace std;


int main()
{
    system("color f3");

    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/12/2024");
    Date2.Print();

    clsDate Date3(1, 1, 2025);
    Date3.Print();

    clsDate Date4(250, 2025);
    Date4.Print();


    Date1.Increase_Date_By_One_Month();
    Date1.Print();

    Date1.Print_Month_Calendar();
    Date1.Print_Year_Calendar();

    cout << Date2.Is_Valid_Date() << endl;



    cout << "My Age InDays:" << clsDate::CalculateMyAgeInDays(clsDate(10,9,2003));
     
    cout << "\nDate : " << Date1.Format_Date() << endl;
    cout << "Date : " << Date1.Format_Date("dd-mm-yyyy") << endl;
    cout << "Date : " << Date1.Format_Date("mm/dd/yyyy") << endl;
    cout << "Date : " << Date1.Format_Date("dd.mm.yyyy") << endl;



    clsPeriod Period1(clsDate(1, 1, 2025), clsDate(10, 2, 2025)); 
    Period1.Print(); 

    clsPeriod Period2(clsDate(3, 1, 2025), clsDate(5, 1, 2025)); 
    Period2.Print(); 


    //U can check like this
    cout << Period1.Is_Overlap_With(Period2) << endl;  

    //Also U can call the static method and Send Period1 & Period2
    cout << clsPeriod::Is_Overlap_Periods(Period1, Period2) << endl;  

    cout << "Period1 Length : " << Period1.Period_Length_In_Days(true) << endl;
    cout << "Period2 Length : " << clsPeriod::Period_Length_In_Days(Period2, true) << endl;

    
    cout << "Is Date1(5,2,2025) In Period 1 : " << Period1.Is_Date_In_Period(Date1) << endl; 
    cout << "Is clsDate(2,1,2025) In Period 1 : " << Period1.Is_Date_In_Period(clsDate(2,1,2025)) << endl;

    
    cout << "Overlap Days Between Period1 & Period 2 : " << Period1.Count_Overlap_Days(Period2);
    cout << "\nOverlap Days Between Period1 & Period 2 : " << clsPeriod::Count_Overlap_Days(Period1, Period2);



    system("pause>0");
    return 0;
}