int __thiscall sub_10188270(int this)
{
  int v2; // ecx

  v2 = *(_DWORD *)(this + 6312);
  *(_DWORD *)this = &CMapOverview::`vftable';
  *(_DWORD *)(this + 44) = &CMapOverview::`vftable';
  *(_DWORD *)(this + 248) = &CMapOverview::`vftable';
  if ( v2 )
    sub_1022AF00(v2);
  dword_10445528 = 0;
  sub_1011A810((int *)(this + 5764));
  sub_10009F80((_DWORD *)(this + 5728));
  sub_10009F20((_DWORD *)(this + 5728));
  sub_10240430(this + 44);
  return sub_100B5550((_BYTE *)this);
}
