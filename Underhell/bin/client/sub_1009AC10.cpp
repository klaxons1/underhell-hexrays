int __thiscall sub_1009AC10(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  *this = a2;
  this[1] = a3;
  result = 0;
  this[2] = 0;
  this[3] = a4;
  *((_WORD *)this + 8) = 0;
  return result;
}
