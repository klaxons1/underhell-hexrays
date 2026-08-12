_DWORD *__thiscall sub_1020B100(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx
  double v4; // st7
  int *v5; // ecx

  sub_100C2130(this);
  this[280] = &IBreakableWithPropData::`vftable';
  this[281] = &CDefaultPlayerPickupVPhysics::`vftable';
  *this = &CBreakableProp::`vftable';
  this[280] = &CBreakableProp::`vftable';
  this[281] = &CBreakableProp::`vftable';
  this[285] = -1;
  this[282] = 0;
  this[286] = 5;
  this[291] = -1;
  this[288] = 0;
  this[292] = 5;
  this[297] = -1;
  this[294] = 0;
  this[298] = 5;
  this[307] = -1;
  this[322] = -1;
  this[328] = -1;
  this[325] = 0;
  this[329] = 5;
  this[334] = -1;
  this[331] = 0;
  this[335] = 5;
  this[340] = -1;
  this[337] = 0;
  this[341] = 5;
  this[346] = -1;
  this[343] = 0;
  this[347] = 5;
  this[352] = -1;
  this[349] = 0;
  this[353] = 5;
  this[357] = -1;
  this[358] = -1;
  if ( this[266] != COERCE_INT(-1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 1064);
    }
    *((float *)this + 266) = -1.0;
  }
  if ( this[267] != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)this[6];
      if ( v3 )
        sub_100194B0(v3, 1068);
    }
    *((float *)this + 267) = 0.0;
  }
  v4 = 1.0;
  if ( this[268] != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)this[6];
      if ( v5 )
      {
        sub_100194B0(v5, 1072);
        v4 = 1.0;
      }
    }
    *((float *)this + 268) = v4;
  }
  *((float *)this + 355) = v4;
  this[356] = 0;
  *((_BYTE *)this + 1440) = 1;
  return this;
}
