int __thiscall sub_1027A090(_DWORD *this, int a2, char a3)
{
  int result; // eax

  result = a2;
  if ( a2 >= 0 && a2 < this[56] )
  {
    result = 9 * a2;
    *(_BYTE *)(this[53] + 36 * a2 + 4) = a3;
  }
  return result;
}
