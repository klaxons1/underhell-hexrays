int __thiscall sub_10085BB0(_DWORD *this, unsigned __int16 a2, int a3)
{
  int result; // eax

  result = this[9] + 168 * a2;
  if ( (*(_BYTE *)(result + 8) & 1) != 0 )
    *(_DWORD *)(result + 160) = a3;
  return result;
}
