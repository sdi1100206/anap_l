#include<iostream>
#include<vector>
#include<math.h>
#include"Functions.h"
using namespace std;

int main (){
	vector<vector<double> > c1 ;
	 vector<vector<double> > c2;

	vector <double> s1;
	s1.push_back(2);
	s1.push_back(2);
	vector <double> s2 ;
	s2.push_back(5);
	s2.push_back(5);

	c1.push_back(s1);
	c1.push_back(s2);

	vector <double> s3;
        s3.push_back(2); 
        s3.push_back(2);
        vector <double> s4 ;
        s4.push_back(5);
        s4.push_back(5);

        c2.push_back(s3);
        c2.push_back(s4);
//	int n =c1.size(); 
//	int m =c2.size();
//	double L[n][m] ;

	double d_f_d_c1_c2 = discrete_frechet_distance(c1,c2);
	cout << d_f_d_c1_c2 << endl ;
/*	for(int i = 0 ; i <n ; i ++ ){
		for(int j=0; j <m ; j++){
			if(i == 0 && j == 0 ){
				double distancex = (c1[0][0] - c2[0][0]) * (c1[0][0] - c2[0][0]);
  				double distancey = (c1[0][1] - c2[0][1]) * (c1[0][1] - c2[0][1]);
  				double distancex_y = sqrt(distancex + distancey);
				L[0][0] = distancex_y;
//				cout << L[0][0];
			}
			else if(i==0 && j!=0 ){
				double distancex = (c1[0][0] - c2[j][0]) * (c1[0][0] - c2[j][0]);
                                double distancey = (c1[0][1] - c2[j][1]) * (c1[0][1] - c2[j][1]);
                                double distancex_y = sqrt(distancex + distancey);
				double L_element = max(distancex_y , L[0][j]);
				L[i][j] = L_element;
			}
			else if(j == 0 && i!= 0 ){
				double distancex = (c1[i][0] - c2[0][0]) * (c1[i][0] - c2[0][0]);
                                double distancey = (c1[i][1] - c2[0][1]) * (c1[i][1] - c2[0][1]);
                                double distancex_y = sqrt(distancex + distancey);
                                double L_element = max(distancex_y , L[0][j]);
                                L[i][j] = L_element;

			
			}
			else{
//L[i, j] := max(d(pi, qj), min(L[i - 1, j], L[i, j - 1], L[i - 1, j - 1]))
				double distancex = (c1[i][0] - c2[j][0]) * (c1[i][0] - c2[j][0]);
                                double distancey = (c1[i][1] - c2[j][1]) * (c1[i][1] - c2[j][1]);
                                double distancex_y = sqrt(distancex + distancey);
				double min_in_hood = min(min(L[i-1][j],L[i][j-1]),(L[i-1][j-1]));
				double L_element = max(distancex_y,min_in_hood);
				L[i][j] = L_element ; 
			}

		}



	}
	return L[n-1][m-1];
*/
}
