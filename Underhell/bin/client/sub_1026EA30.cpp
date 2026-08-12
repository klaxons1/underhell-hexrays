_WORD *__thiscall sub_1026EA30(_WORD *this, int (__thiscall ***a2)(_DWORD), char *Source, const char *a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  char v8; // cl
  char v9; // al
  int v10; // ecx

  sub_1025C5C0((int)this, a2, Source, a4, 0, 0);
  *(_DWORD *)this = &vgui::MenuButton::`vftable';
  if ( !byte_1048058C )
  {
    byte_1048058C = 1;
    v5 = sub_10242540("MenuButton");
    v5[7] = (unsigned int)sub_1026E280;
    v5[6] = (unsigned int)sub_10242540("Button");
  }
  if ( !byte_10480598 )
  {
    byte_10480598 = 1;
    v6 = sub_102484C0((int)"MenuButton");
    *(_DWORD *)(v6 + 24) = sub_1026E280;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Button");
  }
  if ( !byte_10480599 )
  {
    byte_10480599 = 1;
    v7 = sub_10242580("MenuButton");
    v7[17] = (unsigned int)sub_1026E280;
    v7[6] = (unsigned int)sub_10242580("Button");
  }
  if ( !byte_104805A4 )
  {
    byte_104805A4 = 1;
    sub_1026E9B0((int)"MenuClose", (int)sub_1026E650, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_104805A5 )
  {
    byte_104805A5 = 1;
    sub_1026E9B0((int)"KillFocus", (int)sub_102821F0, 0, 0, 0, 1, 6, 0, 0, 0);
  }
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 97) = 0;
  v8 = this[192] & 1;
  v9 = this[192] & 0xFE;
  *((_DWORD *)this + 94) = 3;
  *((_DWORD *)this + 98) = -1;
  *((_DWORD *)this + 95) = 0;
  *((_BYTE *)this + 384) = v9;
  if ( v8 )
  {
    (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 856))(this);
    v10 = *((_DWORD *)this + 97);
    if ( v10 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 24))(v10, 1);
    *((_DWORD *)this + 97) = 0;
    *((_DWORD *)this + 98) = -1;
  }
  sub_1025B7D0(this, 0);
  sub_1025AD80(this, 1);
  return this;
}
