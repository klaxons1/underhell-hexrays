int __thiscall sub_10278D80(int this, int (__thiscall ***a2)(_DWORD), char *Source, const char *a4, const char *a5)
{
  unsigned int *v6; // edi
  int v7; // edi
  unsigned int *v8; // edi

  sub_1024B100((int *)this, a2, Source, a4);
  *(_DWORD *)this = &vgui::URLLabel::`vftable';
  if ( !byte_104817E8 )
  {
    byte_104817E8 = 1;
    v6 = sub_10242540("URLLabel");
    v6[7] = (unsigned int)sub_10278B20;
    v6[6] = (unsigned int)sub_10242540("Label");
  }
  if ( !byte_104817F4 )
  {
    byte_104817F4 = 1;
    v7 = sub_102484C0((int)"URLLabel");
    *(_DWORD *)(v7 + 24) = sub_10278B20;
    *(_DWORD *)(v7 + 20) = sub_102484C0((int)"Label");
  }
  if ( !byte_104817F5 )
  {
    byte_104817F5 = 1;
    v8 = sub_10242580("URLLabel");
    v8[17] = (unsigned int)sub_10278B20;
    v8[6] = (unsigned int)sub_10242580("Label");
  }
  *(_DWORD *)(this + 288) = 0;
  *(_BYTE *)(this + 296) = 0;
  *(_DWORD *)(this + 292) = 0;
  if ( a5 && strlen(a5) )
    sub_10278B30((int *)this, a5);
  return this;
}
