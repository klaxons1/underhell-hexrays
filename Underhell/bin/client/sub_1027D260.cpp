int *__thiscall sub_1027D260(int *this, char a2)
{
  int v4; // [esp-4h] [ebp-8h]

  v4 = this[6];
  *this = (int)&vgui::TextImage::`vftable';
  sub_10034930(v4);
  sub_1011A810(this + 20);
  sub_1011A810(this + 14);
  sub_1025DD20(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
