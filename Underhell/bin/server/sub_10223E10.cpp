int __thiscall sub_10223E10(_BYTE *this, int a2)
{
  int (*v2)(void); // edx

  v2 = *(int (**)(void))(*(_DWORD *)this + 740);
  this[1457] = 1;
  return v2();
}
