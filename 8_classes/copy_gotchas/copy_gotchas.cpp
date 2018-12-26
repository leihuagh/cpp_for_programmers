/* https://www.youtube.com/watch?v=-_uSj6lrmZ0&list=PLRwVmtr-pp05LyV3bYHwrFacNSNjbUqS6&index=10 */

#include <iostream>
using std::cout;
using std::endl;

struct Calf
{
    int afoij;
};

struct Cow
{
    Cow()
    {
        calf = new Calf;
    }

    ~Cow()
    {
        delete calf;
    }

    int numSteaks;
    Calf* calf;
};




int main(int argc, char const *argv[])
{
    // Cow betsy;
    // { // introduce a new level of scope
    //     Cow george(betsy);
    // }

    /*
    When george goes out of scope, he deletes the shared 'calf' that both he and betsy point to.
    Then, when betsy goes out of scope she tries to delete the 'calf' again.  Error looks like this:

    copy_gotchas.out(3533,0x7fffb7bed380) malloc: *** error for object 0x7ff59f502600: pointer being freed was not allocated
    *** set a breakpoint in malloc_error_break to debug
    bash: line 1:  3533 Abort trap: 6           "/Users/ty/Udacity/cpp_for_programmers/8_classes/copy_gotchas/copy_gotchas.out"
    [Finished in 0.8s with exit code 134]
    [shell_cmd: g++ -std=c++14 "/Users/ty/Udacity/cpp_for_programmers/8_classes/copy_gotchas/copy_gotchas.cpp" -o "/Users/ty/Udacity/cpp_for_programmers/8_classes/copy_gotchas/copy_gotchas.out" && "/Users/ty/Udacity/cpp_for_programmers/8_classes/copy_gotchas/copy_gotchas.out"]
    [dir: /Users/ty/Udacity/cpp_for_programmers/8_classes/copy_gotchas]
    [path: /usr/local/bin:/Users/ty/anaconda3/bin:/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/share/dotnet:/Applications/Xamarin Workbooks.app/Contents/SharedSupport/path-bin]

    */

    cout << "leaving main" << endl;
    return 0;
}

/*

So, copy constructors work unless you have pointers
that point to memory out on the heap.

*/
