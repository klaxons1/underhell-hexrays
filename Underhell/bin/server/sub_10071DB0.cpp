__int16 __thiscall sub_10071DB0(_WORD *this, int a2)
{
  unsigned __int16 v3; // bx
  int v4; // esi

  v3 = this[8];
  if ( v3 == 0xFFFF )
    return -1;
  do
  {
    v4 = 32 * v3;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, *((_DWORD *)this + 1) + v4 + 8) )
    {
      if ( (dword_10693058 & 1) == 0 )
      {
        dword_10693058 |= 1u;
        dword_10693050 = -1;
        dword_10693054 = 0x1FFFF;
      }
      v3 = *(_WORD *)(*((_DWORD *)this + 1) + 32 * v3);
    }
    else
    {
      if ( !(*(unsigned __int8 (__cdecl **)(int, int))this)(*((_DWORD *)this + 1) + v4 + 8, a2) )
        return v3;
      if ( (dword_10693058 & 1) == 0 )
      {
        dword_10693058 |= 1u;
        dword_10693050 = -1;
        dword_10693054 = 0x1FFFF;
      }
      v3 = *(_WORD *)(v4 + *((_DWORD *)this + 1) + 2);
    }
  }
  while ( v3 != 0xFFFF );
  return v3;
}
