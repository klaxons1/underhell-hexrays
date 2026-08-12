_DWORD *__thiscall sub_102FA9D0(_DWORD *this, char a2)
{
  if ( this[1090] >= 0x10u )
    sub_10184660(this[1085]);
  this[1090] = 15;
  this[1089] = 0;
  *((_BYTE *)this + 4340) = 0;
  sub_10068150(this + 1043);
  sub_10165310(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
