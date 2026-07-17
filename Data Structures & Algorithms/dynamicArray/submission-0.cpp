class DynamicArray {
private:
    int* array;
    int ptr;
    int capacity;
public:
    DynamicArray(int capacity) {
        array = new int[capacity];
        this->capacity = capacity;
        ptr = 0;
    }

    int get(int i) {
        return array[i];
    }

    void set(int i, int n) {
        array[i] = n;
    }

    void pushback(int n) {
        if (ptr == capacity)
            resize();
        array[ptr++] = n;
    }

    int popback() {
        return array[--ptr];
    }

    void resize() {
        capacity *= 2;
        int *temp = new int[capacity];
        for(int i = 0; i < ptr; i++)
            temp[i] = array[i];
        swap(temp, array);
        delete []temp;
    }

    int getSize() {
        return ptr;
    }

    int getCapacity() {
        return capacity;
    }
};
