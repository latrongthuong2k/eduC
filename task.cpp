# include <iostream>
class editor
{
    private:
     int* newArray;      
     int sizeofNumber;

    public:
        editor()
        {
            newArray = nullptr;
        }
        ~editor()
        {
            delete[] newArray;
            newArray = nullptr;
            
        }
        //
    void Create(int numArr)
    {
        newArray = new int[numArr];
        sizeofNumber = numArr;
    }
    
    int get(int getNumArr) 
    {
        if(sizeofNumber <= 0 || getNumArr > sizeofNumber)
        {
        printf("out of arr\n");
        }
            return newArray[getNumArr];   
    }
    
    int set(int setNumArr) 
    {
        if(sizeofNumber <= 0 || setNumArr > sizeofNumber)
        {
        printf("out of arr\n");
        }
        return newArray[setNumArr] = setNumArr;
       
    }   
};

int main()
{
    editor test;
    test.Create(1000);
    for (int i = 0; i < 1000; i++)
        {
            test.set(i);
            
        }
    for (int i = 0; i < 1000; i++)
        {
            
            printf("num = %d\n", test.get(i));
        }
    

}