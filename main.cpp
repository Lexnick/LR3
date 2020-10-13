#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
int main() {
    std::srand(std::time(nullptr));
    int x[10];
    for (int n=0; n!=10; ++n)
    {
        x[n]=-10 + std::rand()/((RAND_MAX + 1u)/21);
        std::cout<<x[n]<<std::endl;
    }
    std::cout<<"The difference between 6,7 and 4 elements: "<<x[6]-x[7]-x[4]<<::std::endl;
    int a=0;
    std::cout<<"Enter the length of the 1st array (>10)"<<std::endl;
    std::cin>>a;
    int* array = new int[a];
    for (int n=0; n!=a; n++)
    {
        std::cout<<"Enter the value for number "<<n<<std::endl;
        std::cin>>array[n];
    }
    std::cout<<"Array's values:"<<std::endl;
    for (int n=0; n!=a; n++)
    {
        std::cout<<array[n]<<std::endl;
    }
    std::cout<<"Array's values after conversions:"<<std::endl;
    for (int n=0; n!=a; n++)
    {
        if (array[n]%2==0)
            array[n]=array[n]*array[n];
        std::cout<<array[n]<<std::endl;
    }
    int k1,
            k2,
            sum=0;
    std::cout<<"Enter k1"<<std::endl;
    std::cin>>k1;
    std::cout<<"Enter k2"<<std::endl;
    std::cin>>k2;
    for (int n=k1; n!=k2+1; n++)
    {
        sum+=array[n];
    }
    std::cout<<"Sum of elements from k1 to k2: "<<sum<<std::endl;
    delete[] array;
    array= nullptr;
    std::cout<<"Enter the length of the 2nd array(>5)"<<std::endl;
    int m=0;
    std::cin>>m;
    std::vector<int> vec(m);
    for (int &n : vec)
    {
        std::cout<<"Enter the value"<<std::endl;
        std::cin>>n;
    }
    std::cout<<"Array's values:"<<std::endl;
    for (int n : vec)
    {
        std::cout<<n<<std::endl;
    }
    vec.push_back(13);
    std::cout<<"Array's values after 1st conversions:"<<std::endl;
    for (int n : vec)
    {
        std::cout<<n<<std::endl;
    }
    std::cout<<"Array's values after 2nd conversions:"<<std::endl;
    for (int &n : vec)
    {
        n=n/vec[m];
        std::cout<<n<<std::endl;
    }
    bool check=false;
    int number=0;
    int number_of_1st_element=0;
    std::cout<<"Array's values after 3st conversions:"<<std::endl;
    for (int &n : vec)
    {
        if ((check==false)&&(n>2))
        {
            check=true;
            number_of_1st_element=number;
        }
        number++;
    }
    vec.erase(vec.begin()+number_of_1st_element);
    for (int n : vec)
    {
        std::cout<<n<<std::endl;
    }
    std::string input_string;
    std::cout<<"Enter the string"<<std::endl;
    std::cin.ignore(1,'/n');
    std::getline(std::cin, input_string);
    std::cout<<"Current string:"<<input_string<<std::endl;
    std::cout<<"Length of the string: "<<input_string.length()<<std::endl;
    int count_j=0;
    for (int n=0; n!=input_string.length(); n++)
    {
        if (input_string[n]=='j')
            count_j+=1;
    }
    std::cout<<"Proportion of the letter 'j': "<< static_cast<float>(count_j)/input_string.length()<<std::endl;
    int l1=0,
            l2=0;
    std::cout<<"Enter l1"<<std::endl;
    std::cin>>l1;
    std::cout<<"Enter l2"<<std::endl;
    std::cin>>l2;
    std::cout<<input_string.substr(l1, l2-l1+1)<<std::endl;
    std::string CanString="Can you can a can as a canner can can a can?";
    std::cout<<CanString<<std::endl;
    std::string UserString;
    std::cout<<"Enter the replacement"<<std::endl;
    std::cin.ignore(1,'/n');
    std::getline(std::cin, UserString);
    while(CanString.find("can")!=std::string::npos)
    {
        CanString.replace(CanString.find("can"), 3, UserString);
    }
    std::cout<<CanString<<std::endl;
    return 0;
}

