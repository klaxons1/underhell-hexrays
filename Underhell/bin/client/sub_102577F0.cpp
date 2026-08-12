int __thiscall sub_102577F0(_BYTE *this)
{
  int (*v1)(void); // edx

  v1 = *(int (**)(void))(*(_DWORD *)this + 16);
  this[388] = 1;
  return v1();
}
