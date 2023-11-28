#include <iostream>
#include <cstring>
using namespace std;

class CWH {
protected:
    string title;
    float rating;

public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH {
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) {
        videoLength = vl;
    }
    void display() {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH {
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r) {
        words = wc;
    }
    void display() {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is " << words << " words" << endl;
    }
};

int main() {
    string title;
    float rating, vlen;
    int words;

    // for CWHVideo
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djvideo.display();
    // Now i'm gonna run the above method with pointer instead of directly

    // for CWHText
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djtext.display();
    // Now i'm gonna run the above method with pointer instead of directly

    // Creating 2 pointers
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    // Are calling their own bcoz we already declared display of Base class as virtual function

    return 0;
}

// ====================================== RULES FOR VIRTUAL FUNCTIONS ======================================
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used (Like here display in Base class is unused)
// 5. If a virtual function defined in base class, there is no necessity of redefining it in the derived class
//     Means that if display function isn't found in Derived class, then being virtual it will run the display
//     of the Base class