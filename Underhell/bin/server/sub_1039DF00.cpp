int __thiscall sub_1039DF00(_BYTE *this, int a2)
{
  int (*v2)(void); // edx

  v2 = *(int (**)(void))(*(_DWORD *)this + 408);
  this[3764] = 1;
  this[3836] = 0;
  return v2();
}
