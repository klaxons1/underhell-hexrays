_DWORD *__thiscall sub_100D4A70(_DWORD *this)
{
  int *v2; // ecx
  _DWORD *result; // eax
  int *v4; // ecx

  sub_100C2130(this);
  *this = &CBaseCombatWeapon::`vftable';
  this[280] = -1;
  this[311] = -1;
  this[322] = -1;
  this[319] = 0;
  this[323] = 5;
  this[328] = -1;
  this[325] = 0;
  this[329] = 5;
  this[334] = -1;
  this[331] = 0;
  this[335] = 5;
  this[340] = -1;
  this[337] = 0;
  this[341] = 5;
  *((float *)this + 303) = 65.0;
  *((float *)this + 304) = 65.0;
  *((_WORD *)this + 563) = 0;
  *((_BYTE *)this + 1125) = 0;
  *((float *)this + 305) = 1024.0;
  *((_BYTE *)this + 1228) = 0;
  *((float *)this + 306) = 1024.0;
  if ( this[282] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 1128);
    }
    this[282] = 0;
  }
  this[313] = 0;
  sub_100D0BE0((int)this);
  *((_WORD *)this + 624) = sub_10275C80();
  result = this;
  if ( *(_DWORD *)((char *)this + 771) != 1693501540 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *(_DWORD *)((char *)this + 771) = 1693501540;
      return this;
    }
    else
    {
      v4 = (int *)this[6];
      if ( v4 )
        sub_100194B0(v4, 771);
      *(_DWORD *)((char *)this + 771) = 1693501540;
      return this;
    }
  }
  return result;
}
