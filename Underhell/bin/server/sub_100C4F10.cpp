int __thiscall sub_100C4F10(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v4; // ecx

  result = a2;
  if ( a2 >= 0 && a2 < this[283] )
  {
    v4 = this[280];
    result = 76 * a2;
    if ( (*(_BYTE *)(76 * a2 + v4) & 1) != 0 )
      *(_BYTE *)(result + v4 + 5) = a3;
  }
  return result;
}
