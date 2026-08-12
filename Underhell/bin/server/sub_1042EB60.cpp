int __thiscall sub_1042EB60(int this, unsigned __int16 *a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned __int16 v5; // di
  int result; // eax
  int v7; // esi
  int v8; // eax

  v5 = *(_WORD *)(this + 16);
  result = 0xFFFF;
  *a3 = -1;
  *a4 = 0;
  while ( v5 != 0xFFFF )
  {
    *a3 = v5;
    v7 = 12 * v5;
    if ( sub_1042E9E0(this, a2, (unsigned __int16 *)(v7 + *(_DWORD *)(this + 4) + 8)) )
    {
      *a4 = 1;
      if ( (dword_106FF8E0 & 1) == 0 )
      {
        dword_106FF8E0 |= 1u;
        dword_106FF8D8 = -1;
        dword_106FF8DC = 0x1FFFF;
      }
      v8 = *(_DWORD *)(this + 4);
      v5 = *(_WORD *)(v8 + 12 * v5);
      result = v7 + v8;
    }
    else
    {
      *a4 = 0;
      if ( (dword_106FF8E0 & 1) == 0 )
      {
        dword_106FF8E0 |= 1u;
        dword_106FF8D8 = -1;
        dword_106FF8DC = 0x1FFFF;
      }
      result = v7 + *(_DWORD *)(this + 4);
      v5 = *(_WORD *)(result + 2);
    }
  }
  return result;
}
