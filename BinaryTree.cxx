Last login: Fri Feb 12 16:58:02 on ttys000
deepthi@Karthiks-MacBook-Pro ~ % pwd
/Users/deepthi
deepthi@Karthiks-MacBook-Pro ~ % cd Limklist
cd: no such file or directory: Limklist
deepthi@Karthiks-MacBook-Pro ~ % ls -l
total 0
drwx------@  4 deepthi  staff   128 Jan 14 20:27 Applications
drwxr-xr-x   9 deepthi  staff   288 Feb 12 15:20 Array
drwx------@  5 deepthi  staff   160 Feb 12 17:04 Desktop
drwx------+  3 deepthi  staff    96 Jan 14 20:03 Documents
drwx------+ 10 deepthi  staff   320 Feb 11 07:26 Downloads
drwxr-xr-x   2 deepthi  staff    64 Feb 11 17:48 GDB
drwx------@ 65 deepthi  staff  2080 Jan 16 10:39 Library
drwxr-xr-x   5 deepthi  staff   160 Feb 12 16:01 Linklist
drwx------   4 deepthi  staff   128 Jan 15 10:25 Movies
drwx------+  3 deepthi  staff    96 Jan 14 20:03 Music
drwx------+  4 deepthi  staff   128 Jan 15 10:30 Pictures
drwxr-xr-x+  4 deepthi  staff   128 Jan 14 20:03 Public
deepthi@Karthiks-MacBook-Pro ~ % cd Linklist
deepthi@Karthiks-MacBook-Pro Linklist % ls -l
total 112
-rw-r--r--  1 deepthi  staff    544 Feb 12 16:01 Linklist.cxx
-rwxr-xr-x  1 deepthi  staff  50424 Feb 11 17:40 list
drwxr-xr-x  3 deepthi  staff     96 Feb 11 17:40 list.dSYM
deepthi@Karthiks-MacBook-Pro Linklist % vi Linklist.cxx















































deepthi@Karthiks-MacBook-Pro Linklist % cd ../
deepthi@Karthiks-MacBook-Pro ~ % mkdir Pattern
deepthi@Karthiks-MacBook-Pro ~ % cd Pattern
deepthi@Karthiks-MacBook-Pro Pattern % vi StrategyP.cxx
deepthi@Karthiks-MacBook-Pro Pattern % >....                                                                                                                                                                                                  
#include<cstdio>
using namespace std;
class IFlyBehavior
{
public:
    virtual void fly() = 0;
};
class IQuackBehavior
{
public:
    virtual void quack() = 0;
};
class Duck
{
public:
Duck(){}
~Duck(){}
public:
    IFlyBehavior *flybehavior;
    IQuackBehavior *quackbehavior;

    virtual void display();
    void performFly()
    {
        flybehavior->fly();
    }
    void performQuack()
    {
        quackbehavior->quack();
    }
    void swim()
    {
        cout << "All ducks float, even decoys!" << endl;
    }
};
class FlyWithWings: public IFlyBehavior
{
public:
void fly()
{
    cout << "I'm flying" << endl;
}
};
class Quack: public IQuackBehavior
{
public:
    void quack()
    {
        cout << "Quack" << endl;
    }
};

class MallardDuck:public Duck
{
public:
    MallardDuck(){
        quackbehavior = new Quack();
        flybehavior = new FlyWithWings();
    }
    void display()
    {
        cout << "I am real Mallard duck" << endl;
    }
};

