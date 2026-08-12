char __thiscall sub_10095150(_BYTE *this, int a2)
{
  char v3; // bl
  int v4; // esi

  v3 = this[16];
  if ( v3 == -1 )
    return -1;
  do
  {
    v4 = 12 * v3;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, *((_DWORD *)this + 1) + v4 + 4) )
    {
      if ( (dword_10693990 & 1) == 0 )
      {
        dword_10693990 |= 1u;
        dword_1069398C = 0x1FFFFFF;
      }
      v3 = *(_BYTE *)(*((_DWORD *)this + 1) + 12 * v3);
    }
    else
    {
      if ( !(*(unsigned __int8 (__cdecl **)(int, int))this)(*((_DWORD *)this + 1) + v4 + 4, a2) )
        return v3;
      if ( (dword_10693990 & 1) == 0 )
      {
        dword_10693990 |= 1u;
        dword_1069398C = 0x1FFFFFF;
      }
      v3 = *(_BYTE *)(v4 + *((_DWORD *)this + 1) + 1);
    }
  }
  while ( v3 != -1 );
  return v3;
}
