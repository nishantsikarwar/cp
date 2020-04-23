#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 998244353
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin);freopen("output","w",stdout);

template<typename T, int N>
class dynamic_array_implementation
{
private:
    /* data */
    m_Array = new T [N];
    int m_Length = N;   //user specified length of the array;
    int capacity = N;   // actual size of the array;
public:
    dynamic_array_implementation();

    ~dynamic_array_implementation()
    {
        delete [] m_Array;
    }

    int GetSize() const { return m_Length; }
    bool IsEmpty() const { return m_Length == 0; }
    T Get(int index) {return m_Array[index]; }
    void Set(int index, T element){ m_Array[index] = element; }

    void Clear()
    {
        for (int i = 0; i < capacity; i++)
        {
            m_Array[i] = NULL;
            m_Length = 0;
        }
        
    }

    void Add(T element)
    {
        //resize
        if(m_Length + 1 > capacity)
        {
            if(capacity = 0)
                capacity = 1;
            else
                capacity *= 2;  //double the size;
            new_Array<T, capacity>();
            for (int i = 0; i < m_Length; i++)
            {
                new_Array[i] = m_Array[i];
            }
        }
        new_Array[len++] = element;
    }

    T RemoveAt(int rm_index)
    {
        if(rm_index >= m_Length || rm_index < 0)
            std::cout << "Illegal Index"<<endl;
        T data = m_Array[rm_index];
        new_Array<T, capacity-1>();

        for (int i = 0, j = 0; i < m_Length; i++, j++)
        {
            if(i == rm_index) j--;
            else
                new_Array[j] = m_Array[i];

        }
        

        return data;
    }





    T& operator [](int index)
    {
        if(index -1 > m_Length)
            std::cout << "Illegal Index"<<endl;
        return m_Array[index];
    }
};

// dynamic_array_implementation::dynamic_array_implementation(/* args */)
// {
// }

// dynamic_array_implementation::~dynamic_array_implementation()
// {
// }


int main(void)
{
    // std::vector
}