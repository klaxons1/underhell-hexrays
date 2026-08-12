int __thiscall sub_101B38C0(int this, int a2, int *a3)
{
  int result; // eax
  double v5; // st7

  LOBYTE(result) = sub_10072D40((_DWORD *)this, a2, a3);
  *(_DWORD *)(this + 752) = 0;
  *(_DWORD *)(this + 260) = 0;
  v5 = *((float *)off_103DC81C + 3);
  dword_1044EEA8 = this;
  *(float *)(this + 268) = v5 + 1.0;
  return result;
}
