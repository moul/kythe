// We index default values for record members.
//- @f defines/binding FnF
//- FnF callableas FnFC
int f() { return 0; }
class C {
  //- FnFCCall=@"f()" ref/call FnFC
  //- FnFCCall childof CtorC
  //- CtorC.node/kind function
  int i = f();
};
// Note that if C's default ctor is never synthesized, we will never see any
// function ref/calls from its default initializers.
C c;
