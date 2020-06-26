#include<bits/stdc++.h> 
using namespace std; 
  


int sum(int t,int y){
	
}
int a = 0,c;	// a is for maintaining the value of third element i.e. if V7 V8 V5 V0 then a will hold '5' , where as C os for maintaining the count 

 int path(int q,int r,std::vector< std::vector<int> >& P1){			//All Pair shortest path
	if (P1[q][r]!=0)
	{	
		path(q,P1[q][r],P1);
		cout << "V"<< P1[q][r]<<" ";
		path(P1[q][r],r,P1);
		if(c == 0)
		{
			a = P1[q][r];										// gets value of third element if any as described above
			++c;												//Increament c  
		}
	}
	return P1[q][r]; 
}
  

void floydAll(int n, int V, std::vector< std::vector<int> >& vec)	// Gets N and Vector array 
{ 
	srand (time(NULL));									//Againt to make sure random do not repeat
	vec.resize(n, std::vector<int>(n << n, 0));			//resizes Matrix
  
	
	for (int i = 0; i <n; i++) { 
        for (int j = 0; j < n; j++){ 
           if(i == j){
		   vec[i][j] = 0;						//inserts 0 initially in all the elements
		   vec[j][i] = 0;
		   }
			else 
			{
				int r = (rand() % 10 + 1);			//generates random to be put in the Matrix Created
				vec[i][j] = r;					//insert random values
				vec[j][i] = r; 					//inverse has the same value
			}

		}
	
	}
	
	
	
	
	int D[V][V];									//Initializing D Matrix
													
	std::vector< std::vector<int> > P1;			//Initializing P Matrix
	P1.resize(n, std::vector<int>(n << n, 0));	
	
	 
	for (int i = 0; i <V; i++){  
        for (int j = 0; j < V; j++){  
            D[i][j] = vec[i][j];  
			P1[i][j] =  0;
		}
	}
    
	for (int k = 0; k <V; k++)  
    {  
          
        for (int i = 0; i <V; i++)  
        {  
            
            for (int j = 0; j <V; j++)  
            {  
                
                if (D[i][k] + D[k][j] < D[i][j]){  
                    D[i][j] = D[i][k] + D[k][j];  
					P1[i][j] = k;}
			}  
			
			
        }  
    }  
	
	
	
	cout << "D Matrix: "<<" \n" <<endl; 
	for (int i = 0; i <V; i++) 
	{ 
		for (int j = 0; j < V; j++)
		{ 
			cout<< D[i][j]<< "	"; 				//Displaying D Matrix
			
		} 
			cout<< "\n"; 							
	}	
	cout<< "\n"; 								
	cout<< "\n";								
		
		
		
	cout << "P Matrix:" << " \n"<<endl; 
		
	for (int i = 0; i <V; i++) 
	{ 
		for (int j = 0; j < V; j++)
		{
			cout << P1[i][j] << "	";				//Displaying P Matrix
		}   
		cout<< "\n"; 
	}
	cout<< "\n"; 
	cout<< "\n";
	

	int t=0,y=0;
	cout << "ALL PAIR SHORTEST PATH: "<<"\n" << endl; 		
	for (int i = 0; i <V; i++) { 
		for (int j = 0; j < V; j++){
			if(P1[i][j]!=0)
			{
				c = 0;													//sets counter to '0' everytime PATH is called
				cout << "For " <<i << " -> " << j << " :: ";
				cout << "V" <<i << " ";
				t = path(i,j,P1); 
				cout << "V"<< j; 				
				if(t != a){												
					int q = D[i][t]+D[t][a]+D[a][j];					//calculates the sum of weights we got from PATH  
					cout << " :: " <<q <<endl; 							//display SUM of the shortest pair
				}
				else	
				{
					int w = D[i][t]+D[t][j];							//calculates the sum of weights we got from PATH
					cout << " :: " <<w <<endl;							//display SUM of the shortest pair
				}
			}
				else {
					cout << "For " <<i << " -> " << j << " :: " << 0<<endl;
				}
		} 
		cout<< "\n"; 
	}	
}		
 


 
int main() 
{ 
	srand (time(NULL));			//Makes sure random digit doesn't repeat
	int N = 5 + rand() % (10 - 5 + 1);		// gets values for N between 5 to 10
	cout <<"Selected N Value: " << N << endl; 	
    cout << "\n"; 
	int V = N; 
    std::vector< std::vector<int> > vec;			//vector array
	floydAll(N, V, vec); 
	return 0; 
}
