int __thiscall sub_1025CF50(int this, int a2, char *Source, int a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  _DWORD *v8; // edi

  sub_1025D2A0(a2, Source, a4);
  *(_DWORD *)this = &vgui::CheckButton::`vftable';
  if ( !byte_1047FAB4 )
  {
    byte_1047FAB4 = 1;
    v5 = sub_10242540("CheckButton");
    v5[7] = (unsigned int)sub_1025C970;
    v5[6] = (unsigned int)sub_10242540("ToggleButton");
  }
  if ( !byte_1047FAC0 )
  {
    byte_1047FAC0 = 1;
    v6 = sub_102484C0((int)"CheckButton");
    *(_DWORD *)(v6 + 24) = sub_1025C970;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"ToggleButton");
  }
  if ( !byte_1047FAC1 )
  {
    byte_1047FAC1 = 1;
    v7 = sub_10242580("CheckButton");
    v7[17] = (unsigned int)sub_1025C970;
    v7[6] = (unsigned int)sub_10242580("ToggleButton");
  }
  sub_1025CF00((void *)(this + 375));
  *(_DWORD *)(this + 381) = 0;
  *(_DWORD *)(this + 385) = 0;
  *(_DWORD *)(this + 389) = 0;
  sub_10249A90((int *)this, 3);
  *(_BYTE *)(this + 380) = 1;
  v8 = (_DWORD *)sub_100DDA40(120);
  if ( v8 )
  {
    sub_1027D150("g");
    *v8 = &CheckImage::`vftable';
    v8[25] = 0;
    v8[26] = 0;
    v8[27] = 0;
    v8[28] = 0;
    v8[29] = this;
    sub_1027CE30(20, 13);
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(this + 376) = v8;
  sub_1024AA90((_DWORD *)this, 1);
  sub_1024AA00((_DWORD *)this, 0, *(_DWORD *)(this + 376), 6);
  *(_DWORD *)(this + 381) = -11487804;
  *(_DWORD *)(this + 385) = -8224126;
  *(_DWORD *)(this + 389) = -13154754;
  return this;
}
