int __thiscall sub_1003D350(int this)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int result; // eax

  *(_DWORD *)this = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 4) = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 8) = &C_BaseEntity::`vftable';
  *(_DWORD *)(this + 12) = &C_BaseEntity::`vftable';
  sub_1003B440((_DWORD *)this);
  sub_10076440(*(_DWORD *)(this + 1116));
  sub_10034930(*(_DWORD *)(this + 152));
  v2 = *(_WORD *)(this + 1172);
  if ( v2 != 0xFFFF )
  {
    v3 = *(unsigned __int16 *)(this + 1172);
    sub_1003A300(&dword_103D8A7C, v2);
    *(_WORD *)(dword_103D8A7C + 8 * v3 + 6) = word_103D8A8C;
    word_103D8A8C = v3;
    *(_WORD *)(this + 1172) = -1;
  }
  if ( *(_WORD *)(this + 1174) != 0xFFFF )
  {
    v4 = *(unsigned __int16 *)(this + 1174);
    sub_1003A300(&dword_103D8A98, *(_WORD *)(this + 1174));
    *(_WORD *)(dword_103D8A98 + 8 * v4 + 6) = word_103D8AA8;
    word_103D8AA8 = v4;
    *(_WORD *)(this + 1174) = -1;
  }
  *(_DWORD *)(this + 616) = &CInterpolatedVarArrayBase<QAngle,0>::`vftable';
  *(_DWORD *)(this + 630) = 0;
  sub_10034930(*(_DWORD *)(this + 648));
  sub_10034930(*(_DWORD *)(this + 636));
  v5 = *(_DWORD *)(this + 624);
  if ( v5 )
    sub_10034930(v5 - 4);
  *(_DWORD *)(this + 624) = 0;
  *(_DWORD *)(this + 616) = &IInterpolatedVar::`vftable';
  *(_DWORD *)(this + 560) = &CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(_DWORD *)(this + 574) = 0;
  sub_10034930(*(_DWORD *)(this + 592));
  sub_10034930(*(_DWORD *)(this + 580));
  v6 = *(_DWORD *)(this + 568);
  if ( v6 )
    sub_10034930(v6 - 4);
  *(_DWORD *)(this + 568) = 0;
  *(_DWORD *)(this + 560) = &IInterpolatedVar::`vftable';
  sub_100EA8F0(this + 444);
  sub_1008E4B0(this + 352);
  sub_1011A810(this + 196);
  result = sub_1011A810(this + 20);
  *(_DWORD *)this = &IHandleEntity::`vftable';
  return result;
}
