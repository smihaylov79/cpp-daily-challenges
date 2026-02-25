#include <iostream>
using namespace std;

void calculateBMI()
{
    system("cls");

    double weight;
    double height;

    cout << endl << endl;
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;

    cout << "Enter your height (in meters): ";
    cin >> height;

    double bmi = weight / (height * height);
    cout << endl << endl;
    cout << "_____________________" << endl;
    cout << "Your Body Mass Index is " << bmi << endl;

    cout << "_____________________" << endl;
    if (bmi < 18.5)
        cout << "You are Underweight";
    else if (bmi >= 18.5 && bmi <= 25)
        cout << "You are perfectly healhty";
    else if (bmi > 25)
        cout << "You are Overweight";
    cout << endl << "____________________";

    cout << "\n\nPress any key to go back to Menu...";
    getchar();
}

void instructions()
{
    system("cls");
    cout << "Instructions";
    cout << "\n----------------------";
    cout << "\n BMI is less then 18.5 : You are Underweight";
    cout << "\n BMI is between 18.5 and 25 (inclusive) : You are Perfectly Healthy";
    cout << "\n BMI is greater then 25 : you are overweight";
    cout << "\n\n Press any key to go back to menu";
    getchar();
}

int main()
{
    do
    {
        system("cls");
        cout << " ----------------------------- " << endl;
        cout << " |       BMI Calculator       | " << endl;
        cout << " ------------------------------ " << endl;
        cout << " 1. Calculate BMI" << endl;
        cout << "2. BMI Rules"<<endl;
        cout << "3. Quit"<< endl<<endl;
        cout << "Select option: ";
        char op = getchar();

        if (op == '1') calculateBMI();
        else if (op == '2') instructions();
        else if (op == '3') exit(0);

    }while (1);


    return 0;
}