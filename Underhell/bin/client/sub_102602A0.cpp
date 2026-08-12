int __thiscall sub_102602A0(int this, int (__thiscall ***a2)(_DWORD), char *Source, int a4, char a5)
{
  unsigned int *v6; // edi
  int v7; // edi
  unsigned int *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // ecx

  sub_10256110(this, a2, Source);
  *(_DWORD *)this = &vgui::ComboBox::`vftable';
  if ( !byte_1048037C )
  {
    byte_1048037C = 1;
    v6 = sub_10242540("ComboBox");
    v6[7] = (unsigned int)sub_1025EFD0;
    v6[6] = (unsigned int)sub_10242540("TextEntry");
  }
  if ( !byte_10480388 )
  {
    byte_10480388 = 1;
    v7 = sub_102484C0((int)"ComboBox");
    *(_DWORD *)(v7 + 24) = sub_1025EFD0;
    *(_DWORD *)(v7 + 20) = sub_102484C0((int)"TextEntry");
  }
  if ( !byte_10480389 )
  {
    byte_10480389 = 1;
    v8 = sub_10242580("ComboBox");
    v8[17] = (unsigned int)sub_1025EFD0;
    v8[6] = (unsigned int)sub_10242580("TextEntry");
  }
  sub_10260200((void *)(this + 947));
  if ( !byte_10480395 )
  {
    byte_10480395 = 1;
    sub_10260180((int)"MenuClose", (int)sub_1025FF70, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_10480396 )
  {
    byte_10480396 = 1;
    sub_10260180((int)"MenuItemSelected", (int)sub_1025FF80, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10260250((void *)(this + 950));
  sub_102512E0((_BYTE *)this, a5);
  sub_10251EB0((_BYTE *)this, 0);
  v9 = sub_100DDA40(392);
  if ( v9 )
    v10 = sub_1026D6B0(v9, this, 0);
  else
    v10 = 0;
  *(_DWORD *)(this + 952) = v10;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 172))(v10, this);
  v11 = sub_100DDA40(368);
  v12 = (_DWORD *)v11;
  if ( v11 )
  {
    sub_1025C5C0(v11, (int (__thiscall ***)(_DWORD))this, 0, "u", 0, 0);
    *v12 = &vgui::ComboBoxButton::`vftable';
    v12[91] = 0;
    sub_1025AD80(v12, 1);
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(this + 956) = v13;
  (*(void (__thiscall **)(_DWORD *, const char *))(*v13 + 1032))(v13, "ButtonClicked");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 956) + 172))(*(_DWORD *)(this + 956), this);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 952) + 916))(*(_DWORD *)(this + 952), a4);
  *(_DWORD *)(this + 968) = 0;
  *(_BYTE *)(this + 961) = 0;
  *(_DWORD *)(this + 964) = 3;
  return this;
}
