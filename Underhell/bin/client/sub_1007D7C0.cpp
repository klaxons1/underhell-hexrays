int __thiscall sub_1007D7C0(_DWORD *this, unsigned __int16 a2, char a3)
{
  int result; // eax

  result = this[8] + 36 * a2;
  if ( a3 )
    *(_BYTE *)(result + 24) |= 0x20u;
  else
    *(_BYTE *)(result + 24) &= ~0x20u;
  return result;
}
