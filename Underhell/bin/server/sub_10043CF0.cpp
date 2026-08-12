void __thiscall sub_10043CF0(int *this)
{
  long double v2; // st7
  float v3; // [esp+4h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 2168))(this) )
    goto LABEL_23;
  v2 = sub_10078F10(this[651]);
  v3 = v2;
  if ( v2 <= -80.0 && v2 >= -100.0 )
  {
    if ( sub_100BDCE0(132) != -1 )
    {
      this[679] |= 0x2000u;
      sub_10039F40(this, 132);
      return;
    }
    v2 = v3;
  }
  if ( v2 >= 80.0 && v2 <= 100.0 )
  {
    if ( sub_100BDCE0(131) != -1 )
    {
      this[679] |= 0x2000u;
      sub_10039F40(this, 131);
      return;
    }
    v2 = v3;
  }
  if ( fabs(v2) >= 160.0 )
  {
    if ( sub_100BDCE0(129) != -1 )
    {
      this[679] |= 0x2000u;
      sub_10039F40(this, 129);
      return;
    }
    v2 = v3;
  }
  if ( v2 <= -45.0 )
  {
    if ( sub_100BDCE0(44) != -1 )
    {
      sub_10039F40(this, 44);
      return;
    }
    v2 = v3;
  }
  if ( v2 < 45.0 || sub_100BDCE0(43) == -1 )
LABEL_23:
    sub_10039F40(this, 1);
  else
    sub_10039F40(this, 43);
}
