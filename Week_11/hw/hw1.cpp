#include <iostream>
using namespace std;

class Library{
    private:
        string _name;
        const static int _MAX_BOOKS = 10;
        int _page_counts[_MAX_BOOKS];
        int _current_books;
    public:
        Library();
        Library(string);
        Library(string,int[],int);
        string getName();
        int getCurrentBooks();
        void setName(string);
        int getPageCount(int);
        bool addPageCount(int);
        double getAveragePageCount();
};
Library::Library(){
    _name = "";
    _current_books = 0;
    for(int i = 0; i<_MAX_BOOKS; i++){
        _page_counts[i] = 0;
    }
}
Library::Library(string n){
    _name = n;
    _current_books = 0;
    for(int i = 0; i<_MAX_BOOKS; i++){
        _page_counts[i] = 0;
    }
}
Library::Library(string name, int page_counts[],int arr_size){
    _name = name;
    if(arr_size < _MAX_BOOKS){
        _current_books = arr_size;
    }else{
        _current_books = _MAX_BOOKS;
    }
    for (int i = 0; i < _current_books; i++) {
        _page_counts[i] = page_counts[i];
    }
}
string Library::getName(){
    return _name;
}
int Library::getCurrentBooks(){
    return _current_books;
}
void Library::setName(string newNAME){
    _name = newNAME;
}
int Library::getPageCount(int index){
    if (index < 0 || index >= _current_books) {
        return -1;  // Return -1 if index is out of bounds
    }
    return _page_counts[index];  // Return the page count if index is valid
}
bool Library::addPageCount(int new_page){
    if (_current_books < _MAX_BOOKS && new_page > 0) {
        _page_counts[_current_books++] = new_page;
        return true;
    }
    return false;
}
double Library::getAveragePageCount(){
    double sum = 0;
    for(int i = 0; i<_current_books; i++){
        sum += _page_counts[i];
    }
    sum = sum/_current_books;
    return sum;  
    if(sum == 0){
        return 0;
    }
}
string findLibraryWithLargestAveragePageCount(Library libraries[], const int ARR_SIZE) {
    double max_avg = libraries[0].getAveragePageCount();
    int index_of_max = 0;

    for (int i = 1; i < ARR_SIZE; i++) {
        double current_avg = libraries[i].getAveragePageCount();
        if (current_avg > max_avg) {
            max_avg = current_avg;
            index_of_max = i;
        }
    }

    return libraries[index_of_max].getName();
}
int main(){

    return 0;
}