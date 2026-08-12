int __thiscall sub_10121D00(_BYTE *this, int a2, int a3, int a4)
{
  int result; // eax

  this[16] &= 0xF8u;
  *(_DWORD *)this = a2;
  result = a4;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = 0;
  return result;
}
