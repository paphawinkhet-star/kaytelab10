#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream file("score.txt");

    double x, sum = 0, mean = 0, sd = 0;
    int n = 0;

    while (file >> x) {
        sum += x;
        n++;
    }

    mean = sum / n;

    file.clear();
    file.seekg(0, ios::beg);

    while (file >> x) {
        sd += pow(x - mean, 2);
    }

    sd = sqrt(sd / n);

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    file.close();
    return 0;
}
