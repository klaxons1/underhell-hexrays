int *__thiscall sub_10243050(int *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // edi
  int v4; // eax

  *this = (int)&vgui::Panel::`vftable';
  sub_10242670();
  if ( !byte_1047CAF4 )
  {
    byte_1047CAF4 = 1;
    *(_DWORD *)(sub_102484C0("Panel") + 24) = sub_100B8F80;
  }
  sub_102426C0();
  if ( !byte_1047CC0A )
  {
    byte_1047CC0A = 1;
    sub_102425C0((int)"Repaint", (int)sub_10239270, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10242710(this + 2);
  if ( !byte_1047CC0C )
  {
    byte_1047CC0C = 1;
    sub_102425C0((int)"MouseCaptureLost", (int)sub_10239330, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC0D )
  {
    byte_1047CC0D = 1;
    sub_102425C0((int)"SetFocus", (int)sub_10239380, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC0E )
  {
    byte_1047CC0E = 1;
    sub_102425C0((int)"KillFocus", (int)sub_10239240, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC0F )
  {
    byte_1047CC0F = 1;
    sub_102425C0((int)"Delete", (int)sub_102392E0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC10 )
  {
    byte_1047CC10 = 1;
    sub_102425C0((int)"Tick", (int)sub_102393A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_10242760();
  if ( !byte_1047CC12 )
  {
    byte_1047CC12 = 1;
    sub_102425C0((int)"OnMouseFocusTicked", (int)sub_102392B0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_102427B0();
  sub_10242800();
  sub_10242850();
  if ( !byte_1047CC16 )
  {
    byte_1047CC16 = 1;
    sub_102425C0((int)"CursorEntered", (int)sub_10239350, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC17 )
  {
    byte_1047CC17 = 1;
    sub_102425C0((int)"CursorExited", (int)sub_10239210, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_102428A0((char *)this + 21);
  sub_102428F0((char *)this + 22);
  sub_10242940((char *)this + 23);
  sub_10242990(this + 6);
  sub_102429E0((char *)this + 25);
  sub_10242A30((char *)this + 26);
  sub_10242A80((char *)this + 27);
  sub_10242AD0(this + 7);
  sub_10242B20((char *)this + 29);
  if ( !byte_1047CC21 )
  {
    byte_1047CC21 = 1;
    sub_102425C0((int)"KeyFocusTicked", (int)sub_10239340, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC22 )
  {
    byte_1047CC22 = 1;
    sub_102425C0((int)"MouseFocusTicked", (int)sub_10239390, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC23 )
  {
    byte_1047CC23 = 1;
    sub_102425C0((int)"Invalidate", (int)sub_10239250, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047CC24 )
  {
    byte_1047CC24 = 1;
    sub_102425C0((int)"Move", (int)sub_102392F0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  this[10] = 0;
  this[11] = 0;
  this[13] = -1;
  *((_WORD *)this + 40) = 0;
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  this[24] = 0;
  this[25] = 0;
  this[26] = 0;
  this[27] = 0;
  this[28] = 0;
  this[29] = 0;
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  this[33] = -1;
  sub_1023EE70();
  sub_1023EED0();
  sub_1023EF30();
  sub_1023EF90();
  sub_1023F000();
  sub_1023F060();
  sub_1023F130(this, 0, 0, 64, 24);
  if ( a2 )
  {
    v3 = *this;
    v4 = (**a2)(a2);
    (*(void (__thiscall **)(int *, int))(v3 + 152))(this, v4);
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD))(*this + 152))(this, 0);
  }
  return this;
}
