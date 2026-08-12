int *__thiscall sub_1024C720(int *this, int (__thiscall ***a2)(_DWORD), char *Source, int a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  int v8; // eax

  sub_102438E0(this, a2, Source, a4);
  *this = (int)&vgui::EditablePanel::`vftable';
  if ( !byte_1047EB80 )
  {
    byte_1047EB80 = 1;
    v5 = sub_10242540("EditablePanel");
    v5[7] = (unsigned int)sub_10071340;
    v5[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047EB81 )
  {
    byte_1047EB81 = 1;
    v6 = sub_102484C0((int)"EditablePanel");
    *(_DWORD *)(v6 + 24) = sub_10071340;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047EB82 )
  {
    byte_1047EB82 = 1;
    v7 = sub_10242580("EditablePanel");
    v7[17] = (unsigned int)sub_10071340;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_1024C520((char *)this + 207);
  sub_1024C570(this + 52);
  if ( !byte_1047EB85 )
  {
    byte_1047EB85 = 1;
    sub_1024C4A0((int)"FindDefaultButton", (int)sub_1024C280, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10285890(this);
  if ( sub_100DDA40(216) )
    v8 = sub_102815E0(this, this);
  else
    v8 = 0;
  this[53] = v8;
  this[61] = 0;
  this[62] = 0;
  this[60] = 0;
  sub_10241450(this, v8);
  return this;
}
