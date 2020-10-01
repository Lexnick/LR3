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
    std::cout<<x[6]-x[7]-x[4]<<::std::endl;
    int a=0;
    std::cout<<"Enter the length of the 1st array (>10)"<<std::endl;
    std::cin>>a;
    int array[a];
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
    std::cout<<"Array's values after conversions="<<std::endl;
    for (int n=0; n!=a; n++)
    {
        if (array[n]%2==0)
            array[n]=array[n]*array[n];
        std::cout<<array[n]<<std::endl;
    }
    int k1,
        k2,
        sum=0;
    std::cout<<"Enter k1 and k2"<<std::endl;
    std::cin>>k1>>k2;
    for (int n=k1; n!=k2+1; n++)
    {
        sum+=array[n];
    }
    std::cout<<"Sum of elements from k1 to k2:"<<sum<<std::endl;
    std::cout<<"Enter the length of the 2nd array(>5)"<<std::endl;
    int m=0;
    std::cin>>m;
    std::vector<int> vec(m);
    for (int n=0; n!=m; n++)
    {
        std::cout<<"Enter the value"<<std::endl;
        std::cin>>vec[n];
    }
    std::cout<<"Array's values:"<<std::endl;
    for (int n=0; n!=m; n++)
    {
        std::cout<<vec[n]<<std::endl;
    }
    vec.push_back(13);
    std::cout<<"Array's values after 1st conversions:"<<std::endl;
    for (int n=0; n!=m+1; n++)
    {
        std::cout<<vec[n]<<std::endl;
    }
    std::cout<<"Array's values after 2nd conversions:"<<std::endl;
    for (int n=0; n!=m+1; n++)
    {
        vec[n]=vec[n]/vec[m];
        std::cout<<vec[n]<<std::endl;
    }
    bool check=false;
    int number_of_1st_element=0;
    std::cout<<"Array's values after 3st conversions:"<<std::endl;
    for (int n=0; n!=m+1; n++)
    {
        if ((check==false)&&(vec[n]>2))
        {
            check=true;
            number_of_1st_element=n;
        }
    }
    vec.erase(vec.begin()+number_of_1st_element);
    for (int n=0; n!=m; n++)
    {
        std::cout<<vec[n]<<std::endl;
    }
    std::string input_string;
    std::cout<<"Enter the string"<<std::endl;
    std::cin>>input_string;
    std::cout<<"Current string:"<<input_string<<std::endl;
    std::cout<<"Length of the string: "<<input_string.length()<<std::endl;
    int count_j=0;
    for (int n=0; n!=input_string.length(); n++)
    {
        if (input_string[n]=='j')
            count_j+=1;
    }
    std::cout<<"Proportion of the letter 'j': "<< static_cast<float>(count_j)/input_string.length()<<std::endl;
    std::cout<<"Enter l1 and l2"<<std::endl;
    int l1=0,
        l2=0;
    std::cin>>l1>>l2;
    std::cout<<input_string.substr(l1, l2-l1+1)<<std::endl;
    std::cout<<"Can you can a can as a canner can can a can?"<<std::endl;
    std::cout<<"Enter the replacement"<<std::endl;
    std::string user_string;
    std::cin>>user_string;
    std::cout<<user_string<<" you "<<user_string<<" a "<<user_string<<" as a "<<user_string<<"ner "<<user_string<<' '<<user_string<<" a "<<user_string<<"?";
    return 0;
}