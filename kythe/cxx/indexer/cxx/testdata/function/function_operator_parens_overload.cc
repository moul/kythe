// Checks that a struct with operator()s is recorded as multiple callables.
//- @S defines/binding StructS
struct S {
//- @"operator()" defines/binding FnCI
  void operator()(int A) { }
//- @"operator()" defines/binding FnCF
  void operator()(float F) { }
};
//- FnCI childof StructS
//- FnCI callableas CCI
//- StructS callableas CCI
//- FnCF childof StructS
//- FnCF callableas CCF
//- StructS callableas CCF
