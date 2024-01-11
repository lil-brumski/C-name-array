#include <iostream>
#include <string>

int main(){
	std::string nam1, nam2, nam3, nam4;
	      std::cout<<"How many names do you have? ";
	      int n;
	      std::cin>>n;
	      
    
	      //Checks if the user has only 1 name.
	      if(n == 1){
	      	  std::string nam[n];
	      	  std::cout<<"\nEnter your name: ";
	      	  std::cin>>nam1;
	      	  std::cout<<"nam["<<n-1<<"]: "<<"\""<<nam1<<"\""<<std::endl;
	      }
	      
	       //Checks if the user only has 2 names.
	       else if(n == 2){
	      	  std::string nam[n];
	      	  std::cout<<"\nEnter your names, separate them using spaces: ";
	      	  std::cin>>nam1;
	      	  std::cin>>nam2;
	      	  
	      	   std::cout<<"\nnam["<<n<<"] = "<<"{\""<<nam1<<"\", \""<<nam2<<"\"}"<<"\n"<<std::endl;
	      	   
	      	  std::cout<<"nam["<<n-2<<"]: "<<"\""<<nam1<<"\""<<std::endl;
	      	  std::cout<<"nam["<<n-1<<"]: "<<"\""<<nam2<<"\""<<std::endl;
	      	  
	      	 
	      }
	      
	      //Checks if the user only has 3 names.
	      else if(n == 3){
	      	  std::string nam[n];
	      	  std::cout<<"\nEnter your names, separate them using spaces: ";
	      	  std::cin>>nam1;
	      	  std::cin>>nam2;
	      	  std::cin>>nam3;
	      	  
	      	   std::cout<<"\nnam["<<n<<"] = "<<"{\""<<nam1<<"\", \""<<nam2<<"\", \""<<nam3<<"\"}"<<"\n"<<std::endl;
	      	   
	      	  std::cout<<"nam["<<n-3<<"]: "<<"\""<<nam1<<"\""<<std::endl;
	      	  std::cout<<"nam["<<n-2<<"]: "<<"\""<<nam2<<"\""<<std::endl;
	      	  std::cout<<"nam["<<n-1<<"]: "<<"\""<<nam3<<"\""<<std::endl;	      	  	      	 
	      }
	      
	      //Checks if the user only has 4 names.
	      else if(n == 4){
	      	  std::string nam[n];
	      	  std::cout<<"\nEnter your names, separate them using spaces: ";
	      	  std::cin>>nam1;
	      	  std::cin>>nam2;
	      	  std::cin>>nam3;
	      	  std::cin>>nam4;
	      	  
	      	  std::cout<<"\nnam["<<n<<"] = "<<"{\""<<nam1<<"\", \""<<nam2<<"\", \""<<nam3<<"\", \""<<nam4<<"\"}"<<"\n"<<std::endl;
	      	  
	      	  std::cout<<"nam["<<n-4<<"]: "<<"\""<<nam1<<"\""<<std::endl;
	      	  std::cout<<"nam["<<n-3<<"]: "<<"\""<<nam2<<"\""<<std::endl;
	      	  std::cout<<"nam["<<n-2<<"]: "<<"\""<<nam3<<"\""<<std::endl;
	      	  std::cout<<"nam["<<n-1<<"]: "<<"\""<<nam4<<"\""<<std::endl;	      	   
	      }
	      
	      //Executes when the user entered a number outside of what the program can handle.
	      else{
	      	std::cout<<"\nSorry, provisions weren\'t made for integers outside of 1-4 or non-integers!"<<std::endl;
	      }
	      
}
