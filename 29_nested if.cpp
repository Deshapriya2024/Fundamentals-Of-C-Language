//check your user id and password.
#include<stdio.h>
int main()
{
	int user_id=123456,password=2002;
	if(user_id==123456)
	{if(password==2002){
		printf("log in success");
	}
	else{
		printf("passwor is incorrect");
	}
    }
	else{
		printf("user id incorrect");
	}
	
	return 0;
}
