int *__thiscall sub_1024B100(int *this, int (__thiscall ***a2)(_DWORD), char *Source, const char *a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  int v8; // eax

  sub_10243490(this, a2, Source);
  *this = (int)&vgui::Label::`vftable';
  if ( !byte_1047D558 )
  {
    byte_1047D558 = 1;
    v5 = sub_10242540("Label");
    v5[7] = (unsigned int)sub_1012F6B0;
    v5[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047D559 )
  {
    byte_1047D559 = 1;
    v6 = sub_102484C0((int)"Label");
    *(_DWORD *)(v6 + 24) = sub_1012F6B0;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047D55A )
  {
    byte_1047D55A = 1;
    v7 = sub_10242580("Label");
    v7[17] = (unsigned int)sub_1012F6B0;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_1047D55B )
  {
    byte_1047D55B = 1;
    sub_1024AFC0((int)"SetText", (int)sub_1017EB20, 0, 0, 0, 1, 6, 0, 0, 0);
  }
  if ( !byte_1047D55C )
  {
    byte_1047D55C = 1;
    sub_1024AFC0((int)"Hotkey", (int)sub_10249FD0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047D55D )
  {
    byte_1047D55D = 1;
    sub_1024AFC0((int)"DialogVariables", (int)sub_10249FC0, 0, 0, 0, 1, 6, 0, 0, 0);
  }
  this[55] = 0;
  this[56] = 0;
  this[57] = 0;
  this[58] = 0;
  this[59] = 0;
  this[62] = 0;
  this[63] = 0;
  this[64] = 0;
  this[67] = -1;
  sub_102495F0((int)this);
  if ( sub_100DDA40(100) )
    v8 = sub_1027D150(a4);
  else
    v8 = 0;
  this[54] = v8;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 20))(v8, 0);
  sub_10249820(this, a4);
  this[65] = sub_1024B0A0(this, this[54], 0);
  return this;
}
