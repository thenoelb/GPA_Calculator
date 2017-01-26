#include <iostream>

using namespace std;

//makes letter grade into grade point value
int alphaToPoint(int numOfcredits, char letter)
{
	int points;
	if(letter=='A'||letter=='a')
	{
		points = 4 * numOfcredits;
	}
	else if(letter=='B'||letter=='b')
	{
		points = 3 * numOfcredits;
	}
	else if(letter=='C'||letter=='c')
	{
		points = 2 * numOfcredits;
	}
	else if(letter=='D'||letter=='d')
	{
		points = 1 * numOfcredits;		
	}
	else if(letter=='F'||letter=='f')
	{
		points = 0 * numOfcredits;
	}
	else
	{
		cout<<"Grade with the letter "<<letter<<" is invalid. No value will be added"<<"\n";
	}
	return points;
}

int main()
{
	float creditTotal=0, gradePoints=0;
	int numOfclass;
	float gpa;
	char type;

	while(1)
	{
		// Ask for Semester or Cumulative calculation
		cout<<"Hi. Are you looking to calculate your Semester or Cumulative GPA?(S or C)"<<'\n';
		cin>>type;
		
		//Semester
		if(type == 'S' || type == 's')
		{
			// 	ask number of classes
			cout<<"How many classes are you taking this semester?"<<"\n";
			cin>>numOfclass;
			float credits[numOfclass];
			char letterGrade[numOfclass];
			//  for (each class)
			for (int i = 1; i <= numOfclass; i++)
			{
				// 	 ask number of credits
				cout<<"How many credits is Class "<<i<<"?"<<"\n";
				cin>>credits[i];
				//   add to total credit number
				creditTotal += credits[i];
				//   ask for letter grade
				cout<<"What grade did you get for this Class? (Single letter only)"<<"\n";
				cin>>letterGrade[i];
				//   run function to convert letter grade to numerical value
				gradePoints += alphaToPoint(credits[i],letterGrade[i]); 
			}
				cout<<"\n"<<"Your total number of credits: "<<creditTotal<<"\n";
				cout<<"Your number of GPA points: "<<gradePoints<<"\n";
				gpa = gradePoints/creditTotal;
				cout<<"Congratulations! Your Semester GPA is "<<gpa<<"\n";

			return 0;

		}
		else if(type == 'C' || type == 'c')
		{
			//Cumulative
			cout<<"Coming Soon! Looks like I need to work on this a bit"<<"\n";
			cout<<"Note: this is calculating your GPA with the semester GPA"<<"\n";
			
			cout<<"How many credits have you taken so far? (excl. this semester)\n";
			int numOfcredits_old;
			cin>>numOfcredits_old;
			creditTotal = numOfcredits_old;

			cout<<"What is your current gpa?\n";
			float currentGpa;
			cin>>currentGpa;

			gradePoints = currentGpa * numOfcredits_old;

			// 	ask number of classes
			cout<<"How many classes are you taking this semester?"<<"\n";
			cin>>numOfclass;
			float credits[numOfclass];
			char letterGrade[numOfclass];
			//  for (each class)
			for (int i = 1; i <= numOfclass; i++)
			{
				// 	 ask number of credits
				cout<<"How many credits is Class "<<i<<"?"<<"\n";
				cin>>credits[i];
				//   add to total credit number
				creditTotal += credits[i];
				//   ask for letter grade
				cout<<"What grade did you get for this Class? (Single letter only)"<<"\n";
				cin>>letterGrade[i];
				//   run function to convert letter grade to numerical value
				gradePoints += alphaToPoint(credits[i],letterGrade[i]); 
			}
			cout<<"\n"<<"Your total number of credits: "<<creditTotal<<"\n";
			cout<<"Your number of GPA points: "<<gradePoints<<"\n";
			gpa = gradePoints/creditTotal;
			cout<<"Congratulations! Your Semester GPA is "<<gpa<<"\n";
			//

			return 0;
		}
		else
		{
			cout<<"invalid option, try again."<<'\n';
		}
		

		//  gpa = add each class variable and divide by total credits
	}

}