int main()
{
    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    return 0;
}
:wq!
zsh: parse error near `\n'
deepthi@Karthiks-MacBook-Pro Pattern % ls -l
total 8
-rw-r--r--  1 deepthi  staff  1171 Feb 17 16:48 StrategyP.cxx
deepthi@Karthiks-MacBook-Pro Pattern % g++ StrategyP.cxx -o sp         
Undefined symbols for architecture x86_64:
  "typeinfo for Duck", referenced from:
      typeinfo for MallardDuck in StrategyP-e07c49.o
  "vtable for Duck", referenced from:
      Duck::Duck() in StrategyP-e07c49.o
  NOTE: a missing vtable usually means the first non-inline virtual member function has no definition.
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
deepthi@Karthiks-MacBook-Pro Pattern % ls
StrategyP.cxx
deepthi@Karthiks-MacBook-Pro Pattern % ls -l
total 8
-rw-r--r--  1 deepthi  staff  1171 Feb 17 16:48 StrategyP.cxx
deepthi@Karthiks-MacBook-Pro Pattern % vi Readme.md
deepthi@Karthiks-MacBook-Pro Pattern % git init
Initialized empty Git repository in /Users/deepthi/Pattern/.git/
deepthi@Karthiks-MacBook-Pro Pattern % git add Readme.md
deepthi@Karthiks-MacBook-Pro Pattern % git commit -m "first commit"
[master (root-commit) 2a4646c] first commit
 Committer: Deepthi <deepthi@Karthiks-MacBook-Pro.local>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 1 insertion(+)
 create mode 100644 Readme.md
deepthi@Karthiks-MacBook-Pro Pattern % git branch -M main
deepthi@Karthiks-MacBook-Pro Pattern % git remote add origin https://github.com/DeepthiUma/DESIGN-PATTERN.git
deepthi@Karthiks-MacBook-Pro Pattern % git push -u origin main
Username for 'https://github.com': k.deepthiuma
Password for 'https://k.deepthiuma@github.com': 
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/DeepthiUma/DESIGN-PATTERN.git/'
deepthi@Karthiks-MacBook-Pro Pattern % ls
Readme.md	StrategyP.cxx
deepthi@Karthiks-MacBook-Pro Pattern % cd ../
deepthi@Karthiks-MacBook-Pro ~ % ls -
ls: -: No such file or directory
deepthi@Karthiks-MacBook-Pro ~ % ls
Applications	Array		Desktop		Documents	Downloads	GDB		Library		Linklist	Movies		Music		Pattern		Pictures	Public
deepthi@Karthiks-MacBook-Pro ~ % cd Linklist
deepthi@Karthiks-MacBook-Pro Linklist % vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1isBinarySearchTree: 1
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % rm -rf bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 0
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 
Traversal - InOrder: 1 4 6 7 8 9 
Traversal - PostOrder: 1 6 4 8 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 0
deepthi@Karthiks-MacBook-Pro Linklist % r rm
rm -rf bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:180:16: error: use of undeclared identifier 'null'
    if(root == null) return -1;
               ^
2 warnings and 1 error generated.
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:184:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
3 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 0
isBinarySearchTree: 0
KthDistance: 1
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:184:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
3 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 0
isBinarySearchTree: 0
KthDistance: 1
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:225:29: error: invalid operands to binary expression ('basic_ostream<char, std::__1::char_traits<char> >' and 'void')
    cout << "KthDistance: " << tree->KthDistance(3) << endl;
    ~~~~~~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~~~~~~~~
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:195:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'std::__1::basic_ostream<char> &(*)(std::__1::basic_ostream<char> &)'
      for 1st argument
    basic_ostream& operator<<(basic_ostream& (*__pf)(basic_ostream&))
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:199:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'basic_ios<std::__1::basic_ostream<char, std::__1::char_traits<char>
      >::char_type, std::__1::basic_ostream<char, std::__1::char_traits<char> >::traits_type> &(*)(basic_ios<std::__1::basic_ostream<char, std::__1::char_traits<char> >::char_type, std::__1::basic_ostream<char, std::__1::char_traits<char>
      >::traits_type> &)' (aka 'basic_ios<char, std::__1::char_traits<char> > &(*)(basic_ios<char, std::__1::char_traits<char> > &)') for 1st argument
    basic_ostream& operator<<(basic_ios<char_type, traits_type>&
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:204:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'std::__1::ios_base &(*)(std::__1::ios_base &)' for 1st argument
    basic_ostream& operator<<(ios_base& (*__pf)(ios_base&))
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:207:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'bool' for 1st argument
    basic_ostream& operator<<(bool __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:208:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'short' for 1st argument
    basic_ostream& operator<<(short __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:209:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'unsigned short' for 1st argument
    basic_ostream& operator<<(unsigned short __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:210:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'int' for 1st argument
    basic_ostream& operator<<(int __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:211:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'unsigned int' for 1st argument
    basic_ostream& operator<<(unsigned int __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:212:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'long' for 1st argument
    basic_ostream& operator<<(long __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:213:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'unsigned long' for 1st argument
    basic_ostream& operator<<(unsigned long __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:214:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'long long' for 1st argument
    basic_ostream& operator<<(long long __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:215:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'unsigned long long' for 1st argument
    basic_ostream& operator<<(unsigned long long __n);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:216:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'float' for 1st argument
    basic_ostream& operator<<(float __f);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:217:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'double' for 1st argument
    basic_ostream& operator<<(double __f);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:218:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'long double' for 1st argument
    basic_ostream& operator<<(long double __f);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:219:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'const void *' for 1st argument
    basic_ostream& operator<<(const void* __p);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:220:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'basic_streambuf<std::__1::basic_ostream<char,
      std::__1::char_traits<char> >::char_type, std::__1::basic_ostream<char, std::__1::char_traits<char> >::traits_type> *' (aka 'basic_streambuf<char, std::__1::char_traits<char> > *') for 1st argument
    basic_ostream& operator<<(basic_streambuf<char_type, traits_type>* __sb);
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:223:20: note: candidate function not viable: cannot convert argument of incomplete type 'void' to 'std::__1::nullptr_t' for 1st argument
    basic_ostream& operator<<(nullptr_t)
                   ^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:760:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'char' for 2nd argument
operator<<(basic_ostream<_CharT, _Traits>& __os, char __cn)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:793:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'char' for 2nd argument
operator<<(basic_ostream<char, _Traits>& __os, char __c)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:800:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'signed char' for 2nd argument
operator<<(basic_ostream<char, _Traits>& __os, signed char __c)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:807:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'unsigned char' for 2nd argument
operator<<(basic_ostream<char, _Traits>& __os, unsigned char __c)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:821:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'const char *' for 2nd argument
operator<<(basic_ostream<_CharT, _Traits>& __os, const char* __strn)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:867:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'const char *' for 2nd argument
operator<<(basic_ostream<char, _Traits>& __os, const char* __str)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:874:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'const signed char *' for 2nd argument
operator<<(basic_ostream<char, _Traits>& __os, const signed char* __str)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:882:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'const unsigned char *' for 2nd argument
operator<<(basic_ostream<char, _Traits>& __os, const unsigned char* __str)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1066:1: note: candidate function template not viable: cannot convert argument of incomplete type 'void' to 'const std::__1::error_code' for 2nd argument
operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __ec)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:753:1: note: candidate template ignored: deduced conflicting types for parameter '_CharT' ('char' vs. 'void')
operator<<(basic_ostream<_CharT, _Traits>& __os, _CharT __c)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:814:1: note: candidate template ignored: could not match 'const _CharT *' against 'void'
operator<<(basic_ostream<_CharT, _Traits>& __os, const _CharT* __str)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1049:1: note: candidate template ignored: could not match 'basic_string<type-parameter-0-0, type-parameter-0-1, type-parameter-0-2>' against 'void'
operator<<(basic_ostream<_CharT, _Traits>& __os,
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1057:1: note: candidate template ignored: could not match 'basic_string_view<type-parameter-0-0, type-parameter-0-1>' against 'void'
operator<<(basic_ostream<_CharT, _Traits>& __os,
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1074:1: note: candidate template ignored: could not match 'shared_ptr<type-parameter-0-2>' against 'void'
operator<<(basic_ostream<_CharT, _Traits>& __os, shared_ptr<_Yp> const& __p)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1086:1: note: candidate template ignored: could not match 'unique_ptr<type-parameter-0-2, type-parameter-0-3>' against 'void'
operator<<(basic_ostream<_CharT, _Traits>& __os, unique_ptr<_Yp, _Dp> const& __p)
^
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1093:1: note: candidate template ignored: could not match 'bitset<_Size>' against 'void'
operator<<(basic_ostream<_CharT, _Traits>& __os, const bitset<_Size>& __x)
^
2 warnings and 1 error generated.
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:226:23: error: expected ';' after expression
         tree->KthDistance(3)
                             ^
                             ;
2 warnings and 1 error generated.
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 0
isBinarySearchTree: 0
KthDistance: 

deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 0
isBinarySearchTree: 0
KthDistance: 

deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 0
isBinarySearchTree: 0
KthDistance: 

deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 0
KthDistance: 

deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 0
KthDistance: 
7
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 0
KthDistance: 
44
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 0
KthDistance: 
44
deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 1
KthDistance: 
4
9

deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx
deepthi@Karthiks-MacBook-Pro Linklist % r g
g++ bst.cxx -o bst
bst.cxx:102:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
bst.cxx:149:1: warning: non-void function does not return a value in all control paths [-Wreturn-type]
}
^
2 warnings generated.
deepthi@Karthiks-MacBook-Pro Linklist % ./bst
FIND: 1
Traversal - PreOrder: 7 4 1 6 9 8 10 
Traversal - InOrder: 1 4 6 7 8 9 10 
Traversal - PostOrder: 1 6 4 8 10 9 7 
Min: 1
compare two tree: 1
isBinarySearchTree: 1
isBinarySearchTree: 1
KthDistance: 
1
6
8
10

deepthi@Karthiks-MacBook-Pro Linklist % r v
vi bst.cxx


    return (isBinarySearchTree(root->leftChild,min,root->item-1) &&
            isBinarySearchTree(root->rightChild,root->item+1,max));

}
public:
bool isBinarySearchTree()
{
    return isBinarySearchTree(root, -1,100);
}
void swapRoot()
{
    Node *tmp = root->leftChild;
    root->rightChild = root->leftChild;
    root->leftChild = tmp;
}
private:
void KthDistance(Node* root,int K)
{
    if(root == NULL) return;
    if(K==0)
        {
                cout << root->item<<endl;
                return;
        }
    (KthDistance(root->leftChild,K-1));
    (KthDistance(root->rightChild,K-1));
}
public:
void  KthDistance(int K)
{
    KthDistance(root,K);
}
};
int main()
{
    BinaryTree *tree = new BinaryTree();
    tree->insert(7);
    tree->insert(4);
    tree->insert(9);
    tree->insert(1);
    tree->insert(6);
    tree->insert(8);
    tree->insert(10);
    cout << "FIND: " << tree->find(9) << endl;
    cout << "Traversal - PreOrder: ";
    tree->traversePreOrder();
    cout << endl;
    cout << "Traversal - InOrder: ";
    tree->traverseInOrder();
    cout << endl;
    cout << "Traversal - PostOrder: " ;
    tree->traversePostOrder();
    cout << endl;
    cout << "Min: " << tree->minValueInTree();
    BinaryTree *tree2 = new BinaryTree();
    tree2->insert(7);
    tree2->insert(4);
    tree2->insert(9);
    tree2->insert(1);
    tree2->insert(6);
    tree2->insert(8);
    tree2->insert(10);
    cout << endl;
    cout << "compare two tree: " << tree->equals(tree2) << endl;
    cout << "isBinarySearchTree: " << tree->isBinarySearchTree() << endl;
   // tree->swapRoot();
    cout << "isBinarySearchTree: " << tree->isBinarySearchTree() << endl;
    cout << "KthDistance: " << endl;
         tree->KthDistance(2);
    cout << endl;
    return 0;
}

