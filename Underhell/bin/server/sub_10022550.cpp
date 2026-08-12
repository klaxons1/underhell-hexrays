int __thiscall sub_10022550(float *this, int a2)
{
  double v3; // st7
  int result; // eax

  sub_10206D20(this);
  v3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 868))(a2);
  result = dword_106B31C8;
  this[640] = v3 + *(float *)(dword_106B31C8 + 12);
  return result;
}
