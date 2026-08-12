int __thiscall sub_10143D90(int this, unsigned __int8 **a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned __int16 v5; // di
  int result; // eax
  int v7; // esi

  v5 = *(_WORD *)(this + 16);
  result = 0xFFFF;
  *a3 = -1;
  for ( *a4 = 0; v5 != 0xFFFF; result = 0xFFFF )
  {
    *a3 = v5;
    v7 = 12 * v5;
    if ( sub_101421F0(*a2, *(unsigned __int8 **)(v7 + *(_DWORD *)(this + 4) + 8)) )
    {
      *a4 = 1;
      if ( (dword_1043C8C0 & 1) == 0 )
      {
        dword_1043C8C0 |= 1u;
        dword_1043C8B8 = -1;
        dword_1043C8BC = 0x1FFFF;
      }
      v5 = *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v5);
    }
    else
    {
      *a4 = 0;
      if ( (dword_1043C8C0 & 1) == 0 )
      {
        dword_1043C8C0 |= 1u;
        dword_1043C8B8 = -1;
        dword_1043C8BC = 0x1FFFF;
      }
      v5 = *(_WORD *)(v7 + *(_DWORD *)(this + 4) + 2);
    }
  }
  return result;
}
