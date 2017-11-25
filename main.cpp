#include <iostream>
#define max 13
using namespace std;

int main()
{
    int marks[max] ;
    int cpi[max] ;
    int n;
    int total_marks = 0;
    int total_cpi = 0;
    cout << "Enter the number of subjects" <<endl;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cout << "Enter the marks : ";
        cin >> marks[i];
        cout << "Enter the corresponding cpi : " ;
        cin >> cpi[i];
        marks[i] = marks[i] * cpi[i] ;
        cout <<endl;
    }

    for(int i = 0 ; i < n ; i++ ){
        total_marks = total_marks + marks[i];
        total_cpi = total_cpi + cpi[i];
    }
    cout << "Total marks * cpi sum = " << total_marks <<endl;
    cout<< "Total cpi = " <<total_cpi <<endl;
    float cpiPercent = float(total_marks) / float(total_cpi) ;
    cout << "Total cpi percent this sem is : " << cpiPercent ;
    return 0;
}
//first : 74.92
//second 70.33
//third: 72.1786
//fourth: 79.6552
// fifth : 75.5
//6th :: 75.7407
