int __thiscall sub_10286B40(int this, int (__thiscall ***a2)(_DWORD), char *Source, char a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::ScrollBarSlider::`vftable';
  if ( !byte_10481AB4 )
  {
    byte_10481AB4 = 1;
    v5 = sub_10242540("ScrollBarSlider");
    v5[7] = (unsigned int)sub_102861F0;
    v5[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10481AB5 )
  {
    byte_10481AB5 = 1;
    v6 = sub_102484C0((int)"ScrollBarSlider");
    *(_DWORD *)(v6 + 24) = sub_102861F0;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10481AB6 )
  {
    byte_10481AB6 = 1;
    v7 = sub_10242580("ScrollBarSlider");
    v7[17] = (unsigned int)sub_102861F0;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  *(_BYTE *)(this + 207) = a4;
  *(_BYTE *)(this + 208) = 0;
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 240) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  sub_102862D0((_DWORD *)this);
  sub_10238E80((_DWORD *)this, 1);
  return this;
}
