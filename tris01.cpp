//single player still working progress and control of winner isn't define

#include <iostream>
#include <time.h>
#include <stdlib.h> 
 
using namespace std;
//Programmare una stringa di codice che faccia giocare una o due persone a tris.

int main ()
{ 
int s;
cout << "Se vuoi giocare da solo inserire 1" <<endl;
cout << "Se vuoi sfidare qualcuno inserire 2" <<endl;
cin >> s;
switch(s){
	case (1):
	{
		string g1;
		int d=1,r,cr,p,k,cp,z;
		char c='l',V[10];
			srand(time(NULL));
			cout<<"Inserisci il tuo nome " <<endl ;
			cin>>g1;
			cout <<endl <<endl;
			cout<<"Ora lancio una moneta...";
			r=rand()%100+1;
			if(r<=50){
			  	cout <<"devi cominciare tu"<<g1;
				d=1;   
			}
			else{
			   	cout<<"devo cominciare io";
			    d=0;
			}
			
		do{
			srand(time(NULL));
			c='l';
			if(d==1){
				do{
					//messaggio di errore
					if(c=='v'){
						cout<<"Inserisci un altro posto "<<g1<<", questo è gia occupato"<<endl<<endl;
					}
					k=0;
					while(k!=1){
						cout<<"Inserisci la righa, con un numero tra 1 e 3"<<endl;
						cin>>p;
						switch(p){
							case(1):
								k=1;
							break;
							case(2):
								k=1;
							break;
							case(3):
								k=1;
							break;			
						}
				    }
				    k=0;
					while(k!=1){
						cout<<"Inserisci la colonna, con una lettere A, B, C (indifferente se maiuscole o minuscole)"<<endl;
						cin>>c;
						switch(c){
		    				case('A'):
		    					c=0;
		    					k=1;
		    				break;
		      	  			case('a'):
							    c=0;
							    k=1;
							break;
							case('B'):
				   				c=5;
				   				k=1;
							break;
							case('b'):
				   			    c=5;
				   			    k=1;
							break;
							case('C'):
							    c=8;
							    k=1;
							break;
							case('c'):
							    c=8;
							    k=1;
							break;								
						}
				    }
					cp=c+p;
					c='v';
		    		if(cp>=6){
			  			 cp=cp-2;
					}
					
		      	}  
				//controllo prima di posizionare nel vettore la X o lo 0
				while(V[cp]=='X'||V[cp]=='O');
				V[cp]=='O';
					
				for(int i=1;i<=9;i=i+3){
					cout<<" | "<<V[i];
					switch(i){
						case(7):
							cout<<" |"<<endl;
							z=z+1;
							cout<< z ;
							i=i-8;
						break;
						case(8):
							cout<<" |"<<endl;
							z=z+1;
							cout<< z ;
							i=i-8;
						break;
						case(9):
							cout<<" |"<<endl<<endl;
						break;			
					}
		     	}
				r=rand()%9+1;
				switch(cp){
					case(1): 
						switch(r){
							case(2): 
								r=8;
							break;
							case(9):
								r=4;
							break;
					 	}
					break;
					case(7): 
						switch(r){
							case(4): 
								cp=9;
					 	}
					break;
					case(9): 
						switch(r){
							case(7): 
								r=6;
							break;
					 	}
					break;
					case(3): 
						switch(r){
							case(2): 
								r=7;
							break;
							case(3):
								r=8;
							break;
							case(6):
								r=9;
							break;	
					 	}
					break;
					case(4): 
						switch(r){
							case(1): 
								r=8;
							break;
							case(4):
								r=9;
							break;
					 	}
					break;
					case(2): 
						switch(r){
							case(1): 
								r=7;
							break;
							case(2):
								r=8;
							break;
							case(3):
								r=9;
							break;	
					 	}
					break;
					case(6): 
						switch(r){
							case(3): 
								r=7;
							break;
							case(6):
								r=8;
							break;
					 	}
					break;
					case(5): 
						r=rand()%8+1;
						if(r==5){
							r=9;
						}
					break;	
				}
				V[r]='X';
				for(int i=1;i<=9;i=i+3){
					cout<<" | "<<V[i];
					switch(i){
						case(7):
							cout<<" |"<<endl;
							z=z+1;
							cout<< z ;
							i=i-8;
						break;
						case(8):
							cout<<" |"<<endl;
							z=z+1;
							cout<< z ;
							i=i-8;
						break;
						case(9):
							cout<<" |"<<endl<<endl;
						break;			
					}
			    }
			}	
			else{
				r=rand()%9+1;
				V[r]='O';
				d=1;
			}
			
			for(int i=1;i<=9;i=i+3){
				cout<<" | "<<V[i];
				switch(i){
					case(7):
						cout<<" |"<<endl;
						z=z+1;
						cout<< z ;
						i=i-8;
					break;
					case(8):
						cout<<" |"<<endl;
						z=z+1;
						cout<< z ;
						i=i-8;
					break;
					case(9):
						cout<<" |"<<endl<<endl;
					break;			
				}
		    }
			
			
			
			
		}
		
		
		
		
		
		}	
	break;
	
	case (2):
	{
		 	string n1, n2, n3;
			int o,r,p,d=1,i,t=0,y=3,k;
			char c, cp,V[10]=" "; 	
		 	srand(time(NULL));
			cout<<"Inserisci il tuo nome " <<endl ;
			cin>>n1;
			cout<<"Inserisci il nome del tuo avversario " <<endl;
			cin>>n2;
			cout <<endl <<endl;
			cout<<"Ora lancio una moneta...";
			r=rand()%100+1;
			if(r<=50){
			  	cout <<"deve cominciare "<<n1;
				n3=n1;   
			}
			else{
			   	cout<<"deve cominciare "<<n2;
			    n3=n2;
			}
			cout<<endl <<endl;
			cout<<"    A   B   C" <<endl;
			cout<<"1 |   |   |   |" <<endl;
			cout<<"2 |   |   |   |" <<endl;
			cout<<"3 |   |   |   |" <<endl;

			do{
				c='l';
				
				do{
					//messaggio di errore
					if(c=='v'){
						cout<<"Inserisci un altro posto "<<n3<<", questo è gia occupato"<<endl<<endl;
					}
					k=0;
					while(k!=1){
							cout<<"Inserisci la righa, con un numero tra 1 e 3"<<endl;
							cin>>p;
						switch(p){
							case(1):
								k=1;
							break;
							case(2):
								k=1;
							break;
							case(3):
								k=1;
							break;			
					}
				    }
				    k=0;
					while(k!=1){
							cout<<"Inserisci la colonna, con una lettere A, B, C (indifferente se maiuscole o minuscole)"<<endl;
							cin>>c;
						switch(c){
		    				case('A'):
		    					c=0;
		    					k=1;
		    				break;
		      	  			case('a'):
							    c=0;
							    k=1;
							break;
							case('B'):
				   				c=5;
				   				k=1;
							break;
							case('b'):
				   			    c=5;
				   			    k=1;
							break;
							case('C'):
							    c=8;
							    k=1;
							break;
							case('c'):
							    c=8;
							    k=1;
							break;								
						}
				    }
					cp=c+p;
					c='v';
		    		if(cp>=6){
			  			 cp=cp-2;
					}
		      	 	}  
					//controllo prima di posizionare nel vettore la X o lo 0
					while(V[cp]=='X'||V[cp]=='O');
				
					if(d==1){
						V[cp]='X';
						d=0;
						
					}
					else{
						V[cp]='O';
						d=1;
					}
					cout<<"    A   B   C" <<endl;
					int z=1;
					cout<<z;
					//ciclo per stampa
					for(i=1;i<=9;i=i+3){
						cout<<" | "<<V[i];
						switch(i){
							case(7):
								cout<<" |"<<endl;
								z=z+1;
								cout<< z ;
								i=i-8;
							break;
							case(8):
								cout<<" |"<<endl;
								z=z+1;
								cout<< z ;
								i=i-8;
							break;
							case(9):
								cout<<" |"<<endl<<endl;
							break;			
						}
		    		}
		    		t=t+1;
		    	   for(i=1;i<=8;i=i+1){
				 	  switch(i){
						case(1):
							y=3;
							cp=1;
						break;
						case(2):
							cp=2;
						break;
						case(3):
							cp=3;
						break;
						case(4):
							y=1;
						 	cp=1;
						break;
						case(5):
							cp=4;
						break;
						case(6):
							cp=7;
						break;
						case(7):
							y=4;
							cp=1;
						break;
						case(8):
							cp=3;
						break;

                        }
					switch(V[cp]){
						case('X'):
							cp=cp+y;
							if(V[cp]=='X'){
								cp=cp+y;
							  	if(V[cp]=='X'){
									cout<<"Bravo "<<n3<<" hai vinto"<<endl;
									system ("PAUSE");
									return 0;
								}
							}	
			      		 break;
			      		 case('O'):
							cp=cp+y;
							if(V[cp]=='O'){
								cp=cp+y;
							  	if(V[cp]=='O'){
									cout<<"Bravo "<<n3<<" hai vinto"<<endl;
									system ("PAUSE");
									return 0;
								}
							}	
			      		 break;



                       }



                      }

   			if(n3==n1){
			n3=n2;
			}
			else{n3=n1;}
		    }
		    while(t<9);
	}
	break;
}

cout <<endl;
system ("PAUSE");
return 0;

}
