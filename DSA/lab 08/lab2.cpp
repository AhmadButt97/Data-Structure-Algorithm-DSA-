#include <iostream>
using namespace std;
#include <math.h>
class BT
{
private:
    int size;
    int *avail;
    int *data;
    int noOfElements;
    void resize()
    {
        int newsize = size * 2;
        int *arr = new int[newsize];
        for (int i = 0; i < size; i++)
        {
            arr[i] = data[i];
        }
        for (int i = size; i < newsize; i++)
        {
            arr[i] = -1;
        }
        delete[] data;
        data = arr;

        int *arr1 = new int[newsize];
        for (int i = 0; i < size; i++)
        {
            arr1[i] = avail[i];
        }
        for (int i = size; i < newsize; i++)
        {
            arr1[i] = 0;
        }
        delete[] avail;
        avail = arr1;
        size = newsize;
    }

public:
    BT()
    {
        size = 8;
        data = new int[size];
        avail = new int[size];
        noOfElements = 0;
        for (int i = 0; i < size; i++)
        {
            avail[i] = 0;
        }
    }
    BT(int s)
    {
        size = s;
        data = new int[size];
        avail = new int[size];
        noOfElements = 0;
        for (int i = 0; i < size; i++)
        {
            avail[i] = 0;
        }
    }
    void insertElement(int element)
    {
        if (noOfElements >= size)
        {
            resize();
        }
        for (int i = 0; i < size; i++)
        {
            if (avail[i] == 0)
            {
                data[i] = element;
                avail[i] = 1;
                noOfElements++;
                return;
            }
        }
    }
    bool insertLeftChild(int parent, int child)
    {
        int parentIndex = -1;
        for (int i = 0; i < size; i++)
        {
            if (data[i] == parent && avail[i] == 1)
            {
                parentIndex = i;
                break;
            }
        }

        if (parentIndex == -1)
        {
            cout << "Parent does not exist" << endl;
            return false;
        }

        if ((2 * parentIndex + 1) >= size)
        {
            resize();
        }

        int leftIndex = 2 * parentIndex + 1;
        if (avail[leftIndex] == 1)
        {
            cout << "Left child already exists." << endl;
            return false;
        }

        data[leftIndex] = child;
        avail[leftIndex] = 1;
        noOfElements++;
        return true;
    }
    bool insertRightChild(int parent, int child)
    {
        int parentIndex = -1;
        for (int i = 0; i < size; i++)
        {
            if (data[i] == parent && avail[i] == 1)
            {
                parentIndex = i;
                break;
            }
        }

        if (parentIndex == -1)
        {
            cout << "Parent does not exist" << endl;
            return false;
        }

        if ((2 * parentIndex + 2) >= size)
        {
            resize();
        }

        int rightIndex = 2 * parentIndex + 2;
        if (avail[rightIndex] == 1)
        {
            cout << "Right child already exists." << endl;
            return false;
        }

        data[rightIndex] = child;
        avail[rightIndex] = 1;
        noOfElements++;
        return true;
    }
    bool deleteElement(int element)
    {
        int elementIndex = -1;
        for (int i = 0; i < size; i++)
        {
            if (data[i] == element && avail[i] == 1)
            {
                elementIndex = i;
                break;
            }
        }

        if (elementIndex == -1)
        {
            cout << "Element not found." << endl;
            return false;
        }

        for (int i = size; i > 0; i--)
        {
            if (avail[i] == 1)
            {
                int temp = data[elementIndex];
                data[elementIndex] = data[i];
                data[i] = temp;
                data[i] = -1;
                avail[i] = 0;
                break;
            }
        }
        return true;

        // data[elementIndex] = -1;
        // avail[elementIndex] = 0;
        // noOfElements--;
        // return true;
    }
    bool deleteLeftChild(int parent)
    {
        int parentIndex = -1;
        for (int i = 0; i < size; ++i)
        {
            if (data[i] == parent && avail[i] == 1)
            {
                parentIndex = i;
                break;
            }
        }

        if (parentIndex == -1 || (2 * parentIndex + 1) >= size)
        {
            cout << "Element can not be deleted" << endl;
            return false;
        }

        int leftIndex = 2 * parentIndex + 1;
        if (avail[leftIndex] == 0)
        {
            cout << "Left child does not exist." << endl;
            return false;
        }
        for (int i = size; i > 0; i--)
        {
            if (avail[i] == 1)
            {
                int temp = data[leftIndex];
                data[leftIndex] = data[i];
                data[i] = temp;
                data[i] = -1;
                avail[i] = 0;
                break;
            }
        }
        return true;
        // data[leftIndex] = -1;
        // avail[leftIndex] = 0;
        // noOfElements--;
        // return true;
    }
    bool deleteRightChild(int parent)
    {
        int parentIndex = -1;
        for (int i = 0; i < size; ++i)
        {
            if (data[i] == parent && avail[i] == 1)
            {
                parentIndex = i;
                break;
            }
        }

        if (parentIndex == -1 || (2 * parentIndex + 2) >= size)
        {
            cout << "Element can not be deleted" << endl;
            return false;
        }

        int rightIndex = 2 * parentIndex + 2;
        if (avail[rightIndex] == 0)
        {
            cout << "Right child does not exist." << std::endl;
            return false;
        }
        for (int i = size; i > 0; i--)
        {
            if (avail[i] == 1)
            {
                int temp = data[rightIndex];
                data[rightIndex] = data[i];
                data[i] = temp;
                data[i] = -1;
                avail[i] = 0;
                break;
            }
        }
        return true;
        // data[rightIndex] = -1;
        // avail[rightIndex] = 0;
        // noOfElements--;
        // return true;
    }
    bool search(int element)
    {
        for (int i = 0; i < size; ++i)
        {
            if (data[i] == element && avail[i] == 1)
            {
                return true;
            }
        }
        return false;
    }
    int totalElements()
    {
        return noOfElements;
    }
    void display()
    {
        cout << "The contents of binary tree are" << endl;
        int j = 0;
        int x = 0;
        for (int i = 0; i < size; i++)
        {
            if (avail[i] == 1)
            {
                cout << data[i] << " ";
            }
            else
            {
                cout << "_" << " ";
            }
            x++;
            if (x == pow(2, j))
            {
                cout << endl;
                j++;
                x = 0;
            }
        }
        cout << endl;
    }
    ~BT()
    {
        if (data != NULL)
        {
            delete[] data;
            data = NULL;
        }
        if (avail != NULL)
        {
            delete[] avail;
            avail = NULL;
        }
        cout << "Destructor is called";
    }
};
int main()
{
    BT *tree = new BT();

    tree->insertElement(00);
    tree->insertElement(10);
    tree->insertElement(20);
    tree->insertElement(30);
    tree->insertElement(40);
    tree->insertElement(50);
    tree->insertElement(60);
    tree->insertElement(70);
    tree->insertElement(80);
    tree->insertElement(90);
    tree->insertElement(100);
    tree->display();

    tree->deleteLeftChild(40);

    tree->display();

    tree->insertLeftChild(70, 110);
    tree->display();

    tree->insertLeftChild(100, 110);
    tree->display();

    tree->insertElement(200);
    tree->display();

    tree->deleteElement(50);
    tree->display();
    //     cout << "Tree after inserting elements: " << endl;
    //     cout << "Total elements: " << tree->totalElements() << endl;

    //     tree->insertLeftChild(10, 15);
    //     tree->insertRightChild(20, 25);

    //     cout << "Total elements: " << tree->totalElements() << endl;

    //     if (tree->search(15))
    //     {
    //         cout << "Element was found" << endl;
    //     }
    //     else
    //     {
    //         cout << "Element was not found" << endl;
    //     }

    //     if (tree->search(20))
    //     {
    //         cout << "Element was found" << endl;
    //     }
    //     else
    //     {
    //         cout << "Element was not found" << endl;
    //     }

    //     cout << tree->deleteLeftChild(10) << endl;
    //     cout << "Total elements: " << tree->totalElements() << endl;

    //     cout << tree->deleteElement(20) << endl;
    cout << "Total elements: " << tree->totalElements() << endl;

    return 0;
}