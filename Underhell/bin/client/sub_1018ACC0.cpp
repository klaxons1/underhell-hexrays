int __thiscall sub_1018ACC0(char *this)
{
  int v1; // eax
  int (*v2)(void); // edx

  strcpy(this + 12, "This could be your Title.");
  strcpy(this + 267, "Just for 10 Euros a week!");
  v1 = *(_DWORD *)this;
  this[2315] = 0;
  v2 = *(int (**)(void))(v1 + 16);
  *((_DWORD *)this + 643) = 0;
  return v2();
}
