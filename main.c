#include "include/main.h"

// Store marks for all the 12 subjects!!
float marks[12];
char *subjects[12];

void input_marks()
{
    subjects[0] = "Maths";
    subjects[1] = "English";
    subjects[2] = "Kiswahili";
    subjects[3] = "Chemistry";
    subjects[4] = "Biology";
    subjects[5] = "Business";
    subjects[6] = "Computer Studies";
    subjects[7] = "Agriculture";
    subjects[8] = "Geography";
    subjects[9] = "C.R.E";
    subjects[10] = "Physics";
    subjects[11] = "History and Government";

    for (int i = 0; i < sizeof(marks) / 4; i++)
    {
        char *subject = subjects[i];
        printf("Please enter the marks for %s\n", subject);
        scanf("%f", &marks[i]);
    }
}

float add_subjects()
{
    float total = 0.0f;
    for (int i = 0; i < sizeof(marks) / 4; i++)
    {
        total = total + marks[i];
    }
    return total;
}
int main()
{
    input_marks();
    printf("Your total score is %f \n", add_subjects());
    return 0;
}