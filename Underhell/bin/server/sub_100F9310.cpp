_DWORD *__thiscall sub_100F9310(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx
  _DWORD *result; // eax
  int *v5; // ecx

  sub_100C2130(this);
  *this = &CBaseViewModel::`vftable';
  this[286] = -1;
  this[292] = -1;
  this[293] = 0;
  this[294] = 0;
  this[295] = 0;
  this[296] = 0;
  this[297] = 0;
  sub_1005C620((_BYTE *)this + 116, 255, 255, 255, 255);
  this[290] = 0;
  this[291] = 0;
  if ( this[285] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 1140);
    }
    this[285] = 0;
  }
  if ( this[289] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)this[6];
      if ( v3 )
        sub_100194B0(v3, 1156);
    }
    this[289] = 0;
  }
  result = this;
  if ( *((_BYTE *)this + 1120) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 1120) = 0;
    }
    else
    {
      v5 = (int *)this[6];
      if ( v5 )
        sub_100194B0(v5, 1120);
      *((_BYTE *)this + 1120) = 0;
      return this;
    }
  }
  return result;
}
