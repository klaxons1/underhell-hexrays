__int16 __thiscall sub_102304A0(int this, unsigned __int16 *a2)
{
  unsigned __int16 v3; // bx
  int v4; // esi

  v3 = *(_WORD *)(this + 16);
  if ( v3 == 0xFFFF )
    return -1;
  do
  {
    v4 = 12 * v3;
    if ( sub_1022FFF0(this, a2, (unsigned __int16 *)(*(_DWORD *)(this + 4) + v4 + 8)) )
    {
      if ( (dword_1047B81C & 1) == 0 )
      {
        dword_1047B81C |= 1u;
        dword_1047B814 = -1;
        dword_1047B818 = 0x1FFFF;
      }
      v3 = *(_WORD *)(*(_DWORD *)(this + 4) + 12 * v3);
    }
    else
    {
      if ( !sub_1022FFF0(this, (unsigned __int16 *)(*(_DWORD *)(this + 4) + v4 + 8), a2) )
        return v3;
      if ( (dword_1047B81C & 1) == 0 )
      {
        dword_1047B81C |= 1u;
        dword_1047B814 = -1;
        dword_1047B818 = 0x1FFFF;
      }
      v3 = *(_WORD *)(v4 + *(_DWORD *)(this + 4) + 2);
    }
  }
  while ( v3 != 0xFFFF );
  return v3;
}
