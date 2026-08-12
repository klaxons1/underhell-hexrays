__int16 __thiscall sub_1042EE90(int this, unsigned __int16 *a2)
{
  unsigned __int16 v3; // bx
  int v4; // esi

  v3 = *(_WORD *)(this + 16);
  if ( v3 == 0xFFFF )
    return -1;
  do
  {
    v4 = 12 * v3;
    if ( sub_1042E9E0(this, a2, (unsigned __int16 *)(*(_DWORD *)(this + 4) + v4 + 8)) )
    {
      if ( (dword_106FF8E0 & 1) == 0 )
      {
        dword_106FF8E0 |= 1u;
        dword_106FF8D8 = -1;
        dword_106FF8DC = 0x1FFFF;
      }
      v3 = *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v3);
    }
    else
    {
      if ( !sub_1042E9E0(this, (unsigned __int16 *)(*(_DWORD *)(this + 4) + v4 + 8), a2) )
        return v3;
      if ( (dword_106FF8E0 & 1) == 0 )
      {
        dword_106FF8E0 |= 1u;
        dword_106FF8D8 = -1;
        dword_106FF8DC = 0x1FFFF;
      }
      v3 = *(_WORD *)(v4 + *(_DWORD *)(this + 4) + 2);
    }
  }
  while ( v3 != 0xFFFF );
  return v3;
}
