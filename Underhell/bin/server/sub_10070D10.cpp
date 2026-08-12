int __thiscall sub_10070D10(_WORD *this, int a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned __int16 v5; // di
  int result; // eax
  int v7; // esi
  int v8; // eax

  v5 = this[8];
  result = 0xFFFF;
  *a3 = -1;
  *a4 = 0;
  while ( v5 != 0xFFFF )
  {
    *a3 = v5;
    v7 = 32 * v5;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, v7 + *((_DWORD *)this + 1) + 8) )
    {
      *a4 = 1;
      if ( (dword_10693058 & 1) == 0 )
      {
        dword_10693058 |= 1u;
        dword_10693050 = -1;
        dword_10693054 = 0x1FFFF;
      }
      v8 = *((_DWORD *)this + 1);
      v5 = *(_WORD *)(v8 + 32 * v5);
      result = v7 + v8;
    }
    else
    {
      *a4 = 0;
      if ( (dword_10693058 & 1) == 0 )
      {
        dword_10693058 |= 1u;
        dword_10693050 = -1;
        dword_10693054 = 0x1FFFF;
      }
      result = v7 + *((_DWORD *)this + 1);
      v5 = *(_WORD *)(result + 2);
    }
  }
  return result;
}
