#include<iostream>
#include<fstream>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			}
		}
	}
}

int main(){
	ifstream score1("C:\\Users\\ASUS\\Desktop\\score1.txt");
	ifstream score2("C:\\Users\\ASUS\\Desktop\\score2.txt");
	ifstream score3("C:\\Users\\ASUS\\Desktop\\score3.txt");
	string line;
    int count = 0;
	while(getline(score1,line)){
        atof(line.c_str());
		count++;

	}
	while(getline(score2,line)){
		atof(line.c_str());
		count++;

	}
	while(getline(score3,line)){
		 atof(line.c_str());
		count++;

	}
   
  
}






