//Septian Eko Nugroho
//2300018417
//kelas J

#include<iostream>

using namespace std;

char array[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char pemain = 'X';
int b;

//menampilkan papan tic tac toe
void papanTictactoe(){
    
    cout<<"     |     |     \n";
    cout<<array[0][0]<<"    |"<<array[0][1]<<"    |"<<array[0][2]<<endl;
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<array[1][0]<<"    |"<<array[1][1]<<"    |"<<array[1][2]<<endl;
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<array[2][0]<<"    |"<<array[2][1]<<"    |"<<array[2][2]<<endl;
    cout<<"     |     |     \n";
}


void mulaiPermainan(){
	int a;
	string peringatan = "kolom sudah terisi,silahkan pilih yang lain";
	cout<<"pemain "<<pemain<<" memulai"<<" pilih nomor pada kolom :";
	cin>>a;
	
	if(a==1){
		if(array[0][0]='1'){
			array[0][0]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
	else if(a==2){
		if(array[0][1]='2'){
			array[0][1]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
	 else if(a==3){
		if(array[0][2]='3'){
			array[0][2]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
    else if(a==4){
		if(array[1][0]='4'){
			array[1][0]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
    else if(a==5){
		if(array[1][1]='5'){
			array[1][1]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
    else if(a==6){
		if(array[1][2]='6'){
			array[1][2]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
    else if(a==7){
		if(array[2][0]='7'){
			array[2][0]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
    else if(a==8){
		if(array[2][1]='8'){
			array[2][1]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}
    else if(a==9){
		if(array[2][2]='9'){
			array[2][2]=pemain;
		}else{
			cout<<peringatan<<endl;
			mulaiPermainan();
		}		
	}else{
        cout<<"input kembali"<<endl;
        mulaiPermainan();
    }
	
}

void pergantian(){
    if(pemain == 'X'){

        pemain = 'O';
    }else{
        pemain = 'X';
    }

}

char pemenang(){
    //untuk pemain X
    if(array[0][0]=='X' && array[0][1] =='X' && array[0][2]=='X'){
        return 'X';
    }else if(array[1][0]=='X' && array[1][1] =='X' && array[1][2]=='X'){
        return 'X';
    }else if(array[2][0]=='X' && array[2][1] =='X' && array[2][2]=='X'){//batas baris
        return 'X';
    }else if(array[0][0]=='X' && array[1][0] =='X' && array[2][0]=='X'){
        return 'X';
    }else if(array[0][1]=='X' && array[1][1] =='X' && array[1][2]=='X'){
        return 'X';
    }else if(array[0][2]=='X' && array[1][2] =='X' && array[2][2]=='X'){//batas kolom
        return 'X';
    }else if(array[0][0]=='X' && array[1][1] =='X' && array[2][2]=='X'){//silang
        return 'X';
    }else if(array[0][2]=='X' && array[1][1] =='X' && array[2][0]=='X'){//silang
        return 'X';
    }
    //Untuk pemain O
    else if(array[0][0]=='O' && array[0][1] =='O' && array[0][2]=='O'){
        return 'O';
    }else if(array[1][0]=='O' && array[1][1] =='O' && array[1][2]=='O'){
        return 'O';
    }else if(array[2][0]=='O' && array[2][1] =='O' && array[2][2]=='O'){//batas baris
        return 'O';
    }else if(array[0][0]=='O' && array[1][0] =='O' && array[2][0]=='O'){
        return 'O';
    }else if(array[0][1]=='O' && array[1][1] =='O' && array[2][1]=='O'){
        return 'O';
    }else if(array[0][2]=='O' && array[1][2] =='O' && array[2][2]=='O'){//batas kolom
        return 'O';
    }else if(array[0][0]=='O' && array[1][1] =='O' && array[2][2]=='O'){//silang
        return 'O';
    }else if(array[0][2]=='O' && array[1][1] =='O' && array[2][0]=='O'){//silang
        return 'O';
    }else{
        return '/';
    }
}

int main(){
		papanTictactoe();
        while(1){
            b++;
            mulaiPermainan();
            papanTictactoe();
            if(pemenang()=='X'){
                cout<< "pemain X menang"<<endl;
                break;
            }else if(pemenang()=='O'){
                cout<< "pemain O menang"<<endl;
                break;
            }else if(pemenang()=='/' && b == 9){
                cout<<"kedudukan sama"<< endl;
                break;
            }

            pergantian();
        
        }
}