/* 
	Made By: Angeline D. Bedis	
	Grade 11 - 1st Semester (Final Project)
*/

#include <iostream> // header file declares a set of functions for standard Input/Output. | for cin , cout
#include <conio.h> // header file to provide console Input/Ouput | for getch()
#include <windows.h> //  Windows-specific header file that contiains declarations for all of the functions in the Windows API | for HANDLE , GetStdHandle , STD_OUTPUT_HANDLE , SetConsoleTextAttribute  
using namespace std;

int main()
{
	HANDLE color= GetStdHandle(STD_OUTPUT_HANDLE); // for the SetConsoleTextAttribute (color, n)
	int userChoose;
	int type_of_flight; 
	char destination; 
	int luxury_type ; 
	float number_of_passengers; 
	int OneWay_RoundTrip;
	int departing_month; 
	int departing_day; 
	string destination_name;
	string change_guest_details;
	string change_date;
	
	string departing_year;
	string returning_year;
	
	int Departing_Flight_Schedule; 
	string Departing_Flight_No;
	string Departing_Departure_Time;
	string Departing_Arrival_Time;
	string Departing_Month_Name;
	
	int returning_month; 
	int returning_day; 
	int userContinue;
	
	int Returning_Flight_Schedule; 
	string Returning_Flight_No;
	string Returning_Departure_Time;
	string Returning_Arrival_Time;
	string Returning_Month_Name;
	 
	string passenger1_Firstname;
	string passenger2_Firstname;
	string passenger3_Firstname;
	string passenger4_Firstname;
	string passenger5_Firstname;
	string passenger6_Firstname;
	string passenger7_Firstname;
	string passenger8_Firstname;
	string passenger9_Firstname;
	string passenger10_Firstname;
	
	string passenger1_Surname;
	string passenger2_Surname;
	string passenger3_Surname;
	string passenger4_Surname;
	string passenger5_Surname;
	string passenger6_Surname;
	string passenger7_Surname;
	string passenger8_Surname;
	string passenger9_Surname;
	string passenger10_Surname;
	
	float passenger1_Age;
	float passenger2_Age;
	float passenger3_Age;
	float passenger4_Age;
	float passenger5_Age;
	float passenger6_Age;
	float passenger7_Age;
	float passenger8_Age;
	float passenger9_Age;
	float passenger10_Age;
	
	string passenger1_type;
	string passenger2_type;
	string passenger3_type;
	string passenger4_type;
	string passenger5_type;
	string passenger6_type;
	string passenger7_type;
	string passenger8_type;
	string passenger9_type;
	string passenger10_type;
	
	do 
	{
		float child_baggage = 0;
		float adult_baggage = 0;
		float senior_baggage = 0;	
		
		string Avail_Insurance; 
		float Insurance = 0; 
		float child_insurance = 0;
		float adult_insurance = 0;
		float senior_insurance = 0;		
		
		float passenger1_baggage = 0;
		float passenger2_baggage = 0; 
		float passenger3_baggage = 0;
		float passenger4_baggage = 0;
		float passenger5_baggage = 0;
		float passenger6_baggage = 0;
		float passenger7_baggage = 0;
		float passenger8_baggage = 0;
		float passenger9_baggage = 0;
		float passenger10_baggage = 0;
		
		float passenger1_insurance = 0;
		float passenger2_insurance = 0;
		float passenger3_insurance = 0;
		float passenger4_insurance = 0;
		float passenger5_insurance = 0;
		float passenger6_insurance = 0;
		float passenger7_insurance = 0;
		float passenger8_insurance = 0;
		float passenger9_insurance = 0;
		float passenger10_insurance = 0;
	
		float passenger1_discount = 0;
		float passenger2_discount = 0;
		float passenger3_discount = 0;
		float passenger4_discount = 0;
		float passenger5_discount = 0;
		float passenger6_discount = 0;
		float passenger7_discount = 0;
		float passenger8_discount = 0;
		float passenger9_discount = 0;
		float passenger10_discount = 0;
			
		float passenger1_total = 0;
		float passenger2_total = 0;
		float passenger3_total = 0;
		float passenger4_total = 0;
		float passenger5_total = 0;
		float passenger6_total = 0;
		float passenger7_total = 0;
		float passenger8_total = 0;
		float passenger9_total = 0;
		float passenger10_total = 0;
			
		float passenger1_vat = 0;
		float passenger2_vat = 0;
		float passenger3_vat = 0;
		float passenger4_vat = 0;
		float passenger5_vat = 0;
		float passenger6_vat = 0;
		float passenger7_vat = 0;
		float passenger8_vat = 0;
		float passenger9_vat = 0;
		float passenger10_vat = 0;
	
		int child = 0;
		int adult = 0;
		int senior = 0; 
		
		float child_vat = 0;
		float adult_vat = 0;
		
		float fare_per_person; 
		float child_fare = 0;
		float adult_fare = 0;
		float senior_fare = 0; 
		
		float child_total_Wdiscount = 0;
		float senior_total_Wdiscount = 0;
		float child_total_Wdiscount_vat = 0;
		float adult_total_Wvat = 0;
		
		float child_discount;
		float senior_discount;
		float group_discount = 0;
		
		float child_total = 0;
		float adult_total = 0;
		float senior_total = 0;
		
		float total = 0;
		float cash = 0; 
		float change = 0;
		
		
		do 
		{ 
			system("cls"); // clears the screen
			system ("color b9"); // this will change the color of the foreground (blue) and the background (teal)
			/*
				The following lines will display the design 
				The options shown in this output are 
				(1) BOOK A FLIGHT
				(2) EXIT PROGRAM
				
				These are the colors that we used for the output:
				SetConsoleTextAttribute (color, 187) - background (teal) & foreground (teal) 
				SetConsoleTextAttribute (color, 238) - background (yeallow) & foreground (yellow)
				SetConsoleTextAttribute (color, 102) - background (yellowish brown) & foreground (yellowish brown)
				SetConsoleTextAttribute (color, 204) - background (red) 	& foreground (red)
				SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue)
				SetConsoleTextAttribute (color, 273) - background (dark blue) 	& foreground (dark blue)
				SetConsoleTextAttribute (color, 119) - background (light gray) 	& foreground (light gray)
				SetConsoleTextAttribute (color, 255) - background (white)		& foreground (white)
				SetConsoleTextAttribute (color, 256) - background (black)		& foreground (black)
				SetConsoleTextAttribute (color, 136) - background (dark gray)	& foreground (dark gray)
				
				SetConsoleTextAttribute (color, 14) - background (black) & foreground (yellow)
				SetConsoleTextAttribute (color, 12) - background (black) & foreground (red) 
				SetConsoleTextAttribute (color, 7) - background  (black) & foreground (white)
			*/ 
			
			SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; 
			cout << "           "; SetConsoleTextAttribute(color, 238); cout << "                                                                               "; SetConsoleTextAttribute(color, 187); cout << "          " << endl; 
			SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     ";	SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << " ";SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << "        "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "       "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "      " << endl;
			SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255);	cout << "       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153);	cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "      " << endl;
			SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "      " << endl;
			SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "           "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "      " << endl;
			SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "      " << endl;
			SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 102); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                               "; SetConsoleTextAttribute(color, 102); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "       " << endl;
			SetConsoleTextAttribute(color, 187); cout << "           "; SetConsoleTextAttribute(color, 102); cout << "                                                                               "; SetConsoleTextAttribute(color, 187); cout << "          " << endl;
			SetConsoleTextAttribute(color, 187); cout << "                                                                                    "; SetConsoleTextAttribute(color, 238); cout << "             "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "                                                                                    "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                        "; SetConsoleTextAttribute(color, 187); cout << "                                                       "; SetConsoleTextAttribute(color, 238); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                      "; SetConsoleTextAttribute(color, 204); cout << " "; 
			SetConsoleTextAttribute(color, 187); cout << "                                                     "; SetConsoleTextAttribute(color, 238); cout << "   "; 			SetConsoleTextAttribute(color, 255); cout << "         "; SetConsoleTextAttribute(color, 238); cout << "  ";  SetConsoleTextAttribute(color, 187); cout << "      " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7); cout << "                    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "                 "; SetConsoleTextAttribute(color, 238); cout << "                                     "; SetConsoleTextAttribute(color, 255); cout << "          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "       " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 14); cout << "        MERC        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute( color, 204);cout << " "; SetConsoleTextAttribute(color, 187); cout << "            "; SetConsoleTextAttribute(color, 238); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "                                             "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl; 
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 14); cout << " TICKETING SERVICE  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 256); cout << "       "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "          " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7); cout << "                    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 256); cout << "          "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "          " << endl;  
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 12); cout << " (1) BOOK A FLIGHT  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "                "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "                    "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "          " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7); cout << "                    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                   "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "                    "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "         "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "          " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 12); cout << " (2) EXIT PROGRAM   "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                                                       "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "           " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7); cout << "                    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 153); cout << "              "; SetConsoleTextAttribute(color, 136); cout << "   "; SetConsoleTextAttribute(color, 119); cout << "               "; SetConsoleTextAttribute(color, 153); cout << "                    "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "           " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7); cout << "                    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 153); cout << "             "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 119); cout << "              "; SetConsoleTextAttribute(color, 153); cout << "               "; SetConsoleTextAttribute(color, 238); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "           " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                      "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 187); cout << "           "; SetConsoleTextAttribute(color, 238); cout << "                  "; SetConsoleTextAttribute(color, 136); cout << "       "; SetConsoleTextAttribute(color, 119); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "                  "; SetConsoleTextAttribute(color, 187); cout << "             " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute (color, 204); cout << "                        "; SetConsoleTextAttribute(color, 187); cout << "                            "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "             "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "                        " << endl; SetConsoleTextAttribute(color, 187); cout << "                                                          "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 238); cout << "         "; SetConsoleTextAttribute(color, 187); cout << "                        " << endl; 
			SetConsoleTextAttribute(color, 187); cout << "                                                          "; SetConsoleTextAttribute(color, 238); cout << "          "; SetConsoleTextAttribute(color, 187); cout << "                                " << endl; 
			SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; 
			userChoose = getch(); // getch() freezes the screen until a key is hit by the user 
			
			/*
				Why did I use 49 and 50 instead of 1 and 2?
				- if the data type of the variable is an integer
				  getch() returns the ascii code for the pressed key.
				  
				ASCII CODE:
				1- 49
				2- 50 
			*/ 
			
			if (userChoose != 49 && userChoose != 50) 
			{
				// This will display "Invalid Input. Please check and try again"
				SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "                        Invalid Input! Please check and try again.                        "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl; SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7865); cout << "  Press any key to continue ...                                                                     ";
				userContinue = getch();
				// the screen will pause so that the user can see and will know that his/her input is Invalid 
			}
		}
		while (userChoose != 49 && userChoose != 50); // ASCII CODE : 1 - 49    2 - 50
		
		
		
		
		
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		switch (userChoose)
		{
			case 49: // BOOK A FLIGHT
				do 
				{
					system("cls"); // clears the screen 
					system ("color f9"); // this will change the color of the foreground (blue) and the background (white)
					/*	 
				    	The following lines will display the design 
				    	The options shown in this output are:
						(1) DOMESTIC 
						(2) INTERNATIONAL
						
						These are the colors that we used for the output
						SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
						SetConsoleTextAttribute (color, 238) - background (yeallow) 	& foreground (yellow)
						SetConsoleTextAttribute (color, 102) - background (yellowish brown) & foreground (yellowish brown)
						SetConsoleTextAttribute (color, 204) - background (red) 		& foreground (red)
						SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue)
						SetConsoleTextAttribute (color, 273) - background (dark blue)	& foreground (dark blue)
						SetConsoleTextAttribute (color, 119) - background (light gray)	& foreground (light gray)
						SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
						SetConsoleTextAttribute (color, 256) - background (black) 		& foreground (black)
						SetConsoleTextAttribute (color, 136) - background (dark gray) 	& foreground (dark gray)
						SetConsoleTextAttribute (color, 170) - background (green) 		& foreground (green)
						SetConsoleTextAttribute (color, 290) - background (dark green)	& foreground (dark green)
						SetConsoleTextAttribute (color, 68) - background (dark red) 	& foreground (dark red)
						
						SetConsoleTextAttribute (color, 14) - background (black) & foreground (yellow)
						SetConsoleTextAttribute (color, 12) - background (black) & foreground (red) 
						SetConsoleTextAttribute (color, 7) - background  (black) & foreground (white)
					*/ 
						
					SetConsoleTextAttribute(color, 153); cout << "                              "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << "                             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "                                "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                              "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 187); cout << " " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "            "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "   Select an option:      "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "            "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7); cout << "          "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 12); cout << "   (1) DOMESTIC           "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 170); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "            "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 170); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << "         "; SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 170); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << "                "; SetConsoleTextAttribute(color, 255); cout << "           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 12); cout << "   (2) INTERNATIONAL      "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 170); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << "              "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 290); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 290); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 290); cout << "           "; SetConsoleTextAttribute(color, 255); cout << "         "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 102); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                              "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "                                  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 102); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "                                "; SetConsoleTextAttribute(color, 119); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "           "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 102); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "                    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "                   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "      "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "          "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 290); cout << "  "; SetConsoleTextAttribute(color, 170); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 290); cout << "  "; SetConsoleTextAttribute(color, 170); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "       "; SetConsoleTextAttribute(color, 136); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "              "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 136); cout << "  ";SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "             "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << "    "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << " "; SetConsoleTextAttribute(color, 119); cout << "           "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << "    "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 170); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 69); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 69); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 290); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 170); cout << "   "; SetConsoleTextAttribute(color, 119); cout << "           "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 290); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 170); cout << "   "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "      "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 290); cout << "      "; SetConsoleTextAttribute(color, 119); cout << "           "; SetConsoleTextAttribute(color, 238); cout << "      "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 290); cout << "    "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 119); cout << "            "; SetConsoleTextAttribute(color, 102); cout << " "; SetConsoleTextAttribute(color, 238); cout << "     "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 238); cout << "       "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 238); cout << "       "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 119); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 119); cout << "            "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "    "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << "    "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 119); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 119); cout << "  " << endl;
					SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 119); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 119); cout << " "; SetConsoleTextAttribute(color, 273); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "            "; SetConsoleTextAttribute(color, 102); cout << "    "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "      "; SetConsoleTextAttribute(color, 68); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "        "; SetConsoleTextAttribute(color, 68); cout << "    "; SetConsoleTextAttribute(color, 238); cout << "      "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 68); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                            "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "            "; SetConsoleTextAttribute(color, 102); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 136); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "              "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 204); cout << "        "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 204); cout << "        "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 204); cout << "         " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                         "; SetConsoleTextAttribute(color, 136); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "    "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 136); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 136); cout << "    "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 136); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 136); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   " << endl;
					SetConsoleTextAttribute(color, 255); cout << "                          "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 136); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 256); cout << "        "; SetConsoleTextAttribute(color, 255); cout << "                "; SetConsoleTextAttribute(color, 256); cout << "        "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "        " << endl; SetConsoleTextAttribute(color, 255); cout << "                                           "; SetConsoleTextAttribute(color, 136); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 136); cout << "        "; SetConsoleTextAttribute(color, 255); cout << "                "; SetConsoleTextAttribute(color, 136); cout << "        "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "      " << endl; SetConsoleTextAttribute(color, 255); cout << "                                          "; SetConsoleTextAttribute(color, 136); cout << "       "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 136); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 136); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "    " << endl;
					type_of_flight = getch(); 
				
					if (type_of_flight != 49 && type_of_flight != 50) // ASCII CODE : 1 - 49    2 - 50
					{
						// This will display "Invalid Input. Please check and try again"
						SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 255); cout << "   " << endl;
						cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   " << endl;
						cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "                        Invalid Input! Please check and try again.                        "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "<< endl;
						cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "<< endl;
						cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 255); cout << "   "<< endl; 
						SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7929); cout << "   Press any key to continue ...                                                                     " << endl;
						userContinue = getch();	
						// the screen will pause so that the user can see and will know that his/her input is Invalid  
					}	
				}
				while (type_of_flight != 49 && type_of_flight != 50); // ASCII CODE : 1 - 49    2 - 50
				
				
				/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				if (type_of_flight == 49) // DOMESTIC
				{
					do 
					{
						system("cls"); // clears the screen
						system ("color b9"); // this will change the color of the foreground (blue) and the background (teal)
						/*	 
				    	The following lines will display the design 
				    	It will display the DESTINATIONS FOR DOMESTIC FLIGHTS
						
						These are the colors that we used for the output
						SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
						SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
						SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
						SetConsoleTextAttribute (color, 273) - background (dark blue) 	& foreground (dark blue)
						SetConsoleTextAttribute (color, 204) - background (red) 		& foreground (red)
						SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
						
						SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
						SetConsoleTextAttribute (color, 7865) - background (teal) & foreground (blue)
						SetConsoleTextAttribute (color, 7932) - background (white) & foreground (red)
						SetConsoleTextAttribute (color, 14) - background (black) & foreground (yellow)
						SetConsoleTextAttribute (color, 7) - background  (black) & foreground (white)
						*/ 
					
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; 
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;	
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << " DESTINATION "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "       TO         "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   PRIVATE CLASS FARE   "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "    BUSINESS CLASS FARE    "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " A  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     BATANES      "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "       P 8,650.00       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P 15,500.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " B  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     BACOLOD      "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "       P 4,543.00       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P  9,500.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " C  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     PALAWAN      "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "       P 5,882.00       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P 13,200.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " D  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     DAVAO        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "       P 4,096.00       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P  9,230.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; cout << "                                                                                                    " << endl;
						destination = getch();
					
						if (destination != 'A' && destination != 'a' && destination != 'B' && destination != 'b' && destination != 'C' && destination != 'c' && destination != 'D' && destination != 'd') 
						{
							// This will display "Invalid Input. Please check and try again"
							SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "                        Invalid Input! Please check and try again.                        "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl; SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7865); cout << "  Press any key to continue ...                                                                     ";
							userContinue = getch();
							// the screen will pause so that the user can see and will know that his/her input is Invalid
						}
					}
					while (destination != 'A' && destination != 'a' && destination != 'B' && destination != 'b' && destination != 'C' && destination != 'c' && destination != 'D' && destination != 'd');
				}
				else  // INTERNATIONAL
				{
					do 
					{
						system("cls"); // clears the screen
						system ("color b9"); // this will change the color of the foreground (blue) and the background (teal)
						/*	 
				    	The following lines will display the design 
				    	It will display the DESTINATIONS FOR INTERNATIONAL FLIGHTS
						
						These are the colors that we used for the output
						SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
						SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
						SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
						SetConsoleTextAttribute (color, 273) - background (dark blue) 	& foreground (dark blue)
						SetConsoleTextAttribute (color, 204) - background (red) 		& foreground (red)
						SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
						
						SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
						SetConsoleTextAttribute (color, 7865) - background (teal) & foreground (blue)
						SetConsoleTextAttribute (color, 7932) - background (white) & foreground (red)
						SetConsoleTextAttribute (color, 14) - background (black) & foreground (yellow)
						SetConsoleTextAttribute (color, 7) - background  (black) & foreground (white)
						*/ 
					
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; 
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;	
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << " DESTINATION "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "       TO         "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   PRIVATE CLASS FARE   "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "    BUSINESS CLASS FARE    "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " E  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     MALAYSIA     "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "      P 6,199.00        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P 12,150.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " F  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     INDONESIA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "      P 5,699.00        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P 10,850.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " G  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     SINGAPORE    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "      P 6,899.00        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P 13,110.00        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " H  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     SOUTH KOREA  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "      P 12,500.00       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P  23,850.00       "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;	
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << " I  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "   MANILA    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "     JAPAN        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "      P 24,800.00       "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 7929); cout << "        P  31,450.00       "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "             "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                        "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 255); cout << "                           "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
						SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; cout << "                                                                                                    " << endl;
						destination = getch();
					
						if (destination != 'E' && destination != 'e' && destination != 'F' && destination != 'f' && destination != 'G' && destination != 'g' && destination != 'H' && destination != 'h' && destination != 'I' && destination != 'i')
						{
							// This will display "Invalid Input. Please check and try again"
							SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "                        Invalid Input! Please check and try again.                        "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
							cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl; SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7865); cout << "  Press any key to continue ...                                                                     ";
							userContinue = getch();
							// the screen will pause so that the user can see and will know that his/her input is Invalid
						}
					}
					while (destination != 'E' && destination != 'e' && destination != 'F' && destination != 'f' && destination != 'G' && destination != 'g' && destination != 'H' && destination != 'h' && destination != 'I' && destination != 'i');
				}
				break;  



			case 50: // EXIT PROGRAM
				system ("cls"); // clears the screen
				return 0;  // the program will stop because the user wants to exit the program
				break; 
		}
		
		
		
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		do 
		{	
			system("cls"); // clears the screen			
			/*
				The following lines will display the design 
				The options shown in this output are:
				(1) PRIVATE JET CLASS
				(2) BUSINESS JET CLASS
				
				These are the colors that we used for the output:
				SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
				SetConsoleTextAttribute (color, 238) - background (yeallow) 	& foreground (yellow)
				SetConsoleTextAttribute (color, 102) - background (yellowish brown) & foreground (yellowish brown)
				SetConsoleTextAttribute (color, 204) - background (red) 		& foreground (red)
				SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue)
				SetConsoleTextAttribute (color, 170) - background (green) 		& foreground (green)
				SetConsoleTextAttribute (color, 290) - background (dark green) 	& foreground (dark green)
				SetConsoleTextAttribute (color, 273) - background (dark blue) 	& foreground (dark blue)
				SetConsoleTextAttribute (color, 119) - background (light gray) 	& foreground (light gray)
				SetConsoleTextAttribute (color, 255) - background (white)		& foreground (white)
				SetConsoleTextAttribute (color, 256) - background (black)		& foreground (black)
				SetConsoleTextAttribute (color, 136) - background (dark gray)	& foreground (dark gray)
				SetConsoleTextAttribute (color, 68) - background (dark red) 	& foreground (dark red)

				
				SetConsoleTextAttribute (color, 14) - background (black) & foreground (yellow)
				SetConsoleTextAttribute (color, 12) - background (black) & foreground (red) 
				SetConsoleTextAttribute (color, 7) - background  (black) & foreground (white)
			*/ 
			
			SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 187); cout << "              "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 187); cout << "           "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                          "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                                   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 187); cout << "              "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 187); cout << "           "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                          "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                                   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "                        "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "                                "; SetConsoleTextAttribute(color, 187); cout << "                                  " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                              "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "             "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 187); cout << "                  " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "                 "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "             "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 187); cout << "                  " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "                        "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "    Select an option:     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "                         "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "                                  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 12); cout << " (1) PRIVATE JET CLASS    "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 153); cout << "      "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "                                  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "                                  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 12); cout << " (2) BUSINESS JET CLASS   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 256); cout << "         "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl; 
			SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 255); cout << "         "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 153); cout << "                              "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 256); cout << "           "; SetConsoleTextAttribute(color, 187); cout << "              "; SetConsoleTextAttribute(color, 238); cout << "                                "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "               "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 102); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "                        "; SetConsoleTextAttribute(color, 255); cout << "                      "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << " "; SetConsoleTextAttribute(color, 255); cout << "    ";SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 68); cout << "        "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 102); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 68); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 187); cout << "           "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 68); cout << "    "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 204); cout << " "; SetConsoleTextAttribute(color, 68); cout << " "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 290); cout << "     "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "   "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 170); cout << "    "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "        "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 170); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 170); cout << "    "; SetConsoleTextAttribute(color, 290); cout << " "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "        "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 204); cout << "        "; SetConsoleTextAttribute(color, 68); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 290); cout << "     "; SetConsoleTextAttribute(color, 256); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 153); cout << " "; SetConsoleTextAttribute(color, 256); cout << "                    "; SetConsoleTextAttribute(color, 153); cout << "                             "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "         "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "                     "; SetConsoleTextAttribute(color, 153); cout << "                           "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "        "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 256); cout << "                     "; SetConsoleTextAttribute(color, 153); cout << "                          "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "       "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "                     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "                         "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "            "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 153); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "                     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "           "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "            "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "                     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 136); cout << "           "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "            "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "                     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 136); cout << "   "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 136); cout << "           "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "            "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl;
			SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 256); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 119); cout << "                     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 136); cout << "                         "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "     "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 136); cout << "            "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        " << endl; cout << "                                                                                                    " << endl;
			luxury_type = getch();  
			
			if (luxury_type != 49 && luxury_type != 50) // ASCII CODE : 1 - 49    2 - 50
			{
				// This will display "Invalid Input. Please check and try again"		
				SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 14); cout << "                        Invalid Input! Please check and try again.                        "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7); cout << "                                                                                          "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl;
				cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   "<< endl; SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7865); cout << "  Press any key to continue ...                                                                     ";
				userContinue = getch();
				// the screen will pause so that the user can see and will know that his/her input is Invalid
			}
		}
		while (luxury_type != 49 && luxury_type != 50); // ASCII CODE : 1 - 49    2 - 50
					
		
		
		
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		system ("cls"); // clears the screen
		system ("color f9"); // this will change the color of the foreground (blue) and the background (white)
		/*	 
			The following lines will display the design 
			It will ask the NUMBER OF PASSENGERS & ask the user if his/her flight is ONE WAY OR ROUNDTRIP
							
			These are the colors that we used for the output
			SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
			SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
			SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
			SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
							
			SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
			SetConsoleTextAttribute (color, 7932) - background (white) & foreground (red)
		*/ 
		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "                              MERC AIRLINE TICKETING SERVICE                              "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << "            MERC Group of Company offers private airplane aviation reservation            "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << "                                 for certain destinations                                 "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;			
		SetConsoleTextAttribute(color, 153); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7929);		
	
		switch (luxury_type)
		{
			case 49: // PRIVATE JET CLASS
				cout << "NOTE: The PRIVATE JET CLASS can accommodate up to 15 persons including the 2 pilot and 3 stewardess" << endl;
				cout << "      therefore you can only have a reservation for 10 passengers." << endl << endl;
				cout << "Number of passengers (1 - 10): "<< endl;
				cin >> number_of_passengers; 
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || number_of_passengers != 1 && number_of_passengers != 2 && number_of_passengers != 3 && number_of_passengers != 4 && number_of_passengers != 5 && number_of_passengers != 6 && number_of_passengers != 7 && number_of_passengers != 8 && number_of_passengers != 9 && number_of_passengers != 10)
				{
					if (number_of_passengers > 10)
					{
						cout << endl << "Exceeding number of passengers! Please try again." << endl;
						cout << "Number of passengers (1 - 10): "<< endl;  
						cin.clear(); // clear the error flags 
						cin.ignore(); // discard the input contents that caused the failure or error
						cin >> number_of_passengers;
					}
					else 
					{
						cout << endl << "Invalid Input! Please check and try again." << endl;
						cout << "Number of passengers (1 - 10): "<< endl;
						cin.clear(); // clear the error flags 
						cin.ignore(); // discard the input contents that caused the failure or error
						cin >> number_of_passengers; 
					}
				}	
			break; 
		
		
			case 50: // BUSINESS JET CLASS 
				cout << "NOTE: The BUSINESS JET CLASS can accommodate up to 10 persons including the 2 pilot" << endl;
				cout << "      and 2 stewardess therefore you can only have a reservation for 6 passengers." << endl << endl; 
				cout << "Number of passengers (1 - 6): "<< endl;
				cin >> number_of_passengers; 
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || number_of_passengers != 1 && number_of_passengers != 2 && number_of_passengers != 3 && number_of_passengers != 4 && number_of_passengers != 5 && number_of_passengers != 6)
				{
					if (number_of_passengers > 6)
					{
						cout << endl << "Exceeding number of passengers! Please try again." << endl; 	
						cout << "Number of passengers (1 - 6): "<< endl;	
						cin.clear(); // clear the error flags 
						cin.ignore(); // discard the input contents that caused the failure or error
						cin >> number_of_passengers;
					}
					else 
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Number of passengers (1 - 6): "<< endl;
						cin.clear(); // clear the error flags 
						cin.ignore(); // discard the input contents that caused the failure or error
						cin >> number_of_passengers; 
					}
				}
			break; 
		}
	
		
	
		cout << endl << endl << "Select an option:" << endl;
		cout << "(1) One-way" << endl;
		cout << "(2) Round-trip" << endl << endl;		
		OneWay_RoundTrip = getch();	
		
		while (OneWay_RoundTrip != 49 && OneWay_RoundTrip != 50) // ASCII CODE : 1 - 49    2 - 50
		{
			cout << endl << "Invalid Input! Please check and try again." << endl; 
			cout << "Select an option:" << endl;  
			cout << "(1) One-way" << endl;
			cout << "(2) Round-trip" << endl;		
			OneWay_RoundTrip = getch();
		}
		
		
		
		
		
			
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		do
		{
			system ("cls"); // clears the screen
			returning_year = "0";
			returning_month = 0;
			returning_day = 0;
			
			departing_year = "0";
			departing_month = 0;
			departing_day = 0;
			
			// cin.clear - clear the error flags 
			// cin.ignore - discard the input contents that caused the failure or error
			
			/*	 
				The following lines will display the design 
				It will display and ask the user to input the date/s for the flight/s
								
				These are the colors that we used for the output
				SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
				SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
				SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
				SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
								
				SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
				SetConsoleTextAttribute (color, 7932) - background (white) & foreground (red)
			*/ 
			
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "                              MERC AIRLINE TICKETING SERVICE                              "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << "            MERC Group of Company offers private airplane aviation reservation            "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7932); cout << "                                 for certain destinations                                 "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;			
			SetConsoleTextAttribute(color, 153); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7929);		
			cout << "NOTE: You can only book ticket/s for the year 2021 and year 2022." << endl;
			cout << "      Bookings for the year 2023 is currently not accessible." << endl;
			cout << "      Booking on the current day is not allowed." << endl << endl;
			
			cout << "DEPARTURE DATE" << endl;
			cout << "Enter year (Ex: 202X): "; 
			cin >> departing_year;
			
			while (departing_year != "2021" && departing_year != "2022")
			{
				cout << endl << "Invalid Input! Please check and try again." << endl; 
				cout << "Enter year (Ex: 202X): "; 
				cin >> departing_year;
			} 
			
			cout << "Enter month (1-12): ";
			cin >> departing_month;
			
			if (departing_year == "2021")
			{
				// we are already done with january (1) in the year 2021 
				// therefore it is not valid for input    
				while (departing_month <= 1 || departing_month >= 13)
				{	
					cout << endl << "Invalid Input! Please check and try again." << endl; 
					cout << "Enter month (1-12): ";
					cin.clear(); 
					cin.ignore();
					cin >> departing_month;
				} 	
			}
			else
			{
				// the user can freely choose any month in the year 2022
				// because we are not yet done with the year 2022 
				// we are currently in the year 2021
				while (departing_month <= 0 || departing_month >= 13)
				{
					cout << endl << "Invalid Input! Please check and try again." << endl; 
					cout << "Enter month (1-12): ";
					cin.clear();
					cin.ignore();
					cin >> departing_month;
				} 
			}
			
			cout << "Enter day: ";
			cin >> departing_day;
			
			if (departing_year == "2021")
			{
				switch (departing_month)
				{
					case 2: 
						// february only has 28 days in the year 2021 
						// booking on the current day is not allowed 
						while (departing_day < 16 || departing_day > 28)
						{
							cout << endl << "Invalid Input! Please check and try again." << endl; 
							cout << "Enter day: ";
							cin.clear();
							cin.ignore();
							cin >> departing_day;
						}
						break;
						
					case 3: case 5: case 7: case 8: case 10: case 12:
						// march, may, july, august, october, and december only has 31 days in the year 2021
						while (departing_day < 1 || departing_day > 31)
						{
							cout << endl << "Invalid Input! Please check and try again." << endl; 
							cout << "Enter day: ";
							cin.clear();
							cin.ignore();
							cin >> departing_day;				
						}
						break;
						
					case 4: case 6: case 9: case 11: 
						// april, june, september and november only has 30 days in the year 2021
						while (departing_day < 1 || departing_day > 30)
						{
							cout << endl << "Invalid Input! Please check and try again." << endl; 
							cout << "Enter day: ";
							cin.clear();
							cin.ignore();
							cin >> departing_day;				
						}
						break;
				}
			}
			else
			{
				switch (departing_month)
				{
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					// january, march, may, july, august, october and december only has 31 days in the year 2022
					while (departing_day < 1 || departing_day > 31)
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter day: ";
						cin.clear();
						cin.ignore();
						cin >> departing_day;
					}
					break;
					
					case 2: 
					// february only has 28 days in the year 2022
					while (departing_day < 1 || departing_day > 28)
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter day: ";
						cin.clear();
						cin.ignore();
						cin >> departing_day;
					}
					break;
					
					case 4: case 6: case 9: case 11:
					// april, june, september and november only has 30 days in the year 2022
					while (departing_day < 1 || departing_day > 30)
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter day: ";
						cin.clear();
						cin.ignore();
						cin >> departing_day;
					}
					break;
				}		
			}	
			
			
			
			
			if (OneWay_RoundTrip == 50) // ROUNDTRIP
			{
				cout << endl << "NOTE: We do not allow booking for the departure date and return date on the same day." << endl; 
				
				cout << endl << "RETURN DATE" << endl;
				cout << "Enter year (Ex: 202X): ";
				cin >> returning_year; 
				
				while (returning_year != "2021" && returning_year != "2022")
				{
					cout << endl << "Invalid Input! Please check and try again." << endl; 
					cout << "Enter year (Ex: 202X): ";
					cin >> returning_year;	
				}
				
				if (departing_year == "2022" && returning_year == "2021") 
				{
					// the user will be forced to input the year 2022 because it 
					// isn't possible to go back to the previous year 
					// for the returning flight if your departing year is already in the year 2022
					while (returning_year != "2022")
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter year (Ex: 202X): ";
						cin >> returning_year;	
					}
				}
				
				// the departing flight is already on the last day of 2021 
				// therefore his/her only option for the returning year is 2022
				if (departing_month == 12 && departing_year == "2021" && departing_day == 31 && returning_year == "2021")
				{
					while (returning_year != "2022")
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter year (Ex: 202X): ";
						cin >> returning_year;	
					} 
				}
				
				cout << "Enter month (1-12): ";
				cin >> returning_month;
				
				if (returning_year == departing_year)
				{
					// The departing month must be the same or less than the returning month 
					// because the departing flight will happen first than the returning flight 
					while (departing_month > returning_month || returning_month > 12 || returning_month <= 0) 
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter month (1-12): ";
						cin.clear();
						cin.ignore();
						cin >> returning_month;
					}	
					
					if (departing_year == "2021" && returning_year == "2021")
					{
						switch (returning_month)
						{
							case 2: 
							// The date of the departing flight is already on the last day of february
							// so if the month that he/she will input is february again
							// there are no available day to choose from on that month
							while (departing_month == returning_month && departing_day == 28 || returning_month > 12 || returning_month <= 0 || departing_month > returning_month)
							{
								cout << endl << "Invalid Input! Please check and try again." << endl; 
								cout << "Enter month (1-12): ";
								cin.clear();
								cin.ignore();
								cin >> returning_month;
							}
							break;
							
							case 3: case 5: case 7: case 8: case 10: case 12:
							// The date of the departing flight is already on the last day of (march/may/july/august/october/december)
							// so if the month that he/she will input is (march/may/july/august/october/december) again
							// there are no available day to choose from on that month
							while (departing_month == returning_month && departing_day == 31 || returning_month > 12 || returning_month <= 0 || departing_month > returning_month)
							{
								cout << endl << "Invalid Input! Please check and try again." << endl; 
								cout << "Enter month (1-12): ";
								cin.clear();
								cin.ignore();
								cin >> returning_month;
							}
							break;
							
							case 4: case 6: case 9: case 11:
							// The date of the departing flight is already on the last day of (april/june/september/november)
							// so if the month that he/she will input is (april/june/september/november) again
							// there are no available day to choose from on that month
							while (departing_month == returning_month && departing_day == 30 || returning_month > 12 || returning_month <= 0 || departing_month > returning_month)
							{
								cout << endl << "Invalid Input! Please check and try again." << endl; 
								cout << "Enter month (1-12): ";
								cin.clear();
								cin.ignore();
								cin >> returning_month;
							}
							break;
						}
					}
					else 
					{
						// departing_year == 2022 && returning_year == 2022)
						switch (returning_month)
						{
							case 1: case 3: case 5: case 7: case 8: case 10: case 12:
							// The date of the departing flight is already on the last day of (january/march/may/july/august/october/december)
							// so if the month that he/she will input is (january/march/may/july/august/october/december) again
							// there are no available day to choose from on that month
							while (departing_month == returning_month && departing_day == 31 || returning_month > 12 || returning_month <= 0 || departing_month > returning_month)
							{
								cout << endl << "Invalid Input! Please check and try again." << endl; 
								cout << "Enter month (1-12): ";
								cin.clear();
								cin.ignore();
								cin >> returning_month;
							}
							break;
							
							case 2: 
							// The date of the departing flight is already on the last day of february
							// so if the month that he/she will input is february again
							// there are no available day to choose from on that month
							while (departing_month == returning_month && departing_day == 28 || returning_month > 12 || returning_month <= 0 || departing_month > returning_month)
							{
								cout << endl << "Invalid Input! Please check and try again." << endl; 
								cout << "Enter month (1-12): ";
								cin.clear();
								cin.ignore();
								cin >> returning_month;
							}
							break;
							
							case 4: case 6: case 9: case 11:
							// The date of the departing flight is already on the last day of (april/june/september/november)
							// so if the month that he/she will input is february again
							// there are no available day to choose from on that month
							while (departing_month == returning_month && departing_day == 30 || returning_month > 12 || returning_month <= 0 || departing_month > returning_month)
							{
								cout << endl << "Invalid Input! Please check and try again." << endl; 
								cout << "Enter month (1-12): ";
								cin.clear();
								cin.ignore();
								cin >> returning_month;
							}
							break;
						}
					}
				}
				else
				{
				/*
				if the returning year and the departing year are not the same 
				We can conclude that the departing year is 2021 and the returning year 2022 
				this can not happen in vice versa where the departing year is 2022 and the returning year is 2021	
				
				the user can freely choose any month in the year 2022 because his/her departing date is in the year 2021
				*/
					while (returning_month <= 0 || returning_month > 12)
					{
						cout << endl << "Invalid Input! Please check and try again." << endl; 
						cout << "Enter month (1-12): ";
						cin >> returning_month;
					}	
				}
				
				
				cout << "Enter day: ";
				cin >> returning_day;
				
				if (returning_year == departing_year)
				{
					if (returning_year == "2021")
					{
						if (returning_month == departing_month)
						{
							switch (returning_month)
							{
								case 2:
								// our airline does not allow the departure date and the return date to happen on the same day 
								// so the user has to choose the days after the departure date on that month 
								while (returning_day <= departing_day || returning_day < 1 || returning_day > 28)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;	
								
								case 3: case 5: case 7: case 8: case 10: case 12:
								// our airline does not allow the departure date and the return date to happen on the same day 
								// so the user has to choose the days after the departure date on that month 	
								while (returning_day <= departing_day || returning_day < 1 || returning_day > 31)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
								
								case 4: case 6: case 9: case 11:
								// our airline does not allow the departure date and the return date to happen on the same day 
								// so the user has to choose the days after the departure date on that month 
								while (returning_day <= departing_day || returning_day < 1 || returning_day > 30)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;					
							}
						}
						else
						{
							switch (returning_month)
							{	
								case 3: case 5: case 7: case 8: case 10: case 12:
								// march, may, july, august, october, and december only has 31 days in the year 2021
								while (returning_day < 1 || returning_day > 31)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;				
								}
								break;
								
								case 4: case 6: case 9: case 11: 
								// april, june, september and november only has 30 days in the year 2021
								while (returning_day < 1 || returning_day > 30)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;				
								}
								break;	
							}
						}
					}
					else 
					{
						// the departing and returning year is 2022
						if (returning_month == departing_month)
						{
							switch (returning_month)
							{
								case 1: case 3: case 5: case 7: case 8: case 10: case 12:
								// our airline does not allow the departure date and the return date to happen on the same day 
								// so the user has to choose the days after the departure date on that month 
								while (returning_day <= departing_day || returning_day < 1 || returning_day > 31)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
								
								case 2:
								// our airline does not allow the departure date and the return date to happen on the same day 
								// so the user has to choose the days after the departure date on that month 
								while (returning_day <= departing_day || returning_day < 1 || returning_day > 28)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
								
								case 4: case 6: case 9: case 11:
								// our airline does not allow the departure date and the return date to happen on the same day 
								// so the user has to choose the days after the departure date on that month 
								while (returning_day <= departing_day || returning_day < 1 || returning_day > 30)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
							}
						}
						else
						{
							switch (returning_month)	
							{
								case 3: case 5: case 7: case 8: case 10: case 12:
								// march, may, july, august, october and december only has 31 days in the year 2022
								while (returning_day < 1 || returning_day > 31)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
								
								case 2: 
								// february only has 28 days in the year 2022
								while (returning_day < 1 || returning_day > 28)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
								
								case 4: case 6: case 9: case 11:
								// april, june, september and november only has 30 days in the year 2022
								while (returning_day < 1 || returning_day > 30)
								{
									cout << endl << "Invalid Input! Please check and try again." << endl; 
									cout << "Enter day: ";
									cin.clear();
									cin.ignore();
									cin >> returning_day;
								}
								break;
							}
						}
					}
				}
				
				
				
				
				/*
				if the returning year and the departing year are not the same 
				We can conclude that the departing year is 2021 and the returning year 2022 
				this can not happen in vice versa where the departing year is 2022 and the returning year is 2021	
				
				the user can freely choose any day of on any month in the year 2022 
				because his/her departing date is in the year 2021
				*/
				if (departing_year != returning_year) 
				{
					switch (returning_month)
					{
						case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						// january, march, may, july, august, october and december only has 31 days in the year 2022
						while (returning_day < 1 || returning_day > 31)
						{
							cout << endl << "Invalid Input! Please check and try again." << endl; 
							cout << "Enter day: ";
							cin.clear();
							cin.ignore();
							cin >> departing_day;
						}
						break;
						
						case 2: 
						// february only has 28 days in the year 2022
						while (returning_day < 1 || returning_day > 28)
						{
							cout << endl << "Invalid Input! Please check and try again." << endl; 
							cout << "Enter day: ";
							cin.clear();
							cin.ignore();
							cin >> departing_day;
						}
						break;
						
						case 4: case 6: case 9: case 11:
						// april, june, september and november only has 30 days in the year 2022
						while (returning_day < 1 || returning_day > 30)
						{
							cout << endl << "Invalid Input! Please check and try again." << endl; 
							cout << "Enter day: ";
							cin.clear();
							cin.ignore();
							cin >> departing_day;
						}
						break;
					}
				}
			}
			
			cout << endl;
			cout << "  ________________________________________________________________________________________________ " << endl;
			cout << " |                                                                                                |" << endl;
			cout << " |                                      SELECT AN OPTION:                                         |" << endl;
			cout << " |                                   (1) CHANGE THE DATE                                          |" << endl;
			cout << " |                                   (2) CONTINUE                                                 |" << endl; 
			cout << " |                                   (3) EXIT PROGRAM                                             |" << endl;
			cout << " |                                                                                                |" << endl;
			cout << " |________________________________________________________________________________________________|" << endl; 
			userContinue = getch();
				
			while (userContinue != 49 && userContinue != 50 && userContinue != 51) // ASCII CODE : 1 - 49    2 - 50   3 -51
			{
				cin.clear(); 
				cin.ignore();
				cout << endl;
				cout << "  ________________________________________________________________________________________________" << endl;
				cout << " |                                                                                                |" << endl;
				cout << " |                               Invalid Input! Please try again.                                 |" << endl;
				cout << " |________________________________________________________________________________________________|" << endl << endl;
				userContinue = getch();
			}
			
			if (userContinue == 49)
			{
				change_date = "yes";
			}
			else if (userContinue == 50)
			{
				change_date = "no";
			}
			else
			{
				change_date = "no";
				return 0; // the program will stop because the user wants to exit the program
			}
		}
		while (change_date == "yes");
		
		
		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		system ("cls"); // clears the screen
	
		/*	 
			The following lines will display the design for the 7th ouput
			It will display the FLIGHT SCHEDULE OF THE DEPARTING FLIGHT 
							
			These are the colors that we used for the output:
			SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
			SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
			SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
			SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
							
			SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
		*/ 
		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; 
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273);  cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273);  cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "          "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                      "; SetConsoleTextAttribute(color, 187); cout << "                                                           " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   SELECT YOUR DEPARTING FLIGHT   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                                                           " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                      "; SetConsoleTextAttribute(color, 187); cout << "                                                           " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 153); cout << "                                                                                                    " << endl;		
		SetConsoleTextAttribute(color, 7929);
	
		switch (departing_month)
		{
			case 1:
				Departing_Month_Name = "January";
				break;
				
			case 2:
				Departing_Month_Name = "February";
				break;
				
			case 3: 
				Departing_Month_Name = "March";
				break;
				
			case 4:
				Departing_Month_Name = "April";
				break;
				
			case 5:
				Departing_Month_Name = "May";
				break;
				
			case 6:
				Departing_Month_Name = "June";
				break;
				
			case 7:
				Departing_Month_Name = "July";
				break;
				
			case 8:
				Departing_Month_Name = "August";
				break;
				
			case 9:
				Departing_Month_Name = "September";
				break;
				
			case 10:
				Departing_Month_Name = "October";
				break;
				
			case 11:
				Departing_Month_Name = "November";
				break;
				
			case 12:
				Departing_Month_Name = "December";
				break;
		}
		
		cout << "Date: " << Departing_Month_Name << " " << departing_day << ", " << departing_year << endl;
		switch (destination)
		{
			case 'A': case 'a':
				destination_name = "Batanes";	
				cout << "MANILA (MNL) ----X---- BATANES (BSO)" << endl << endl; 	
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7A 213                06:00 am                     MNL         1 hour and 20 minutes    " << endl;
				cout << "       |                        07:20 am                     BSO                                  " << endl << endl;
				cout << "  (2)  |  7A 225                13:00 pm                     MNL         1 hour and 25 minutes    " << endl;
				cout << "       |                        14:25 pm                     BSO                                  " << endl << endl;
				cout << "  (3)  |  7A 216                19:00 pm                     MNL         1 hour and 20 minutes    " << endl;
				cout << "       |                        20:20 pm                     BSO                                  " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49:
						Departing_Flight_No = "7A 213";
						Departing_Departure_Time = "06:00 am";
						Departing_Arrival_Time = "07:20 am"; 
						break;
					
					case 50: 
						Departing_Flight_No = "7A 225";
						Departing_Departure_Time = "13:00 pm";
						Departing_Arrival_Time = "14:25 pm";
						break;
					
					case 51:
						Departing_Flight_No = "7A 216";
						Departing_Departure_Time = "19:00 pm";
						Departing_Arrival_Time = "20:20 pm";
						break;
				}
				break;
		
			case 'B': case 'b':
				destination_name = "Bacolod";		
				cout << "MANILA (MNL) ----X---- BACOLOD (BCD)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7A 218                04:00 am                     MNL         1 hour and 25 minutes    " << endl;
				cout << "       |                        05:25 am                     BCD                                  " << endl << endl;
				cout << "  (2)  |  7A 210                08:00 am                     MNL         1 hour and 25 minutes    " << endl;
				cout << "       |                        09:25 am                     BCD                                  " << endl << endl;
				cout << "  (3)  |  7A 221                15:00 pm                     MNL         1 hour and 30 minutes    " << endl;
				cout << "       |                        16:30 pm                     BCD                                  " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49:
						Departing_Flight_No = "7A 218";
						Departing_Departure_Time = "04:00 am";
						Departing_Arrival_Time = "05:25 am";
						break;
					
					case 50:
						Departing_Flight_No = "7A 210";
						Departing_Departure_Time = "08:00 am";
						Departing_Arrival_Time = "09:25 am";
						break;
					
					case 51:
						Departing_Flight_No = "7A 221";
						Departing_Departure_Time = "15:00 pm";
						Departing_Arrival_Time = "16:30 pm";
						break;
				}
				break;
			
			case 'C': case 'c':
				destination_name = "Palawan";
				cout << "MANILA (MNL) ----X---- PALAWAN (PPS)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7A 220                05:00 am                     MNL         1 hour and 25 minutes    " << endl;
				cout << "       |                        06:25 am                     PPS                                  " << endl << endl;
				cout << "  (2)  |  7A 212                09:00 am                     MNL         1 hour and 30 minutes    " << endl;
				cout << "       |                        10:30 am                     PPS                                  " << endl << endl;
				cout << "  (3)  |  7A 224                13:00 pm                     MNL         1 hour and 30 minutes    " << endl;
				cout << "       |                        14:30 pm                     PPS                                  " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49:
						Departing_Flight_No = "7A 220";
						Departing_Departure_Time = "05:00 am";
						Departing_Arrival_Time = "06:25 am";
						break;
					
					case 50:
						Departing_Flight_No = "7A 212";
						Departing_Departure_Time = "09:00 am";
						Departing_Arrival_Time = "10:30 am";
						break;
					
					case 51:
						Departing_Flight_No = "7A 224";
						Departing_Departure_Time = "13:00 pm";
						Departing_Arrival_Time = "14:30 pm";
						break;
				}
				break;
		
			case 'D':	case 'd':
				destination_name = "Davao";
				cout << "MANILA (MNL) ----X---- DAVAO (DVO)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7A 214                06:00 am                     MNL         1 hour and 50 minutes    " << endl;
				cout << "       |                        07:50 am                     DVO                                  " << endl << endl;
				cout << "  (2)  |  7A 223                11:00 am                     MNL         1 hour and 50 minutes    " << endl;
				cout << "       |                        12:50 pm                     DVO                                  " << endl << endl;
				cout << "  (3)  |  7A 217                14:00 pm                     MNL                2 hours           " << endl;
				cout << "       |                        16:00 pm                     DVO                                  " << endl << endl;	
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49: 
						Departing_Flight_No = "7A 214";
						Departing_Departure_Time = "06:00 am";
						Departing_Arrival_Time = "07:50 am";
						break;
					
					case 50: 
						Departing_Flight_No = "7A 223";
						Departing_Departure_Time = "11:00 am";
						Departing_Arrival_Time = "12:50 pm";
						break;
						
					case 51:
						Departing_Flight_No = "7A 217";
						Departing_Departure_Time = "14:00 pm";
						Departing_Arrival_Time = "16:00 pm";
						break;
				}
				break;
			
			case 'E': case 'e':
				destination_name = "Malaysia";
				cout << "MANILA (MNL) ----X---- MALAYSIA (KUL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7B 215                04:00 am                     MNL         3 hours and 55 minutes   " << endl;
				cout << "       |                        07:55 am                     KUL                                  " << endl << endl;
				cout << "  (2)  |  7B 211                10:00 am                     MNL         3 hours and 50 minutes   " << endl;
				cout << "       |                        13:50 pm                     KUL                                  " << endl << endl;
				cout << "  (3)  |  7B 222                17:00 pm                     MNL         3 hours and 55 minutes   " << endl;
				cout << "       |                        20:55 pm                     KUL	                               " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49: 
						Departing_Flight_No = "7B 215";
						Departing_Departure_Time = "04:00 am";
						Departing_Arrival_Time = "07:55 am";
						break;
					
					case 50:
						Departing_Flight_No = "7B 211";
						Departing_Departure_Time = "10:00 am";
						Departing_Arrival_Time = "13:50 pm";
						break;
					
					case 51:
						Departing_Flight_No = "7B 222";
						Departing_Departure_Time = "17:00 pm";
						Departing_Arrival_Time = "20:55 pm";
						break;
				}
				break;
	
			case 'F': case 'f':
				destination_name = "Indonesia";
				cout << "MANILA (MNL) ----X---- INDONESIA (DPS)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7B 219                04:00 am                     MNL         8 hours and 45 minutes   " << endl;
				cout << "       |                        12:45 pm                     DPS                                  " << endl << endl;
				cout << "  (2)  |  7B 234                07:00 am                     MNL         8 hours and 50 minutes   " << endl;
				cout << "       |                        15:50 pm                     DPS                                  " << endl << endl;
				cout << "  (3)  |  7B 229                09:00 am                     MNL         8 hours and 45 minutes   " << endl;
				cout << "       |                        17:45 pm                     DPS	                               " << endl << endl;	
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49: 
						Departing_Flight_No = "7B 219";
						Departing_Departure_Time = "4:00 am";
						Departing_Arrival_Time = "12:45 pm";
						break;
						
					case 50:
						Departing_Flight_No = "7B 234";
						Departing_Departure_Time = "07:00 am";
						Departing_Arrival_Time = "15:50 pm";
						break;
						
					case 51:
						Departing_Flight_No = "7B 229";
						Departing_Departure_Time = "09:00 am";
						Departing_Arrival_Time = "17:45 pm";
						break;
				}
				break;
			
			case 'G': case 'g':
				destination_name = "Singapore";
				cout << "MANILA (MNL) ----X---- SINGAPORE (SIN)" << endl << endl; 
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7B 232                08:00 am                     MNL         3 hours and 45 minutes   " << endl;
				cout << "       |                        11:45 am                     SIN                                  " << endl << endl;
				cout << "  (2)  |  7B 226                13:00 pm                     MNL         3 hours and 45 minutes   " << endl;
				cout << "       |                        16:45 pm                     SIN                                  " << endl << endl;
				cout << "  (3)  |  7B 235                17:00 pm                     MNL         3 hours and 45 minutes   " << endl;
				cout << "       |                        20:45 pm                     SIN	                               " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49: 
						Departing_Flight_No = "7B 232";
						Departing_Departure_Time = "08:00 am";
						Departing_Arrival_Time = "11:45 am";
						break;
						
					case 50:
						Departing_Flight_No = "7B 226";
						Departing_Departure_Time = "13:00 pm";
						Departing_Arrival_Time = "16:45 pm";
						break;
						
					case 51: 
						Departing_Flight_No = "7B 235";
						Departing_Departure_Time = "17:00 pm";
						Departing_Arrival_Time = "20:45 pm";
						break;
				}
				break;
			
			
			case 'H': case 'h':
				destination_name = "South Korea";
				cout << "MANILA (MNL) ----X---- SOUTH KOREA (ICN)" << endl << endl; 
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7B 230                10:00 am                     MNL         4 hours and 10 minutes   " << endl;
				cout << "       |                        14:10 pm                     ICN                                  " << endl << endl;
				cout << "  (2)  |  7B 228                13:00 pm                     MNL         4 hours and 10 minutes   " << endl;
				cout << "       |                        17:10 pm                     ICN                                  " << endl << endl;
				cout << "  (3)  |  7B 233                15:00 pm                     MNL         4 hours and 15 minutes   " << endl;
				cout << "       |                        19:15 pm                     ICN	                               " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49: 
						Departing_Flight_No = "7B 230";
						Departing_Departure_Time = "10:00 am";
						Departing_Arrival_Time = "14:10 pm";
						break;
						
					case 50:
						Departing_Flight_No = "7B 228";
						Departing_Departure_Time = "13:00 pm";
						Departing_Arrival_Time = "17:10 pm";
						break;
						
					case 51: 
						Departing_Flight_No = "7B 233";
						Departing_Departure_Time = "15:00 pm";
						Departing_Arrival_Time = "19:15 pm";
						break;
				}
				break;
			
			
			case 'I': case 'i':
				destination_name = "Japan";
				cout << "MANILA (MNL) ----X---- JAPAN (NRT)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  7B 204                07:00 am                     MNL         4 hours and 15 minutes   " << endl;
				cout << "       |                        11:15 am                     NRT                                  " << endl << endl;
				cout << "  (2)  |  7B 209                11:00 am                     MNL         4 hours and 15 minutes   " << endl;
				cout << "       |                        15:15 pm                     NRT                                  " << endl << endl;
				cout << "  (3)  |  7B 231                13:00 pm                     MNL         4 hours and 10 minutes   " << endl;
				cout << "       |                        17:10 pm                     NRT	                               " << endl << endl;
				cout << "___________________________________________________________________________________________________" << endl;
				Departing_Flight_Schedule = getch();
				
				while (Departing_Flight_Schedule != 49 && Departing_Flight_Schedule != 50 && Departing_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Departing_Flight_Schedule = getch();
				}
				
				switch (Departing_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
				{
					case 49: 
						Departing_Flight_No = "7B 204";
						Departing_Departure_Time = "07:00 am";
						Departing_Arrival_Time = "11:15 am";
						break;
						
					case 50:
						Departing_Flight_No = "7B 209";
						Departing_Departure_Time = "11:00 am";
						Departing_Arrival_Time = "15:15 pm";
						break;
						
					case 51: 
						Departing_Flight_No = "7B 231";
						Departing_Departure_Time = "13:00 pm";
						Departing_Arrival_Time = "17:10 pm";
						break;
				}
				break;				
		}
			
		
		if (OneWay_RoundTrip == 50)
		{
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		system ("cls"); // clears the screen
				
		/*	 
			The following lines will display the design 
			It will display the FLIGHT SCHEDULE OF THE RETURNING FLIGHT 
							
			These are the colors that we used for the output:
			SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
			SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
			SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
			SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
			SetConsoleTextAttribute (color, 204) - background (red) 		& foreground (red)				
							
			SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
		*/
		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; 
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273);  cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273);  cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "          "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                      "; SetConsoleTextAttribute(color, 187); cout << "                                                           " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   SELECT YOUR RETURNING FLIGHT   "; SetConsoleTextAttribute(color, 204); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                                                           " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 204); cout << "                                      "; SetConsoleTextAttribute(color, 187); cout << "                                                           " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 153); cout << "                                                                                                    " << endl;		
		SetConsoleTextAttribute(color, 7929);		
		
		switch (returning_month)
		{
			case 1:
				Returning_Month_Name = "January";
				
			case 2:
				Returning_Month_Name = "February";
				break;
				
			case 3:
				Returning_Month_Name = "March";
				break;
				
			case 4:
				Returning_Month_Name = "April";
				break;
				
			case 5:
				Returning_Month_Name = "May";
				break;
				
			case 6:
				Returning_Month_Name = "June";
				break;
				
			case 7:
				Returning_Month_Name = "July";
				break;
				
			case 8:
				Returning_Month_Name = "August";
				break;
				
			case 9:
				Returning_Month_Name = "September";
				break;
				
			case 10:
				Returning_Month_Name = "October";
				break;
				
			case 11:
				Returning_Month_Name = "November";
				break;
				
			case 12:
				Returning_Month_Name = "December";
				break;
		}
		
		cout << "Date: " << Returning_Month_Name << " " << returning_day << ", " << returning_year << endl;
		switch (destination)
		{
			case 'A': case 'a':
				cout << "BATANES (BSO) ----X---- MANILA (MNL)" << endl << endl; 	
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8A 325                12:00 pm                     BSO         1 hour and 20 minutes    " << endl;
				cout << "       |                        13:20 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8A 316                14:00 pm                     BSO         1 hour and 25 minutes    " << endl;
				cout << "       |                        15:25 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8A 313                18:00 pm                     BSO         1 hour and 20 minutes    " << endl;
				cout << "       |                        19:20 pm                     MNL                                  " << endl << endl;						
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
				
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8A 325";
							Returning_Departure_Time = "12:00 pm";
							Returning_Arrival_Time = "13:20 pm";
							break;
							
						case 50: 
							Returning_Flight_No = "8A 316";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "15:25 pm";
							break;
							
						case 51: 
							Returning_Flight_No = "8A 313";
							Returning_Departure_Time = "18:00 pm";
							Returning_Arrival_Time = "19:20 pm";
							break;
					}
				break;
			
			case 'B': case 'b':
				cout << "BACOLOD (BCD) ----X---- MANILA (MNL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8A 310                14:00 pm                     BCD         1 hour and 25 minutes    " << endl;
				cout << "       |                        15:25 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8A 321                16:00 pm                     BCD         1 hour and 25 minutes    " << endl;
				cout << "       |                        17:25 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8A 318                19:00 pm                     BCD         1 hour and 30 minutes    " << endl;
				cout << "       |                        20:30 pm                     MNL                                  " << endl << endl;						
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
				
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
		 			Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49: 
							Returning_Flight_No = "8A 310";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "15:25 pm";
							break;
						
						case 50: 
							Returning_Flight_No = "8A 321";
							Returning_Departure_Time = "16:00 pm";
							Returning_Arrival_Time = "17:25 pm";
							break;
							
						case 51: 
							Returning_Flight_No = "8A 318";
							Returning_Departure_Time = "19:00 pm";
							Returning_Arrival_Time = "20:25 pm";
							break;
					}
				break;
			
			case 'C': case 'c':
				cout << "PALAWAN (PPS) ----X---- MANILA (MNL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8A 312                13:00 pm                     PPS         1 hour and 25 minutes    " << endl;
				cout << "       |                        14:25 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8A 324                15:00 pm                     PPS         1 hour and 30 minutes    " << endl;
				cout << "       |                        16:30 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8A 320                18:00 pm                     PPS         1 hour and 30 minutes    " << endl;
				cout << "       |                        19:30 pm                     MNL                                  " << endl << endl;			
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
	
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8A 312";
							Returning_Departure_Time = "13:00 pm";
							Returning_Arrival_Time = "14:25 pm";
							break;
							
						case 50: 
							Returning_Flight_No = "8A 324";
							Returning_Departure_Time = "15:00 pm";
							Returning_Arrival_Time = "16:30 pm";
							break;
							
						case 51:
							Returning_Flight_No = "8A 320";
							Returning_Departure_Time = "18:00 pm";
							Returning_Arrival_Time = "19:30 pm";
							break;
					}
				break;
			
			case 'D': case 'd':
				cout << "DAVAO (DVO) ----X---- MANILA (MNL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8A 314                12:00 pm                     DVO         1 hour and 50 minutes    " << endl;
				cout << "       |                        13:50 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8A 317                15:00 pm                     DVO         1 hour and 50 minutes    " << endl;
				cout << "       |                        16:50 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8A 323                16:00 pm                     DVO                2 hours           " << endl;
				cout << "       |                        18:00 pm                     MNL                                  " << endl << endl;						
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
	
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8A 314";
							Returning_Departure_Time = "12:00 pm";
							Returning_Arrival_Time = "13:50 pm";
							break;
							
						case 50:
							Returning_Flight_No = "8A 317";
							Returning_Departure_Time = "15:00 pm";
							Returning_Arrival_Time = "16:50 pm";
							break;
							
						case 51: 
							Returning_Flight_No = "8A 323";
							Returning_Departure_Time = "16:00 pm";
							Returning_Arrival_Time = "18:00 pm";
							break;
					}
				break;
			
			case 'E': case 'e':
				cout << "MALAYSIA (KUL) ----X---- MANILA (MNL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8B 322                13:00 pm                     KUL         3 hours and 55 minutes   " << endl;
				cout << "       |                        16:55 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8B 315                14:00 pm                     KUL         3 hours and 50 minutes   " << endl;
				cout << "       |                        17:50 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8B 311                16:00 pm                     KUL         3 hours and 55 minutes   " << endl;
				cout << "       |                        19:55 pm                     MNL	                               " << endl << endl;					
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
				
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8B 322";
							Returning_Departure_Time = "13:00 pm";
							Returning_Arrival_Time = "16:55 pm";
							break;
							
						case 50: 
							Returning_Flight_No = "8B 315";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "17:50 pm";
							break;
							
						case 51:
							Returning_Flight_No = "8B 311";
							Returning_Departure_Time = "16:00 pm";
							Returning_Arrival_Time = "19:55 pm";
							break;
					}
				break;
		
			case 'F': case 'f':
				cout << "INDONESIA (DPS) ----X---- MANILA (MNL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8B 334                12:00 pm                     DPS         8 hours and 45 minutes   " << endl;
				cout << "       |                        20:45 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8B 329                14:00 pm                     DPS         8 hours and 50 minutes   " << endl;
				cout << "       |                        22:50 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8B 319                17:00 pm                     DPS         8 hours and 45 minutes   " << endl;
				cout << "       |                        01:45 am                     MNL	                               " << endl << endl;		
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
	
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8B 334";
							Returning_Departure_Time = "12:00 pm";
							Returning_Arrival_Time = "20:45 pm";
							break;
							
						case 50: 
							Returning_Flight_No = "8B 329";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "22:50 pm";
							break;
							
						case 51:
							Returning_Flight_No = "8B 319";
							Returning_Departure_Time = "17:00 pm";
							Returning_Arrival_Time = "01:45 am";
							break;
					}
				break;
			
			case 'G': case 'g':
				cout << "SINGAPORE (SIN) ----X---- MANILA (MNL)" << endl << endl; 
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8B 326                13:00 pm                     SIN         3 hours and 45 minutes   " << endl;
				cout << "       |                        16:45 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8B 335                14:00 pm                     SIN         3 hours and 45 minutes   " << endl;
				cout << "       |                        17:45 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8B 323                15:00 pm                     SIN         3 hours and 45 minutes   " << endl;
				cout << "       |                        18:45 pm                     MNL	                               " << endl << endl;		
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
	
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
					
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8B 326";
							Returning_Departure_Time = "13:00 pm";
							Returning_Arrival_Time = "16:45 pm";
							break;
							
						case 50:
							Returning_Flight_No = "8B 335";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "17:45 pm";
							break;
							
						case 51:
							Returning_Flight_No = "8B 323";
							Returning_Departure_Time = "15:00 pm";
							Returning_Arrival_Time = "18:45 pm";
							break;
					}
				break;
			
			case 'H': case 'h':
				cout << "SOUTH KOREA (ICN) ----X---- MANILA (MNL)" << endl << endl; 
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8B 333                12:00 pm                     ICN         4 hours and 10 minutes   " << endl;
				cout << "       |                        16:10 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8B 330                14:00 pm                     ICN         4 hours and 10 minutes   " << endl;
				cout << "       |                        18:10 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8B 328                15:00 pm                     ICN         4 hours and 15 minutes   " << endl;
				cout << "       |                        19:15 pm                     MNL	                               " << endl << endl;	 
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
	
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8B 333";
							Returning_Departure_Time = "12:00 pm";
							Returning_Arrival_Time = "16:10 pm";
							break;
							
						case 50:
							Returning_Flight_No = "8B 330";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "18:10 pm";
							break;
						
						case 51:
							Returning_Flight_No = "8B 328";
							Returning_Departure_Time = "15:00 pm";
							Returning_Arrival_Time = "19:15 pm";
							break;
					}
				break;
			
			case 'I': case 'i':
				cout << "JAPAN (NRT) ----X---- MANILA (MNL)" << endl << endl;
				cout << "Options _Flight No.___________Depart/Arrive________________Airport_____________Duration___________" << endl;
				cout << "  (1)  |  8B 331                14:00 pm                     NRT         4 hours and 15 minutes   " << endl;
				cout << "       |                        18:15 pm                     MNL                                  " << endl << endl;
				cout << "  (2)  |  8B 304                16:00 pm                     NRT         4 hours and 15 minutes   " << endl;
				cout << "       |                        20:15 pm                     MNL                                  " << endl << endl;
				cout << "  (3)  |  8B 309                17:00 pm                     NRT         4 hours and 10 minutes   " << endl;
				cout << "       |                        21:10 pm                     MNL	                               " << endl << endl;			
				cout << "___________________________________________________________________________________________________" << endl;
				Returning_Flight_Schedule = getch();	
				
				while (Returning_Flight_Schedule != 49 && Returning_Flight_Schedule != 50 && Returning_Flight_Schedule != 51)
				{
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					Returning_Flight_Schedule = getch();	
				}
				
				switch (Returning_Flight_Schedule) // ASCII CODE : 1 - 49    2 - 50   3 - 51
					{
						case 49:
							Returning_Flight_No = "8B 331";
							Returning_Departure_Time = "14:00 pm";
							Returning_Arrival_Time = "18:15 pm";
							break;
							
						case 50:
							Returning_Flight_No = "8B 304";
							Returning_Departure_Time = "16:00 pm";
							Returning_Arrival_Time = "20:15 pm";
							break;
							
						case 51:
							Returning_Flight_No = "8B 309";
							Returning_Departure_Time = "17:00 pm";
							Returning_Arrival_Time = "21:10 pm";
							break;       
					}
				break;				
			}
	}
			
			
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	system ("cls"); // clears the screen
	system ("color b9"); // teal background and blue foreground
	
	// cin.clear - clear the error flags 
	// cin.ignore - discard the input contents that caused the failure or error
	
	/*	 
		The following lines will display the design 
		then it will show information about the baggage and the insurance (additional charges and the baggage allowance) 
							
		These are the colors that we used for the output:
		SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
		SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
		SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
		SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
						
		SetConsoleTextAttribute (color, 508)  - background (white) & foreground (red)				
		SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
	*/
	
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "      "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "        "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                "; SetConsoleTextAttribute(color, 187); cout << "                                                                 " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   NOW ENTER YOUR DETAILS   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                                                                 " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                "; SetConsoleTextAttribute(color, 187); cout << "                                                                 " << endl;
	SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
	SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   BAGGAGE INFORMATION                                                                    "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		
	switch (type_of_flight) // ASCII CODE : 1 - 49    2 - 50 
	{
		case 49: // DOMESTIC 
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   The following applies to DOMESTIC FLIGHTS:                                             "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   1. The baggage allowance is "; SetConsoleTextAttribute(color, 508); cout << "8 kilos (required baggage weight) per person.              "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			break;
			
		case 50: // INTERNATIONAL
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   The following applies to INTERNATIONAL FLIGHTS:                                        "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   1. The baggage allowance is "; SetConsoleTextAttribute(color, 508); cout << "10 kilos (required baggage weight) per person.             "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
			break;
	}	
	
	
	switch (luxury_type) // ASCII CODE : 1 - 49    2 - 50 
	{
		case 49: // PRIVATE JET CLASS
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   2. You will be charge an additional fee of "; SetConsoleTextAttribute(color, 508); cout << "P1250 per kilo"; SetConsoleTextAttribute(color, 7929); cout << " if the baggage exceeds       ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "      the required weight.                                                                ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   3. The baggage weight limit is"; SetConsoleTextAttribute(color, 508); cout << " 32.5 kilos per person                                   ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "                                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   INSURANCE INFORMATION                                                                  ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   1. You will be charge an additional fee of "; SetConsoleTextAttribute(color, 508); cout << "P4500"; SetConsoleTextAttribute(color, 7929); cout << " if you want to avail an insurance.    ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		break;
	 	
	 	case 50: // BUSINESS JET CLASS
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   2. You will be charge an additional fee of "; SetConsoleTextAttribute(color, 508); cout << "1450 per kilo"; SetConsoleTextAttribute(color, 7929); cout << " if the baggage exceeds        ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "      the required weight.                                                                ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   3. The baggage weight limit is"; SetConsoleTextAttribute(color, 508); cout << " 32.5 kilos per person                                   ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "                                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   INSURANCE INFORMATION                                                                  ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   1. You will be charge an additional fee of "; SetConsoleTextAttribute(color, 508); cout << "P8500"; SetConsoleTextAttribute(color, 7929); cout << " if you want to avail an insurance.    ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		break;
	} 

		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255);  cout << "                                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   DISCOUNT INFORMATION                                                                   ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Passenger type:                                                                        ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Child  - 2%                                                                            ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Adult  - none                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Senior - 20%                                                                           ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255);  cout << "                                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   * Group reservation more than five (5) persons - 5%                                    ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255);  cout << "                                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   VAT (VALUE ADDED TAX) INFORMATION                                                      ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Passenger type:                                                                        ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Child   - 12%                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Adult   - 12%                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 7929); cout << "   Senior  - none                                                                         ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 255);  cout << "                                                                                          ";  SetConsoleTextAttribute(color, 153); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;		
		
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 153); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7865); 
		SetConsoleTextAttribute(color, 7865); cout << "  Press any key to continue ...                                                                     ";
		userContinue = getch();	




		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		do 
		{
			passenger1_baggage = 0;
			passenger2_baggage = 0;
			passenger3_baggage = 0;
			passenger4_baggage = 0;
			passenger5_baggage = 0;
			passenger6_baggage = 0;
			passenger7_baggage = 0;
			passenger8_baggage = 0;
			passenger9_baggage = 0;
			passenger10_baggage = 0;
			
			passenger1_insurance = 0;
			passenger2_insurance = 0;
			passenger3_insurance = 0;
			passenger4_insurance = 0;
			passenger5_insurance = 0;
			passenger6_insurance = 0;
			passenger7_insurance = 0;
			passenger8_insurance = 0;
			passenger9_insurance = 0;
			passenger10_insurance = 0;
			
			child_baggage = 0;
			adult_baggage = 0;
			senior_baggage = 0;
			
			child_insurance = 0;
			adult_insurance = 0;
			senior_insurance = 0;
			
			child = 0; 
			adult = 0;
			senior = 0; 
			
			system ("cls"); // clears the screen 
			system ("color f9"); // white background and blue foreground
			cout << endl << "   Passenger 1" << endl;
			cout << "   First Name: ";
			cin.ignore(); // discards the "\n" left in the input buffer
			getline (cin, passenger1_Firstname);
					
			cout << "   Surname: ";
			getline (cin, passenger1_Surname);
			
			cout << "   Avail an insurance? (yes/no): "; 
			cin >> Avail_Insurance;
			
			while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
			{
				cout << endl << "   Invalid Input! Please check and try again." << endl; 
				cout << "   Avail an insurance? (yes/no): "; 
				cin.clear();
				cin.ignore();	
				cin >> Avail_Insurance;
			}
			
			if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
			{
				if (luxury_type == 49) // PRIVATE JET CLASS
				{
					passenger1_insurance = 4500;
				}
				else // BUSINESS JET CLASS
				{
					passenger1_insurance = 8500;
				}
			}
			else
			{
				// they don't have any additional charges because they didn't avail an insurance 
				passenger1_insurance = 0;
			}
			
			cout << "   Enter baggage weight (kilo): ";
			cin >> passenger1_baggage;
		
			//  cin.fail() detects whether the value entered fits the value defined in the variable.
			while (cin.fail() || passenger1_baggage < 0 || passenger1_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
			{
				cout << endl << "   Invalid Input! Please check and try again." << endl; 
				cout << "   Enter baggage weight (kilo): "; 
				cin.clear(); 
				cin.ignore();
				cin >> passenger1_baggage;
			}
		 
			if (type_of_flight == 49) // DOMESTIC
			{
				switch (luxury_type)
				{
					case 49: // PRIVATE JET CLASS
						if (passenger1_baggage > 8) 
						{
							passenger1_baggage = passenger1_baggage - 8;
							passenger1_baggage = passenger1_baggage * 1250;
						}
						else 
						{
							// if the baggage didn't exceed the baggage allowance 
							// it will assign 0 they don't have any additional charges that they need to pay 
							passenger1_baggage = 0;
						}
						break;
						
					case 50: // BUSINESS JET CLASS
						if (passenger1_baggage > 8) 
						{
							passenger1_baggage = passenger1_baggage - 8;
							passenger1_baggage = passenger1_baggage * 1450;
						}
						else 
						{
							// if the baggage didn't exceed the baggage allowance 
							// it will assign 0 they don't have any additional charges that they need to pay
							passenger1_baggage = 0;
						}
						break;
				}
			}
			else // INTERNATIONAL 
			{
				switch (luxury_type)
				{
					case 49: // PRIVATE JET CLASS
						if (passenger1_baggage > 10) 
						{
							passenger1_baggage = passenger1_baggage - 10;
							passenger1_baggage = passenger1_baggage * 1250;
						}
						else 
						{
							// if the baggage didn't exceed the baggage allowance 
							// it will assign 0 they don't have any additional charges that they need to pay
							passenger1_baggage = 0;
						}
						break;
						
					case 50: // BUSINESS JET CLASS
						if (passenger1_baggage > 10) 
						{
							passenger1_baggage = passenger1_baggage - 10;
							passenger1_baggage = passenger1_baggage * 1450;
						}
						else 
						{
							// if the baggage didn't exceed the baggage allowance 
							// it will assign 0 they don't have any additional charges that they need to pay
							passenger1_baggage = 0;
						}
						break;
				}
			}
		
			cout << "   Age: ";
			cin >> passenger1_Age;		
			
			while (passenger1_Age < 1 || passenger1_Age > 140) // our limit for the age of the passenger is 140 
			{
				cout << endl << "   Invalid Input! Please check and try again." << endl; 
				cout << "   Age: "; 
				cin.clear();
				cin.ignore();
				cin >> passenger1_Age;
			}
			
			if (passenger1_Age >= 1 && passenger1_Age <= 13)
			{
				passenger1_type = "child";
				child = child + 1; // so that the program will know how many passengers there are that are classified as child
				child_baggage = child_baggage + passenger1_baggage; 
				child_insurance = child_insurance + passenger1_insurance;
			}
			else if (passenger1_Age >= 14 && passenger1_Age <= 59)
			{
				passenger1_type = "adult";
				adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
				adult_baggage = adult_baggage + passenger1_baggage; 
				adult_insurance = adult_insurance + passenger1_insurance;
			}
			else
			{
				passenger1_type = "senior";
				senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
				senior_baggage = senior_baggage + passenger1_baggage; 
				senior_insurance = senior_insurance + passenger1_insurance;
			}
			cout << endl;
			
			
			
			
			if (number_of_passengers > 1 || number_of_passengers == 2)
			{
				cout << "   Passenger 2" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger2_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger2_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;				
				}
				
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger2_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger2_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger2_insurance = 0;
				}
						
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger2_baggage;
			
				// cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger2_baggage < 0 || passenger2_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger2_baggage;
				}
					
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger2_baggage > 8) 
							{
								passenger2_baggage = passenger2_baggage - 8;
								passenger2_baggage = passenger2_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger2_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger2_baggage > 8) 
							{
								passenger2_baggage = passenger2_baggage - 8;
								passenger2_baggage = passenger2_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger2_baggage = 0;
							}
							break;
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger2_baggage > 10) 
							{
								passenger2_baggage = passenger2_baggage - 10;
								passenger2_baggage = passenger2_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger2_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger2_baggage > 10) 
							{
								passenger2_baggage = passenger2_baggage - 10;
								passenger2_baggage = passenger2_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger2_baggage = 0;
							}
							break;
					}
				}
					
				cout << "   Age: ";
				cin >> passenger2_Age;
				while (passenger2_Age < 1 || passenger2_Age > 140) // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger2_Age; 	
				}		
				
				if (passenger2_Age >= 1 && passenger2_Age <= 13) 
				{
					passenger2_type = "child";
					child = child + 1; // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger2_baggage; 
					child_insurance = child_insurance + passenger2_insurance;		
				}
				else if (passenger2_Age >= 14 && passenger2_Age <= 59)
				{
					passenger2_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger2_baggage; 
					adult_insurance = adult_insurance + passenger2_insurance;
				}
				else
				{
					passenger2_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger2_baggage; 
					senior_insurance = senior_insurance + passenger2_insurance;
				}
				cout << endl;
			}
			
			
			
			
			if (number_of_passengers > 2 || number_of_passengers == 3)
			{
				cout << "   Passenger 3" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger3_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger3_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;	
				}
		
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger3_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger3_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger3_insurance = 0;
				}
				
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger3_baggage;
			
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger3_baggage < 0 || passenger3_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger3_baggage;
				}
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger3_baggage > 8) 
							{
								passenger3_baggage = passenger3_baggage - 8;
								passenger3_baggage = passenger3_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger3_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger3_baggage > 8) 
							{
								passenger3_baggage = passenger3_baggage - 8;
								passenger3_baggage = passenger3_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger3_baggage = 0;
							}
							break;	
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger3_baggage > 10) 
							{
								passenger3_baggage = passenger3_baggage - 10;
								passenger3_baggage = passenger3_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger3_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger3_baggage > 10) 
							{
								passenger3_baggage = passenger3_baggage - 10;
								passenger3_baggage = passenger3_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger3_baggage = 0;
							}
							break;
					}
				}
				
				cout << "   Age: ";
				cin >> passenger3_Age;		
				while (passenger3_Age < 1 || passenger3_Age > 140) // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger3_Age; 
				}
						
				if (passenger3_Age >= 1 && passenger3_Age <= 13)
				{
					passenger3_type = "child";
					child = child + 1; // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger3_baggage;
					child_insurance = child_insurance + passenger3_insurance;
				}
				else if (passenger3_Age >= 14 && passenger3_Age <= 59)
				{
					passenger3_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger3_baggage; 
					adult_insurance = adult_insurance + passenger3_insurance;
				}
				else 
				{
					passenger3_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger3_baggage;
					senior_insurance = senior_insurance + passenger3_insurance;
				}
				cout << endl;
			}
					
					
					
					
			if (number_of_passengers > 3 || number_of_passengers == 4)
			{
				cout << "   Passenger 4" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger4_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger4_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();	
					cin >> Avail_Insurance;	
				}
				
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger4_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger4_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger4_insurance = 0;
				}
						
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger4_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger4_baggage < 0 || passenger4_baggage > 32.5)// our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger4_baggage;
				}	
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger4_baggage > 8) 
							{
								passenger4_baggage = passenger4_baggage - 8;
								passenger4_baggage = passenger4_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger4_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger4_baggage > 8) 
							{
								passenger4_baggage = passenger4_baggage - 8;
								passenger4_baggage = passenger4_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger4_baggage = 0;
							}
							break;					
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type) 
					{
						case 49: // PRIVATE JET CLASS
							if (passenger4_baggage > 10) 
							{
								passenger4_baggage = passenger4_baggage - 10;
								passenger4_baggage = passenger4_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger4_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger4_baggage > 10) 
							{
								passenger4_baggage = passenger4_baggage - 10;
								passenger4_baggage = passenger4_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger4_baggage = 0;
							}
							break;
					}
				}
				
				cout << "   Age: ";
				cin >> passenger4_Age;		
				while (passenger4_Age < 1 || passenger4_Age > 140) // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl;  
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger4_Age;
				}		
				
				if (passenger4_Age >= 1 && passenger4_Age <= 13)
				{
					passenger4_type = "child";
					child = child + 1; // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger4_baggage;
					child_insurance = child_insurance + passenger4_insurance;
				}
				else if (passenger4_Age >= 14 && passenger4_Age <= 59)
				{
					passenger4_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger4_baggage; 
					adult_insurance = adult_insurance + passenger4_insurance;
				}
				else 
				{
					passenger4_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger4_baggage;
					senior_insurance = senior_insurance + passenger4_insurance;
				}
				cout << endl;
			}
				
				
				
					
			if (number_of_passengers > 4 || number_of_passengers == 5)
			{
				cout << "   Passenger 5" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger5_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger5_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): ";
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;
				}
				
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger5_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger5_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger5_insurance = 0;
				}
				
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger5_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger5_baggage < 0 || passenger5_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger5_baggage;
				}
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type) 
					{
						case 49: // PRIVATE JET CLASS
							if (passenger5_baggage > 8) 
							{
								passenger5_baggage = passenger5_baggage - 8;
								passenger5_baggage = passenger5_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger5_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger5_baggage > 8) 
							{
								passenger5_baggage = passenger5_baggage - 8;
								passenger5_baggage = passenger5_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger5_baggage = 0;
							}
							break;				
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger5_baggage > 10) 
							{
								passenger5_baggage = passenger5_baggage - 10;
								passenger5_baggage = passenger5_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger5_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger5_baggage > 10) 
							{
								passenger5_baggage = passenger5_baggage - 10;
								passenger5_baggage = passenger5_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger5_baggage = 0;
							}
							break;
					}
				}
				
				cout << "   Age: ";
				cin >> passenger5_Age;		
				while (passenger5_Age < 1 || passenger5_Age > 140)  // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl;  
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger5_Age;
				}
					
				if (passenger5_Age >= 1 && passenger5_Age <= 13)
				{
					passenger5_type = "child";
					child = child + 1;  // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger5_baggage;
					child_insurance = child_insurance + passenger5_insurance;
				}
				else if (passenger5_Age >= 14 && passenger5_Age <= 59)
				{
					passenger5_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger5_baggage; 
					senior_insurance = senior_insurance + passenger5_insurance;
				}
				else
				{
					passenger5_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger5_baggage;
					senior_insurance = senior_insurance + passenger5_insurance;
				}
				cout << endl;
			}
			
			
					
					
			if (number_of_passengers > 5 || number_of_passengers == 6)
			{
				cout << "   Passenger 6" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger6_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger6_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;
				}
				
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger6_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger6_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger6_insurance = 0;
				}
				
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger6_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger6_baggage < 0 || passenger6_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger6_baggage;
				}
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger6_baggage > 8) 
							{
								passenger6_baggage = passenger6_baggage - 8;
								passenger6_baggage = passenger6_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger6_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger6_baggage > 8) 
							{
								passenger6_baggage = passenger6_baggage - 8;
								passenger6_baggage = passenger6_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger6_baggage = 0;
							}
							break;		
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger6_baggage > 10) 
							{
								passenger6_baggage = passenger6_baggage - 10;
								passenger6_baggage = passenger6_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger6_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger6_baggage > 10) 
							{
								passenger6_baggage = passenger6_baggage - 10;
								passenger6_baggage = passenger6_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay
								passenger6_baggage = 0;
							}
							break;
					}
				}
						
				cout << "   Age: ";
				cin >> passenger6_Age;		
				while (passenger6_Age < 1 || passenger6_Age > 140) // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl;  
					cout << "   Age: "; 
					cin.clear();
					cin.ignore();
					cin >> passenger6_Age;
				}		
				
				if (passenger6_Age >= 1 && passenger6_Age <= 13)
				{
					passenger6_type = "child";
					child = child + 1; // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger6_baggage;
					child_insurance = child_insurance + passenger6_insurance;
				}
				else if (passenger6_Age >= 14 && passenger6_Age <= 59)
				{
					passenger6_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger6_baggage; 
					adult_insurance = adult_insurance + passenger6_insurance;
				}
				else 
				{
					passenger6_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger6_baggage;
					senior_insurance = senior_insurance + passenger6_insurance;
				}		
				cout << endl;
			}
				
				
				
					
			if (number_of_passengers > 6 || number_of_passengers == 7)
			{
				cout << "   Passenger 7" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger7_Firstname);
					
				cout << "   Surname: ";
				getline (cin, passenger7_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;
				}
						
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger7_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger7_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger7_insurance = 0;
				}	
				
				cout << "   Enter baggage weight (kilo): "; 
				cin >> passenger7_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger7_baggage < 0 || passenger7_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger7_baggage;
				}
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger7_baggage > 8) 
							{
								passenger7_baggage = passenger7_baggage - 8;
								passenger7_baggage = passenger7_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger7_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger7_baggage > 8) 
							{
								passenger7_baggage = passenger7_baggage - 8;
								passenger7_baggage = passenger7_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger7_baggage = 0;
							}
							break;					
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger7_baggage > 10) 
							{
								passenger7_baggage = passenger7_baggage - 10;
								passenger7_baggage = passenger7_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger7_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger7_baggage > 10) 
							{
								passenger7_baggage = passenger7_baggage - 10;
								passenger7_baggage = passenger7_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger7_baggage = 0;
							}
							break;
					}
				}	
						
				cout << "   Age: ";
				cin >> passenger7_Age;		
				while (passenger7_Age < 1 || passenger7_Age > 140) // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl;  			
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger7_Age;
				}
				
				if (passenger7_Age >= 1 && passenger7_Age <= 13)
				{
					passenger7_type = "child";
					child = child + 1; // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger7_baggage; 
					child_insurance = child_insurance + passenger7_insurance;
				}
				else if (passenger7_Age >= 14 && passenger7_Age <= 59)
				{
					passenger7_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger7_baggage; 
					adult_insurance = adult_insurance + passenger7_insurance;
				}
				else
				{
					passenger7_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger7_baggage;
					senior_insurance = senior_insurance + passenger7_insurance;
				}
				cout << endl;
			}
			
			
			
					
			if (number_of_passengers > 7 || number_of_passengers == 8)
			{
				cout << "   Passenger 8" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger8_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger8_Surname);
				
				cout << "   Avail an insurance? (yes/no): ";
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): ";	
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;
				}
				
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger8_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger8_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger8_insurance = 0;
				}
				
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger8_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger8_baggage < 0 || passenger8_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger8_baggage;
				}
					
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger8_baggage > 8) 
							{
								passenger8_baggage = passenger8_baggage - 8;
								passenger8_baggage = passenger8_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger8_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger8_baggage > 8) 
							{
								passenger8_baggage = passenger8_baggage - 8;
								passenger8_baggage = passenger8_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger8_baggage = 0;
							}
							break;	
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger8_baggage > 10) 
							{
								passenger8_baggage = passenger8_baggage - 10;
								passenger8_baggage = passenger8_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger8_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger8_baggage > 10) 
							{
								passenger8_baggage = passenger8_baggage - 10;
								passenger8_baggage = passenger8_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger8_baggage = 0;
							}
							break;
					}
				}
				
				cout << "   Age: ";
				cin >> passenger8_Age;		
				while (passenger8_Age < 1 || passenger8_Age > 140) // our limit for the age of the passenger is 140 
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl;
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger8_Age;  			
				}	
					
				if (passenger8_Age >= 1 && passenger8_Age <= 13)
				{
					passenger8_type = "child";
					child = child + 1; // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger8_baggage;
					child_insurance = child_insurance + passenger8_insurance;
				}
				else if (passenger8_Age >= 14 && passenger8_Age <= 59)
				{
					passenger8_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger8_baggage; 
					adult_insurance = adult_insurance + passenger8_insurance;
				}
				else
				{
					passenger8_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger8_baggage;
					senior_insurance = senior_insurance + passenger8_insurance;
				}
				cout << endl;
			}
					
					
					
					
			if (number_of_passengers > 8 || number_of_passengers == 9)
			{		
				cout << "   Passenger 9" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger9_Firstname);
					
				cout << "   Surname: ";
				getline (cin, passenger9_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;
				}
					
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger9_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger9_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger9_insurance = 0;
				}	
				
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger9_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger9_baggage < 0 || passenger9_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger9_baggage;
				}
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49:  // PRIVATE JET CLASS
							if (passenger9_baggage > 8) 
							{
								passenger9_baggage = passenger9_baggage - 8;
								passenger9_baggage = passenger9_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger9_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger9_baggage > 8) 
							{
								passenger9_baggage = passenger9_baggage - 8;
								passenger9_baggage = passenger9_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger9_baggage = 0;
							}
							break;					
					}
				}
				else 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger9_baggage > 10) 
							{
								passenger9_baggage = passenger9_baggage - 10;
								passenger9_baggage = passenger9_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger9_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger9_baggage > 10) 
							{
								passenger9_baggage = passenger9_baggage - 10;
								passenger9_baggage = passenger9_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger9_baggage = 0;
							}
							break;
					}
				}
						
				cout << "   Age: ";
				cin >> passenger9_Age;			
				while (passenger9_Age < 1 || passenger9_Age > 140) // our limit for the age of the passenger is 140
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl;
		  			cout << "   Age: ";
		  			cin.clear();
					cin.ignore();
		  			cin >> passenger9_Age;
				}
				
				if (passenger9_Age >= 1 && passenger9_Age <= 13)
				{
					passenger9_type = "child";
					child = child + 1;  // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger9_baggage;
					child_insurance = child_insurance + passenger9_insurance;
				}
				else if (passenger9_Age >= 14 && passenger9_Age <= 59)
				{
					passenger9_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger9_baggage; 
					adult_insurance = adult_insurance + passenger9_insurance;
				}
				else 
				{
					passenger9_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger9_baggage;
					senior_insurance = senior_insurance + passenger9_insurance;
				}
				cout << endl;
			}
					
					
					
					
			if (number_of_passengers == 10)
			{
				cout << "   Passenger 10" << endl;
				cout << "   First Name: ";
				cin.ignore(); // discards the "\n" left in the input buffer
				getline (cin, passenger10_Firstname);
						
				cout << "   Surname: ";
				getline (cin, passenger10_Surname);
				
				cout << "   Avail an insurance? (yes/no): "; 
				cin >> Avail_Insurance;
				
				while (Avail_Insurance != "yes" && Avail_Insurance != "no" && Avail_Insurance != "YES" && Avail_Insurance != "NO")
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Avail an insurance? (yes/no): "; 
					cin.clear();
					cin.ignore();
					cin >> Avail_Insurance;
				}
				
				if (Avail_Insurance == "yes" || Avail_Insurance == "YES")
				{
					if (luxury_type == 49) // PRIVATE JET CLASS
					{
						passenger10_insurance = 4500;
					}
					else // BUSINESS JET CLASS
					{
						passenger10_insurance = 8500;
					}
				}
				else
				{
					// they don't have any additional charges because they didn't avail an insurance 
					passenger10_insurance = 0;
				}
				
				cout << "   Enter baggage weight (kilo): ";
				cin >> passenger10_baggage;
				
				//  cin.fail() detects whether the value entered fits the value defined in the variable.
				while (cin.fail() || passenger10_baggage < 0 || passenger10_baggage > 32.5) // our limit for the weight of the baggage is 32.5 kilos
				{
					cout << endl << "   Invalid Input! Please check and try again." << endl; 
					cout << "   Enter baggage weight (kilo): "; 
					cin.clear();
					cin.ignore();
					cin >> passenger10_baggage;
				}
				
				if (type_of_flight == 49) // DOMESTIC
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger10_baggage > 8) 
							{
								passenger10_baggage = passenger10_baggage - 8;
								passenger10_baggage = passenger10_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger10_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger10_baggage > 8) 
							{
								passenger10_baggage = passenger10_baggage - 8;
								passenger10_baggage = passenger10_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger10_baggage = 0;
							}
							break;					
					}
				}
				else // INTERNATIONAL 
				{
					switch (luxury_type)
					{
						case 49: // PRIVATE JET CLASS
							if (passenger10_baggage > 10) 
							{
								passenger10_baggage = passenger10_baggage - 10;
								passenger10_baggage = passenger10_baggage * 1250;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger10_baggage = 0;
							}
							break;
							
						case 50: // BUSINESS JET CLASS
							if (passenger10_baggage > 10) 
							{
								passenger10_baggage = passenger10_baggage - 10;
								passenger10_baggage = passenger10_baggage * 1450;
							}
							else 
							{
								// if the baggage didn't exceed the baggage allowance 
								// it will assign 0 because they don't have any additional charges that they need to pay 
								passenger10_baggage = 0;
							}
							break;
					}
				}
						
				cout << "   Age: ";
				cin >> passenger10_Age;		
				while (passenger10_Age < 1 || passenger10_Age > 140) // our limit for the age of the passenger is 140 
				{
		  			cout << endl << "   Invalid Input! Please check and try again." << endl;
					cout << "   Age: ";
					cin.clear();
					cin.ignore();
					cin >> passenger10_Age;
				}		
				
				if (passenger10_Age >= 1 && passenger10_Age <= 13)
				{
					passenger10_type = "child";
					child = child + 1;  // so that the program will know how many passengers there are that are classified as child
					child_baggage = child_baggage + passenger10_baggage;
					child_insurance = child_insurance + passenger10_insurance;
				}
				else if (passenger10_Age >= 14 && passenger10_Age <= 59)
				{
					passenger10_type = "adult";
					adult = adult + 1; // so that the program will know how many passengers there are that are classified as adult
					adult_baggage = adult_baggage + passenger10_baggage; 
					adult_insurance = adult_insurance + passenger10_insurance;
				}
				else 
				{
					passenger10_type = "senior";
					senior = senior + 1; // so that the program will know how many passengers there are that are classified as senior
					senior_baggage = senior_baggage + passenger10_baggage;
					senior_insurance = senior_insurance + passenger10_insurance;
				}
				cout << endl;
			}	
			
			if (child > 0 && adult == 0 && senior == 0)
			{
				cout << endl;
				cout << "  ________________________________________________________________________________________________" << endl;
				cout << " |                                                                                                |" << endl;
				cout << " |                   Passengers between the age of 1 to 13 can't travel alone                     |" << endl;
				cout << " |                       unless they are accompanied by an adult or senior                        |" << endl;
				cout << " |________________________________________________________________________________________________|" << endl;
				cout << " |                                                                                                |" << endl;
				cout << " |                                      SELECT AN OPTION:                                         |" << endl;
				cout << " |                                   (1) CHANGE GUEST DETAILS                                     |" << endl;
				cout << " |                                   (2) EXIT PROGRAM                                             |" << endl;
				cout << " |                                                                                                |" << endl;
				cout << " |________________________________________________________________________________________________|" << endl; 
				userContinue = getch();
				
				while (userContinue != 49 && userContinue != 50) // ASCII CODE : 1 - 49    2 - 50 
				{
					cin.clear();
					cin.ignore();
					cout << endl;
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					userContinue = getch();
				}
				
				if (userContinue == 49)
				{
					change_guest_details = "yes";
				}
				else
				{
					change_guest_details = "no";
					return 0; // the program will stop because the user wants to exit the program
				}
			}
			else
			{
				cout << endl;
				cout << "  ________________________________________________________________________________________________ " << endl;
				cout << " |                                                                                                |" << endl;
				cout << " |                                      SELECT AN OPTION:                                         |" << endl;
				cout << " |                                   (1) CHANGE GUEST DETAILS                                     |" << endl;
				cout << " |                                   (2) CONTINUE                                                 |" << endl; 
				cout << " |                                   (3) EXIT PROGRAM                                             |" << endl;
				cout << " |                                                                                                |" << endl;
				cout << " |________________________________________________________________________________________________|" << endl; 
				userContinue = getch();
				
				while (userContinue != 49 && userContinue != 50 && userContinue != 51) // ASCII CODE : 1 - 49    2 - 50   3 -51
				{
					cin.clear(); 
					cin.ignore();
					cout << endl;
					cout << "  ________________________________________________________________________________________________" << endl;
					cout << " |                                                                                                |" << endl;
					cout << " |                               Invalid Input! Please try again.                                 |" << endl;
					cout << " |________________________________________________________________________________________________|" << endl << endl;
					userContinue = getch();
				}
				
				if (userContinue == 49)
				{
					change_guest_details = "yes";
				}
				else if (userContinue == 50)
				{
					change_guest_details = "no";
				}
				else
				{
					change_guest_details = "no";
					return 0; // the program will stop because the user wants to exit the program
				}
			}
		}
		while (change_guest_details == "yes");
				
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		system ("cls");	// clears the screen

		/*	 
			The following lines will display the design 
			It displays the computation for the total amount that the user needs to pay
								
			These are the colors that we used for the output:
			SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
			SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
			SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
			SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
							
			SetConsoleTextAttribute (color, 7929) - background (white) & foreground (blue)
		*/
	
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                                                                                          "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 255); cout << "                 "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 273);  cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "       "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "         "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273);  cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 255); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 255); cout << "                   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   " << endl; 
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "                                                                                              "; SetConsoleTextAttribute(color, 187); cout << "   " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 153); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 7929);
		cout << endl;
	
		switch (destination)
		{
			case 'A': case 'a':
				if (luxury_type == 49) 
				{
					fare_per_person = 8650; // private class fare 
				}
				else 					
				{
					fare_per_person = 15500; // business class fare  
				}
				break;
				
			case 'B': case 'b':
				if (luxury_type == 49) 
				{
					fare_per_person = 4543; // private class fare 
				}
				else 					
				{
					fare_per_person = 9500; // business class fare  
				}
				break;
				
			case 'C': case 'c':
				if (luxury_type == 49) 
				{
					fare_per_person = 5882; // private class fare 
				}
				else 					
				{
					fare_per_person = 13200; // business class fare  
				}
				break;
				
			case 'D': case 'd':
				if (luxury_type == 49) 
				{
					fare_per_person = 4096; // private class fare 
				}
				else 					
				{
					fare_per_person = 9230; // business class fare  
				}
				break;
				
			case 'E': case 'e':
				if (luxury_type == 49) 
				{
					fare_per_person = 6199; // private class fare 
				}
				else 					
				{
					fare_per_person = 12150; // business class fare  
				}
				break;
				
			case 'F': case 'f':
				if (luxury_type == 49) 
				{
					fare_per_person = 5699; // private class fare 
				}
				else 					
				{
					fare_per_person = 10850; // business class fare  
				}
				break;
				
			case 'G': case 'g':
				if (luxury_type == 49) 
				{
					fare_per_person = 6899; // private class fare 
				}
				else 					
				{
					fare_per_person = 13110; // business class fare  
				}
				break;
				
			case 'H': case 'h':
				if (luxury_type == 49) 
				{
					fare_per_person = 12500; // private class fare 
				}
				else 					
				{
					fare_per_person = 23850; // business class fare  
				}
				break;
				
			case 'I': case 'i':
				if (luxury_type == 49) 
				{
					fare_per_person = 24800; // private class fare 
				}
				else				 	
				{
					fare_per_person = 31450; // business class fare  
				}
				break;
		}
				
		if (OneWay_RoundTrip == 50) // Round trip fares just multiply the actual fare DESTINATION by two 
		{
			fare_per_person = fare_per_person * 2;
		}
		
		child_fare = child * fare_per_person; 
		adult_fare = adult * fare_per_person;
		senior_fare = senior * fare_per_person;
		
		// Display how many passengers are there for child , adult and senior
		cout << "\t\t\t\t\tChild (" << child << ")\tAdult (" << adult << ")\tSenior (" << senior << ")" << endl;  
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		cout << " Fare\t\t\t\t\t" << child_fare << "\t\t" << adult_fare << "\t\t" << senior_fare << endl; 
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		cout << " Baggage\t\t\t\t" << child_baggage << "\t\t" << adult_baggage << "\t\t" << senior_baggage << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
																						
		
		cout << " Insurance\t\t\t\t" << child_insurance << "\t\t" << adult_insurance << "\t\t" << senior_insurance << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		child_total = child_fare + child_baggage + child_insurance;
		adult_total = adult_fare + adult_baggage + adult_insurance;
		senior_total = senior_fare + senior_baggage + senior_insurance;
		
		cout << " Total\t\t\t\t\t" << child_total << "\t\t" << adult_total << "\t\t" << senior_total << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		child_discount = child_total * .02;
		senior_discount = senior_total * .2;
		// adults don't have any discount
		
		cout << " Discount\t\t\t\t" << child_discount << "\t\t0\t\t" << senior_discount << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		child_total_Wdiscount = child_total - child_discount;
		senior_total_Wdiscount = senior_total - senior_discount;
		// We just displayed the adult_total because we didn't subtract any discount  
		
		cout << " Total with discount\t\t\t" << child_total_Wdiscount << "\t\t" << adult_total << "\t\t" << senior_total_Wdiscount << endl; 
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		child_vat = child_total_Wdiscount * .12;
		adult_vat = adult_total * .12;
		// senior citizens are exempted from vat 
		
		cout << " VAT (12%)\t\t\t\t" << child_vat << "\t\t" << adult_vat << "\t\t0" << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		child_total_Wdiscount_vat = child_total_Wdiscount + child_vat;
		adult_total_Wvat = adult_total + adult_vat;
		
		cout << " Total with discount and VAT\t\t" << child_total_Wdiscount_vat << "\t\t" << adult_total_Wvat << "\t\t" << senior_total_Wdiscount << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
		
		total = child_total_Wdiscount_vat + adult_total_Wvat + senior_total_Wdiscount;
		
		cout << " Total\t\t\t\t\t" << total << endl;
		cout << "\t\t\t\t\t_________________________________________" << endl;
	
		if (number_of_passengers > 5)
		{
			group_discount = total * .05;
		}
	
		cout << " Group Discount\t\t\t\t" << group_discount << endl;
		cout << "\t\t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "                                         " << endl; SetConsoleTextAttribute(color, 7929); 
		
		total = total - group_discount;
		
		cout << " Total Amount due\t\t\t";
		cout << total << endl;
		
		cout << "\t\t\t\t\t"; SetConsoleTextAttribute(color, 153); cout << "                                         " << endl; SetConsoleTextAttribute(color, 7929); 
		cout << "\t\t\tEnter your cash: ";
		cin >> cash;
		
		while (cash < total) 
		{
			cout << "\t\t\tInvalid Input. Please try again." << endl;
			cout << "\t\t\tEnter your cash: ";
			cin.clear();
			cin.ignore();
			cin >> cash;
		}
		
		if (cash >= total)
		{
			change = cash - total;
		}
		cout << endl << "\t\t\tChange due: " << change << endl << endl;
		
		cout << "   Press any key to continue ... " << endl;
		userContinue = getch();
		
		
		
		
		
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		system ("cls"); // clears the screen
		/*	 
			The following lines will display the design 
			It displays the BOOKING SUMMARY 
								
			These are the colors that we used for the output:
			SetConsoleTextAttribute (color, 153) - background (blue) 		& foreground (blue) 
			SetConsoleTextAttribute (color, 187) - background (teal) 		& foreground (teal) 
			SetConsoleTextAttribute (color, 238) - background (yellow) 		& foreground (yellow)
			SetConsoleTextAttribute (color, 255) - background (white) 		& foreground (white)
			
			SetConsoleTextAttribute(color, 7865) - background (teal)		& foreground (blue)
			SetConsoleTextAttribute (color, 7929) - background (white) 		& foreground (blue)
			SetConsoleTextAttribute(color, 7865) - background (yellow)		& foreground (blue)
		*/
		
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "                                                                                     " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "       "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "                 " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 238); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "                    " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "         "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187);  cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "     "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "                 " << endl; 
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "        "; SetConsoleTextAttribute(color, 273); cout << "      "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "                 " << endl;
		SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "      "; SetConsoleTextAttribute(color, 238); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << "   "; SetConsoleTextAttribute(color, 273); cout << "   "; SetConsoleTextAttribute(color, 187); cout << "     "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "  "; SetConsoleTextAttribute(color, 273);  cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "  "; SetConsoleTextAttribute(color, 187); cout << "    "; SetConsoleTextAttribute(color, 273); cout << " "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << " "; SetConsoleTextAttribute(color, 273); cout << "    "; SetConsoleTextAttribute(color, 187); cout << "                 " << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl;
		SetConsoleTextAttribute(color, 7865); cout << "                                         GUEST DETAILS                                              " << endl;
		SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7929);
		
		
	 	
		// The following codes will display the name/s of the passenger/s and the additional charges for the booking 
	 	// It will also display if they are classified as child , adult or senior 
		
		cout << " \t\t\t\t1. " << passenger1_Firstname << " " << passenger1_Surname << "   ( " << passenger1_type << " )" << endl; SetConsoleTextAttribute(color, 508);
		
		cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
		cout << " \t\t\t\tInsurance fee\t\t" << passenger1_insurance << endl;
		cout << " \t\t\t\tExcess Baggage fee\t" << passenger1_baggage << endl;		

		passenger1_total = fare_per_person + passenger1_insurance + passenger1_baggage;
		
		cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
		cout << " \t\t\t\tSUBTOTAL\t\t" << passenger1_total << endl; 
		cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
		
		if (passenger1_type == "adult")
		{
			passenger1_discount = 0; 
			cout << " \t\t\t\tDiscount\t\t" << passenger1_discount << endl;
		}
		else if (passenger1_type == "child")
		{
			passenger1_discount = passenger1_total * .02;
			cout << " \t\t\t\tDiscount (2%)\t\t" << passenger1_discount << endl;
		}
		else
		{
			passenger1_discount = passenger1_total * .2;
			cout << " \t\t\t\tDiscount (20%)\t\t" << passenger1_discount << endl;
		}
	
		passenger1_total = passenger1_total - passenger1_discount; 
		
		if (passenger1_type == "senior")
		{
			passenger1_vat = 0;
			cout << " \t\t\t\tVAT\t\t\t" << passenger1_vat << endl;
		}
		else
		{
			passenger1_vat = passenger1_total *.12;
			cout << " \t\t\t\tVAT (12%)\t\t" << passenger1_vat << endl;
		}
		
		
		if (number_of_passengers > 1 || number_of_passengers == 2)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t2. " << passenger2_Firstname << " " << passenger2_Surname << "   ( " << passenger2_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger2_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger2_baggage << endl;		
	
			passenger2_total = fare_per_person + passenger2_insurance + passenger2_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger2_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger2_type == "adult")
			{
				passenger2_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger2_discount << endl;
			}
			else if (passenger2_type == "child")
			{
				passenger2_discount = passenger2_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger2_discount << endl;
			}
			else
			{
				passenger2_discount = passenger2_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger2_discount << endl;
			}
		
			passenger2_total = passenger2_total - passenger2_discount; 
			
			if (passenger2_type == "senior")
			{
				passenger2_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger2_vat << endl;
			}
			else
			{
				passenger2_vat = passenger2_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger2_vat << endl;
			}	
		}
		
		
		if (number_of_passengers > 2 || number_of_passengers == 3)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t3. " << passenger3_Firstname << " " << passenger3_Surname << "   ( " << passenger3_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger3_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger3_baggage << endl;		
	
			passenger3_total = fare_per_person + passenger3_insurance + passenger3_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger3_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger3_type == "adult")
			{
				passenger3_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger3_discount << endl;
			}
			else if (passenger3_type == "child")
			{
				passenger3_discount = passenger3_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger3_discount << endl;
			}
			else
			{
				passenger3_discount = passenger3_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger3_discount << endl;
			}
		
			passenger3_total = passenger3_total - passenger3_discount; 
			
			if (passenger3_type == "senior")
			{
				passenger3_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger3_vat << endl;
			}
			else
			{
				passenger3_vat = passenger3_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger3_vat << endl;
			}
		}
		
		
		if (number_of_passengers > 3 || number_of_passengers == 4)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t4. " << passenger4_Firstname << " " << passenger4_Surname << "   ( " << passenger4_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger4_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger4_baggage << endl;		
	
			passenger4_total = fare_per_person + passenger4_insurance + passenger4_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger4_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger4_type == "adult")
			{
				passenger4_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger4_discount << endl;
			}
			else if (passenger4_type == "child")
			{
				passenger4_discount = passenger4_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger4_discount << endl;
			}
			else
			{
				passenger4_discount = passenger4_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger4_discount << endl;
			}
		
			passenger4_total = passenger4_total - passenger4_discount; 
			
			if (passenger4_type == "senior")
			{
				passenger4_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger4_vat << endl;
			}
			else
			{
				passenger4_vat = passenger4_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger4_vat << endl;
			}
		}
		
		
		if (number_of_passengers > 4 || number_of_passengers == 5)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t5. " << passenger5_Firstname << " " << passenger5_Surname << "   ( " << passenger5_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger5_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger5_baggage << endl;		
	
			passenger5_total = fare_per_person + passenger5_insurance + passenger5_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger5_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger5_type == "adult")
			{
				passenger5_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger5_discount << endl;
			}
			else if (passenger5_type == "child")
			{
				passenger5_discount = passenger5_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger5_discount << endl;
			}
			else
			{
				passenger5_discount = passenger5_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger5_discount << endl;
			}
		
			passenger5_total = passenger5_total - passenger5_discount; 
			
			if (passenger5_type == "senior")
			{
				passenger5_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger5_vat << endl;	
			}
			else
			{
				passenger5_vat = passenger5_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger5_vat << endl;	
			}	
		}
		
		
		if (number_of_passengers > 5 || number_of_passengers == 6)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t6. " << passenger6_Firstname << " " << passenger6_Surname << "   ( " << passenger6_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger6_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger6_baggage << endl;		
	
			passenger6_total = fare_per_person + passenger6_insurance + passenger6_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger6_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger6_type == "adult")
			{
				passenger6_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger6_discount << endl;				
			}
			else if (passenger6_type == "child")
			{
				passenger6_discount = passenger6_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger6_discount << endl;
			}
			else
			{
				passenger6_discount = passenger6_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger6_discount << endl;
			}
		
			passenger6_total = passenger6_total - passenger6_discount; 
			
			if (passenger6_type == "senior")
			{
				passenger6_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger6_vat << endl;
			}
			else
			{
				passenger6_vat = passenger6_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger6_vat << endl;
			}	
		} 
		
		
		if (number_of_passengers > 6 || number_of_passengers == 7)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t7. " << passenger7_Firstname << " " << passenger7_Surname << "   ( " << passenger7_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger7_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger7_baggage << endl;		
	
			passenger7_total = fare_per_person + passenger7_insurance + passenger7_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger7_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger7_type == "adult")
			{
				passenger7_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger7_discount << endl;	
			}
			else if (passenger7_type == "child")
			{
				passenger7_discount = passenger7_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger7_discount << endl;
			}
			else
			{
				passenger7_discount = passenger7_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger7_discount << endl;
			}
		
			passenger7_total = passenger7_total - passenger7_discount; 
			
			if (passenger7_type == "senior")
			{
				passenger7_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger7_vat << endl;		
			}
			else
			{
				passenger7_vat = passenger7_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger7_vat << endl;		
			}	
		}
		
		
		if (number_of_passengers > 7 || number_of_passengers == 8)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;	
			cout << " \t\t\t\t8. " << passenger8_Firstname << " " << passenger8_Surname << "   ( " << passenger8_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger8_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger8_baggage << endl;		
	
			passenger8_total = fare_per_person + passenger8_insurance + passenger8_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger8_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger8_type == "adult")
			{
				passenger8_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger8_discount << endl;
			}
			else if (passenger8_type == "child")
			{
				passenger8_discount = passenger8_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger8_discount << endl;
			}
			else
			{
				passenger8_discount = passenger8_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger8_discount << endl;
			}
		
			passenger8_total = passenger8_total - passenger8_discount; 
			
			if (passenger8_type == "senior")
			{
				passenger8_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger8_vat << endl;
			}
			else
			{
				passenger8_vat = passenger8_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger8_vat << endl;
			}	
		}	
		
		
		if (number_of_passengers > 8 || number_of_passengers == 9)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t9. " << passenger9_Firstname << " " << passenger9_Surname << "   ( " << passenger9_type << " )" << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger9_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger9_baggage << endl;		
	
			passenger9_total = fare_per_person + passenger9_insurance + passenger9_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger9_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger9_type == "adult")
			{
				passenger9_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger9_discount << endl;
			}
			else if (passenger9_type == "child")
			{
				passenger9_discount = passenger9_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger9_discount << endl;
			}
			else
			{
				passenger9_discount = passenger9_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger9_discount << endl;
			}
		
			passenger9_total = passenger9_total - passenger9_discount; 
			
			if (passenger9_type == "senior")
			{
				passenger9_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger9_vat << endl;
			}
			else
			{
				passenger9_vat = passenger9_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger9_vat << endl;
			}
		}	
		
		
		if (number_of_passengers == 10)
		{
			SetConsoleTextAttribute(color, 7929); cout << endl << endl;
			cout << " \t\t\t\t10. " << passenger10_Firstname << " " << passenger10_Surname << "   ( " << passenger10_type << " ) " << endl; SetConsoleTextAttribute(color, 508);
			
			cout << " \t\t\t\tDestination fare\t" << fare_per_person << endl;
			cout << " \t\t\t\tInsurance fee\t\t" << passenger10_insurance << endl;
			cout << " \t\t\t\tExcess Baggage fee\t" << passenger10_baggage << endl;		
	
			passenger10_total = fare_per_person + passenger10_insurance + passenger10_baggage;
			
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			cout << " \t\t\t\tSUBTOTAL\t\t" << passenger10_total << endl; 
			cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 238); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
			
			if (passenger10_type == "adult")
			{
				passenger10_discount = 0;
				cout << " \t\t\t\tDiscount\t\t" << passenger10_discount << endl;			
			}
			else if (passenger10_type == "child")
			{
				passenger10_discount = passenger10_total * .02;
				cout << " \t\t\t\tDiscount (2%)\t\t" << passenger10_discount << endl;
			}
			else
			{
				passenger10_discount = passenger10_total * .2;
				cout << " \t\t\t\tDiscount (20%)\t\t" << passenger10_discount << endl;
			}
		
			passenger10_total = passenger10_total - passenger10_discount; 
			
			if (passenger10_type == "senior")
			{
				passenger10_vat = 0;
				cout << " \t\t\t\tVAT\t\t\t" << passenger10_vat << endl;
			}
			else
			{
				passenger10_vat = passenger10_total *.12;
				cout << " \t\t\t\tVAT (12%)\t\t" << passenger10_vat << endl;
			}
		}
		
		cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 187); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;
		cout << " \t\t\t\tGROUP DISCOUNT (5%):\t" << group_discount << endl;
		cout << " \t\t\t\t"; SetConsoleTextAttribute(color, 187); cout << "\t\t\t\t"; SetConsoleTextAttribute(color, 508); cout << endl;		
		
		cout << endl << endl;
		SetConsoleTextAttribute(color, 187); cout << "                                                                                                    " << endl; SetConsoleTextAttribute(color, 7929);
		cout << " \t\t\t\tTOTAL AMOUNT DUE:\t" << total << endl;
		cout << " \t\t\t\tCASH:\t\t\t" << cash << endl;
		cout << " \t\t\t\tCHANGE:\t\t\t" << change << endl; 
		
	
		// The following codes will display all the details about the flight
		SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
		SetConsoleTextAttribute(color, 7865); cout << "   FLIGHT DETAILS                                                                                   " << endl;
		SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
		SetConsoleTextAttribute(color, 7865); cout << "   Route	Flight No.				Departure                                   " << endl;
		SetConsoleTextAttribute(color, 7929);

		cout << "   Manila to\t" << Departing_Flight_No << "\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
		switch (destination)
		{
			case 'A': case 'a':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 4" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name<< " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tBasco Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 1" << endl;
				break;
				
			case 'B': case 'b':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 3" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tNew Bacolod-Silay International" << endl;
				cout << "\t\t\t\t\t\t\tAirport, Terminal 2" << endl;
				break;
				
			case 'C': case 'c':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 3" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tPuerto Princesa International" << endl;
				cout << "\t\t\t\t\t\t\tAirport, Terminal 2" << endl;
				break;
				
			case 'D': case 'd':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 2" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tFrancisco Bangoy International" << endl;
				cout << "\t\t\t\t\t\t\tAirport, Terminal 3" << endl;
				break;
				
			case 'E': case 'e':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 4" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tKuala Lumpur International" << endl;
				cout << "\t\t\t\t\t\t\tAirport, Terminal 2" << endl;
				break;
				
			case 'F': case 'f':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 1" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tNgurah Rai International" << endl;
				cout << "\t\t\t\t\t\t\tAirport, Terminal 4" << endl;
				break;
				
			case 'G': case 'g':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 3" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tChangi Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 3" << endl;
				break;
				
			case 'H': case 'h':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 2" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tIncheon International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 1" << endl;
				break;
				
			case 'I': case 'i':
				cout << "   " << destination_name << "\t\t\t\t\t\t" << Departing_Departure_Time << endl;
				cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 1" << endl;
				
				SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
				SetConsoleTextAttribute(color, 7865); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
				cout << "\t\t\t\t\t\t\t" << departing_day << " " << Departing_Month_Name << " " << departing_year << endl;
				cout << "\t\t\t\t\t\t\t" << Departing_Arrival_Time << endl;
				cout << "\t\t\t\t\t\t\tNarita International Airport" << endl;
				cout << "\t\t\t\t\t\t\tTerminal 2" << endl;
				break;
		}
		
		SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
		if (OneWay_RoundTrip == 50)
		{
			switch (destination)
			{	
				case 'A': case 'a':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tBasco Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 1" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 4" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'B': case 'b':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 						
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tNew Bacolod-Silay International" << endl;
					cout << "\t\t\t\t\t\t\tAirport, Terminal 2" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 3" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'C': case 'c':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tPuerto Princesa International" << endl;
					cout << "\t\t\t\t\t\t\tAirport, Terminal 2" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 3" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'D': case 'd':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tFrancisco Bangoy International" << endl;
					cout << "\t\t\t\t\t\t\tAirport,  Terminal 3" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 2" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'E': case 'e':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tKuala Lumpur International" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 2" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\t" << "Terminal 4" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'F': case 'f':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No <<  "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tNgurah Rai International" << endl;
					cout << "\t\t\t\t\t\t\tAirport, Terminal 4" << endl;
					
					if (Returning_Flight_Schedule == 51)
					{
						// the flight will arrive on 1:45 am (the next day)
						returning_day = returning_day + 1;
					}
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 1" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'G': case 'g':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tChangi Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 3" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 3" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'H': case 'h':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tIncheon International" << endl;
					cout << "\t\t\t\t\t\t\tAirport, Terminal 1" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 2" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
					
				case 'I': case 'i':
					SetConsoleTextAttribute(color, 7913); cout << "   Route	Flight No.				Departure                                   " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "   " << destination_name << "\t" << Returning_Flight_No << "\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;  
					cout << "   to Manila\t\t\t\t\t\t" << Returning_Departure_Time << endl;
					cout << "\t\t\t\t\t\t\tNarita International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 2" << endl;
					
					SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					SetConsoleTextAttribute(color, 7913); cout << "                                     			Arrival                                     " << endl; SetConsoleTextAttribute(color, 7929); 	
					cout << "\t\t\t\t\t\t\t" << returning_day << " " << Returning_Month_Name << " " << returning_year << endl;   
					cout << "\t\t\t\t\t\t\t" << Returning_Arrival_Time << endl;
					cout << "\t\t\t\t\t\t\tNinoy International Airport" << endl;
					cout << "\t\t\t\t\t\t\tTerminal 1" << endl; SetConsoleTextAttribute(color, 255); cout << "                                                                                                    " << endl; 
					break;
			}
		}	
		
		SetConsoleTextAttribute(color, 7929); 
		cout << endl << "Select an option:" << endl;
		cout << "(1) BOOK ANOTHER FLIGHT" << endl;
		cout << "(2) EXIT PROGRAM" << endl;
		userChoose = getch();
	
		while (userChoose != 49 && userChoose != 50) // ASCII CODE : 1 - 49    2 - 50 
		{
			cout << endl << "Invalid Input! Please try again." << endl;
			cout << "Select an option:" << endl;
			cout << "(1) BOOK ANOTHER FLIGHT" << endl;
			cout << "(2) EXIT PROGRAM" << endl;
			userChoose = getch();
		}
	
	}
	while (userChoose == 49); // ASCII CODE : 1 - 49   
}
