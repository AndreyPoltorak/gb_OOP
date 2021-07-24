#include "ArrayInt.h"

void ArrayInt::deleteBefore( int index)
{
    assert(index >= 0 && index < m_length);

    int* data = new int[m_length-1];
    int k = sizeof(data);
    
    for (int before = 0; before < index; ++before)
        data[before] = m_data[before];

    for (int after = index; after < m_length-1; ++after)
        data[after] = m_data[after+1];

    delete[] m_data;
    m_data = data;
    --m_length;

}

void ArrayInt::sortÀscending ()
{
    if (m_length > 1)
    {
        int tmp;
        for (int i = 0; i < m_length-1; i++)
        {
            for (int j = 0; j < m_length - i - 1; j++)
            {
                if (m_data[j] > m_data[j + 1])
                {
                    tmp = m_data[j];
                    m_data[j] = m_data[j + 1];
                    m_data[j + 1] = tmp;
                }
            }
        }
    }
}

void ArrayInt::sortDescending()
{
    if (m_length > 1)
    {
        int tmp;
        for (int i = 0; i < m_length - 1; i++)
        {
            for (int j = 0; j < m_length - i - 1; j++)
            {
                if (m_data[j] < m_data[j + 1])
                {
                    tmp = m_data[j];
                    m_data[j] = m_data[j + 1];
                    m_data[j + 1] = tmp;
                }
            }
        }
    }

}

void ArrayInt::print() const
{
    if (m_length > 0)
    {
        for (int i = 0; i < m_length-1; i++)
        {
            std::cout << m_data[i] << ",";
        }
        std::cout << m_data[m_length - 1] << std::endl;
    }
    else
    {
        std::cout << "Empty" << std::endl;
    }
   

}
