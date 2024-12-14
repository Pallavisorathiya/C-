#include<iostream>
using namespace std;
//Simple Grade Calculator


int main(){
 int  score; char grade;

//INPUT THE SCORE
    cout <<"Enter the score : " << endl;
    cin >> score ;
    
// CALCULATE GRADE USING  TERNARY  OPARETORS
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';
     cout << " Your grade is: " << grade << endl;

//SWITCH-CASE STATEMENT
        switch(grade){
            case 'A':
            cout <<"Excellent work!" <<endl;
            break;
               case 'B':
            cout << "Well done." << endl;
            break;
        case 'C':
            cout << "Good job." << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better." << endl;
            break;
        case 'E':
            cout << "You barely passed, try to improve next time." << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;

        }

//ELIGIBLITY FOR NEXT LEVEL

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') 
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } 
    else if (grade == 'F') 
    {
        cout << "Please try again next time." << endl;
    }


    return 0 ;
}