int *__thiscall sub_102722D0(int *this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10243490(this, a2, Source);
  *this = (int)&vgui::ScalableImagePanel::`vftable';
  if ( !byte_104812D0 )
  {
    byte_104812D0 = 1;
    v4 = sub_10242540("ScalableImagePanel");
    v4[7] = (unsigned int)sub_10271DA0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_104812D1 )
  {
    byte_104812D1 = 1;
    v5 = sub_102484C0((int)"ScalableImagePanel");
    *(_DWORD *)(v5 + 24) = sub_10271DA0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_104812D2 )
  {
    byte_104812D2 = 1;
    v6 = sub_10242580("ScalableImagePanel");
    v6[17] = (unsigned int)sub_10271DA0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  this[52] = 0;
  this[53] = 0;
  this[54] = 0;
  this[55] = 0;
  this[59] = 0;
  this[56] = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  return this;
}
