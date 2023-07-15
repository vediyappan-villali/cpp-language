// C++ program to understand virtual base class

#include <iostream>

using namespace std;

class STUDENT
{
    private:
        int rollNo;
        char name[32];
        char branch[32];
    public:
        void setStudentInfo()
        {
            cout << "Enter roll number: ";
            cin  >> rollNo;
            cout << "Enter name: ";
            cin  >> name;
            cout << "Enter branch: ";
            cin  >> branch;
        }

        void getStudentInfo()
        {
            cout << "Roll number = " << rollNo << endl;
            cout << "Name = " << name << endl;
            cout << "Branch = " << branch << endl;
        }
};

class INTERNAL_EXAM : virtual public STUDENT
{
    private:
        float subject1Marks;
        float subject2Marks;
    public:
        void setInternalMarks()
        {
            cout << "Enter subject 1 marks: ";
            cin  >> subject1Marks; 
            cout << "Enter subject 2 marks: ";
            cin  >> subject2Marks; 
        }

        void getInternalMarks()
        {
            cout << "Internal marks... " << endl;
            cout << "Subject 1 = " << subject1Marks << endl;
            cout << "Subject 2 = " << subject2Marks << endl;
        }

        float getInternalTotal()
        {
            return subject1Marks + subject2Marks;
        }
};

class EXTERNAL_EXAM : virtual public STUDENT
{
    private:
        float subject1Marks;
        float subject2Marks;
    public:
        void setExternalMarks()
        {
            cout << "Enter subject 1 marks: ";
            cin  >> subject1Marks; 
            cout << "Enter subject 2 marks: ";
            cin  >> subject2Marks; 
        }

        void getExternalMarks()
        {
            cout << "External marks... " << endl;
            cout << "Subject 1 = " << subject1Marks << endl;
            cout << "Subject 2 = " << subject2Marks << endl;
        }

        float getExternalTotal()
        {
            return subject1Marks + subject2Marks;
        }
};

class EXAM_RESULT : public INTERNAL_EXAM, public EXTERNAL_EXAM
{
    private:
        float totalMarks;
    public:
        float getTotalMarks()
        {
            return getInternalTotal() + getExternalTotal();
        }
};

int main(void)
{
    EXAM_RESULT result;

    cout << "Enter student info: " << endl;
    result.setStudentInfo();
    
    cout << "Enter internal marks: " << endl;
    result.setInternalMarks();

    cout << "Enter external marks: " << endl;
    result.setExternalMarks();

    cout << endl << "Student and result details... " << endl;
    result.getStudentInfo();
    result.getInternalMarks();
    result.getExternalMarks();
    cout << "Total marks = " << result.getTotalMarks() << endl;

    return 0;
}
