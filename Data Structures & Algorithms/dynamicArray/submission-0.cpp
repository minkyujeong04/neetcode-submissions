class DynamicArray {
public:

    DynamicArray(int capacity) {
        arr = new int[capacity];
        cap = capacity;
        size = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == cap) {
            resize();
        }

        arr[size] = n;
        size++;
    }

    int popback() {
        int num = arr[size - 1];
        size--;
        return num;
    }

    void resize() {
        int* temp = new int[cap * 2];

        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        cap *= 2;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }

private:
    int* arr;
    int cap;
    int size;
};