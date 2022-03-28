#include <iostream>
#include <vector>
#include <algorithm>

void vector_to_array() {
    double arr[10] = { 0.0 };
    std::vector<double> vec(arr, arr + 10);
}

template<typename T, int Size>
struct arr
{
    T elem[Size];
};

void vec_double_arr() {
    int cam_num = 16;
    std::vector<arr<double, 4>> data(cam_num);
    data[0].elem[0] = 1;
}

void add_onevec_to_othervec() {
    //add one vector to other vector
    std::vector<int> v, v2, v3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);
    v3.clear();
    v3.swap(v);
    v3.insert(v3.end(), v2.begin(), v2.end());
}

void judge_vector_equal() {
    std::vector<int> v0, v1, v2;
    v0.push_back(0);
    v0.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v2.push_back(0);
    v2.push_back(0);
    bool is_ok = false;
    is_ok = std::is_permutation(v0.begin(), v0.begin() + v0.size(), v1.begin());
    is_ok = std::is_permutation(v0.begin(), v0.begin() + v0.size(), v2.begin());
}

int main()
{
    ////remove the element of the vector
    //std::vector<int> v;
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //v.push_back(4);
    //v.push_back(5);
    //int tmp = v[3];
    //v.erase(std::remove(v.begin(), v.end(), v[3]));
    //v.insert(v.begin(), tmp);

    ////find the element of vector
    //std::vector<int> v;
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //v.push_back(4);
    //v.push_back(5);
    //int count_num = count(v.begin(), v.end(), 6);//if is 0

    ////a vector copyto another vector
    //std::vector<int> v;
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //v.push_back(4);
    //v.push_back(5);
    //std::vector<int> v2;
    ////v2.assign(v.begin(), v.end());
    ////copy of the most fast
    //v.swap(v2);
    judge_vector_equal();
    add_onevec_to_othervec();
    vec_double_arr();
    vector_to_array();
}
