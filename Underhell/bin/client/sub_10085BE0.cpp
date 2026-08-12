int __thiscall sub_10085BE0(_DWORD *this, unsigned __int16 a2, char a3)
{
  int result; // eax
  __int16 v4; // cx

  result = this[9] + 168 * a2;
  v4 = *(_WORD *)(result + 8);
  if ( (v4 & 1) != 0 )
  {
    if ( a3 )
      *(_WORD *)(result + 8) = v4 | 0x100;
    else
      *(_WORD *)(result + 8) = v4 & 0xFEFF;
  }
  return result;
}
