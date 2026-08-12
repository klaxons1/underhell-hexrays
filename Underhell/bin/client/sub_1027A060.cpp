int __thiscall sub_1027A060(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( a2 >= 0 && a2 < this[56] )
  {
    result = a3;
    *(_DWORD *)(*(_DWORD *)(this[53] + 36 * a2 + 8) + 292) = a3;
  }
  return result;
}
