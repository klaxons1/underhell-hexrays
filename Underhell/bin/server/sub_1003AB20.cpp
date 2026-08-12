int __thiscall sub_1003AB20(int *this)
{
  int v2; // eax
  int v3; // eax

  v2 = this[534];
  if ( v2 >= 0 )
  {
    if ( v2 <= 1 )
    {
      this[534] = 3;
    }
    else if ( v2 == 2 )
    {
      sub_10027CD0(this, 0);
    }
  }
  if ( this[671] != 6 )
  {
    if ( !(unsigned __int8)sub_1007E040(this[647]) || (v3 = sub_1007DF30(this[647]), v3 <= 0) )
      v3 = 1;
    sub_10039F40(this, v3);
  }
  if ( (unsigned __int8)sub_1007E040(this[647]) )
    sub_100820C0(this[647]);
  sub_10081C10(this[647]);
  return (*(int (__thiscall **)(int *))(*this + 1764))(this);
}
