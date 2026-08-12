int *__thiscall sub_10271C20(int *this, int (__thiscall ***a2)(_DWORD), char *Source, const char *a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  sub_1025D2A0(this, a2, Source, a4);
  *this = (int)&vgui::RadioButton::`vftable';
  if ( !byte_10480E98 )
  {
    byte_10480E98 = 1;
    v5 = sub_10242540("RadioButton");
    v5[7] = (unsigned int)sub_102712A0;
    v5[6] = (unsigned int)sub_10242540("ToggleButton");
  }
  if ( !byte_10480EA4 )
  {
    byte_10480EA4 = 1;
    v6 = sub_102484C0((int)"RadioButton");
    *(_DWORD *)(v6 + 24) = sub_102712A0;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"ToggleButton");
  }
  if ( !byte_10480EA5 )
  {
    byte_10480EA5 = 1;
    v7 = sub_10242580("RadioButton");
    v7[17] = (unsigned int)sub_102712A0;
    v7[6] = (unsigned int)sub_10242580("ToggleButton");
  }
  sub_10271BD0((char *)this + 375);
  this[96] = 0;
  sub_10249A90(this, 3);
  v8 = (_DWORD *)sub_100DDA40(48);
  v9 = v8;
  if ( v8 )
  {
    sub_1025E0A0(v8);
    *v9 = &RadioImage::`vftable';
    v9[7] = 0;
    v9[8] = 0;
    v9[9] = 0;
    v9[10] = 0;
    v9[6] = this;
    v9[11] = 0;
    sub_1025DD80(v9, 20, 13);
  }
  else
  {
    v9 = 0;
  }
  this[94] = (int)v9;
  this[95] = 0;
  this[97] = 0;
  sub_1024AA90(this, 1);
  sub_1024AA00(this, 0, this[94], 0);
  sub_1025AD80(this, 1);
  return this;
}
