_DWORD *__thiscall sub_103D73B0(_DWORD *this)
{
  double v2; // st7
  int *v3; // ecx
  int *v4; // ecx
  int *v6; // ecx
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]

  sub_100C2130(this);
  v2 = 1.0;
  *this = &CPropScalable::`vftable';
  if ( this[280] != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)this[6];
      if ( v3 )
      {
        sub_100194B0(v3, 1120);
        v2 = 1.0;
      }
    }
    *((float *)this + 280) = v2;
  }
  v7 = v2;
  if ( this[281] != LODWORD(v7) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)this[6];
      if ( v4 )
      {
        sub_100194B0(v4, 1124);
        v2 = 1.0;
      }
    }
    *((float *)this + 281) = v2;
  }
  v8 = v2;
  if ( this[282] == LODWORD(v8) )
  {
    sub_100C1130((int)this);
    return this;
  }
  else if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
    *((float *)this + 282) = v2;
    sub_100C1130((int)this);
    return this;
  }
  else
  {
    v6 = (int *)this[6];
    if ( v6 )
    {
      sub_100194B0(v6, 1128);
      v2 = 1.0;
    }
    *((float *)this + 282) = v2;
    sub_100C1130((int)this);
    return this;
  }
}
