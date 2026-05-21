class DynamicArray {
   private:
    int index;
    int capacity;
    std::vector<int> array;

   public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->index = 0;
        array = std::vector<int>(capacity);
    }

    int get(int i) { return array[i]; }

    void set(int i, int n) { array[i] = n; }

    void pushback(int n) {
        if (index >= capacity) {
            this->resize();
        }

        array[index] = n;
        index++;
    }

    int popback() {
        index--;
        return array[index];
    }

    void resize() {
        auto newCapacity = capacity * 2;
        array.resize(newCapacity);

        capacity = newCapacity;
    }

    int getSize() { return this->index; }

    int getCapacity() { return this->capacity; }
};
