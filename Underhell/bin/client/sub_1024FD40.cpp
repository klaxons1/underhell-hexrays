int __thiscall sub_1024FD40(int this, int a2, char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_1026EA30(a2, Source, (int)Locale);
  *(_DWORD *)this = &vgui::FrameSystemButton::`vftable';
  if ( !byte_1047ED8B )
  {
    byte_1047ED8B = 1;
    v4 = sub_10242540("FrameSystemButton");
    v4[7] = (unsigned int)sub_1024D3A0;
    v4[6] = (unsigned int)sub_10242540("MenuButton");
  }
  if ( !byte_1047ED8C )
  {
    byte_1047ED8C = 1;
    v5 = sub_102484C0((int)"FrameSystemButton");
    *(_DWORD *)(v5 + 24) = sub_1024D3A0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"MenuButton");
  }
  if ( !byte_1047ED8D )
  {
    byte_1047ED8D = 1;
    v6 = sub_10242580("FrameSystemButton");
    v6[17] = (unsigned int)sub_1024D3A0;
    v6[6] = (unsigned int)sub_10242580("MenuButton");
  }
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)(this + 412) = 0;
  sub_1022D3E0((_DWORD *)(this + 420));
  sub_1022D3E0((_DWORD *)(this + 436));
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 404) = 0;
  *(_BYTE *)(this + 416) = 1;
  sub_1024D430((_DWORD *)this, 0);
  sub_1025AF70(108, 1);
  sub_10238E80((_DWORD *)this, 1);
  return this;
}
