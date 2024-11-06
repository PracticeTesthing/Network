#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	This the dataset that contains the input and output.
	The idea is to have tons of dataset. Problem here is that we aren't really predicting
	because all the dataset has an outputh
	*/
    vector<tuple<int, int, int, int>> dataset = {
        make_tuple(0, 0, 0, 0),
	make_tuple(0, 0, 1, 0),
	make_tuple(0, 1, 0, 1),
        make_tuple(1, 1, 1, 1),
        make_tuple(1, 0, 0, 1),
        make_tuple(1, 0, 1, 1),
        make_tuple(1, 1, 0, 0),
        make_tuple(0, 1, 1, 0)
    };

    //Stores user input
    int input1, input2, input3;
    cout << "Enter 3 values in spaces: ";
    cin >> input1 >> input2 >> input3;

    //Initializing counters to keep track of the outputs
    int countTotalMatches = 0;
    int countOnes = 0;
    int countZeros = 0;

    //Iterate through the dataset while increment our three counters above
    for (const auto& row : dataset){
        int a, b, c, output;
        tie(a, b, c, output) = row;

        if (a == input1 && b == input2 && c == input3){
            countTotalMatches++;
            if (output == 1){
                countOnes++;
            } 
			else{
                countZeros++;
            }
        }
    }

    //Calculating final output
    if (countTotalMatches > 0){
        double probOne = static_cast<double>(countOnes) / countTotalMatches;
        double probZero = static_cast<double>(countZeros) / countTotalMatches;
        
        int predOutput = (probOne > probZero) ? 1 : 0;
        
        cout << "Output: " << predOutput << endl;
    } 
	else{
        cout << "No match found in dataset" << endl;
    }

    return 0;
}
