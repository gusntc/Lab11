#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    ifstream source("score.txt");
    string textline;
    int count = 0;
    float sum = 0;
    float square = 0;
    while(getline(source,textline)){
        count++;
        sum += atof(textline.c_str());
        square += pow(atof(textline.c_str()),2);
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << pow((square/count)-(pow((sum/count),2)),0.5);

}

