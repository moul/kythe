// Constructors are indexed.
//- @f defines/binding FnF
//- FnF callableas CFnF
void f() { }
//- @C defines/binding ClassC
class C {
 public:
  //- @C defines/binding CtorC
  //- CtorC childof ClassC
  //- CtorC.node/kind function
  //- CtorC.subkind constructor
  //- Call ref/call CFnF
  //- Call childof CtorC
  //- CtorC callableas CtorCC
  //- CtorC named vname("C:C#n",_,_,_,_)
  C() { f(); }
  //- @C defines/binding CtorC2
  //- CtorC2 childof ClassC
  //- CtorC2 callableas CtorC2C
  //- CtorC2 named vname("C:C#n",_,_,_,_)
  C(int) { }
};
//- @g defines/binding FnG
void g() {
  //- CallC ref/call CtorCC
  //- CallC.loc/start @^"c"
  //- CallC.loc/end @^"c"
  C c;
  //- @"C(42)" ref/call CtorC2C
  C(42);
}
