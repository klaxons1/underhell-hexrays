int __thiscall sub_10276CA0(int this, int (__thiscall ***a2)(_DWORD), char *Source, int a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi

  sub_10256110(this, a2, Source);
  *(_DWORD *)this = &vgui::TreeNodeText::`vftable';
  if ( !byte_1048135F )
  {
    byte_1048135F = 1;
    v5 = sub_10242540("TreeNodeText");
    v5[7] = (unsigned int)sub_102731A0;
    v5[6] = (unsigned int)sub_10242540("TextEntry");
  }
  if ( !byte_10481360 )
  {
    byte_10481360 = 1;
    v6 = sub_102484C0((int)"TreeNodeText");
    *(_DWORD *)(v6 + 24) = sub_102731A0;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"TextEntry");
  }
  if ( !byte_10481361 )
  {
    byte_10481361 = 1;
    v7 = sub_10242580("TreeNodeText");
    v7[17] = (unsigned int)sub_102731A0;
    v7[6] = (unsigned int)sub_10242580("TextEntry");
  }
  if ( !byte_10481379 )
  {
    byte_10481379 = 1;
    sub_102762B0((int)"TextChanged", (int)sub_1025CB70, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_1022D3E0((_DWORD *)(this + 952));
  *(_DWORD *)(this + 976) = a4;
  *(_BYTE *)(this + 948) = 0;
  *(_BYTE *)(this + 968) = 0;
  sub_10238E30((_BYTE **)this, 0);
  sub_10238EC0((_DWORD *)this, 0, 0.0);
  sub_10241380((_DWORD *)this, (int (***)(void))this);
  *(_BYTE *)(this + 969) = 0;
  *(_BYTE *)(this + 970) = 0;
  *(_DWORD *)(this + 972) = 0;
  sub_10239AC0((_WORD *)this, 1);
  return this;
}
