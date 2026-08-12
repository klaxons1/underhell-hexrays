_DWORD *__thiscall sub_10270680(_DWORD *this, _BYTE *a2, const char *a3, int (__thiscall ***a4)(_DWORD))
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  int *v8; // eax
  int *v9; // eax

  sub_10250100((int)this, a4, 0, 0);
  *this = &vgui::MessageBox::`vftable';
  if ( !byte_104805FC )
  {
    byte_104805FC = 1;
    v5 = sub_10242540("MessageBox");
    v5[7] = (unsigned int)sub_1026FD80;
    v5[6] = (unsigned int)sub_10242540("Frame");
  }
  if ( !byte_10480608 )
  {
    byte_10480608 = 1;
    v6 = sub_102484C0((int)"MessageBox");
    *(_DWORD *)(v6 + 24) = sub_1026FD80;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Frame");
  }
  if ( !byte_10480609 )
  {
    byte_10480609 = 1;
    v7 = sub_10242580("MessageBox");
    v7[17] = (unsigned int)sub_1026FD80;
    v7[6] = (unsigned int)sub_10242580("Frame");
  }
  if ( !byte_10480614 )
  {
    byte_10480614 = 1;
    sub_10270600((int)"ShutdownRequest", (int)sub_1026F5A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_1024E170(this, a2, 1);
  v8 = (int *)sub_100DDA40(284);
  if ( v8 )
    v9 = sub_1024B100(v8, (int (__thiscall ***)(_DWORD))this, 0, a3);
  else
    v9 = 0;
  this[110] = v9;
  sub_1026FD90((int)this);
  return this;
}
