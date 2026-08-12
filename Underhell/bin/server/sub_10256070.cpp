void __thiscall sub_10256070(unsigned __int16 *this, int a2)
{
  char v3; // al
  unsigned __int16 *v4; // ecx

  v3 = *((_BYTE *)this + 356) >> 3;
  v4 = this + 160;
  if ( (v3 & 1) != 0 )
    sub_101129A0(v4, v4[18] & 0xFFF7);
  else
    sub_101129A0(v4, v4[18] | 8);
  sub_100DCB50(this, 0);
}
