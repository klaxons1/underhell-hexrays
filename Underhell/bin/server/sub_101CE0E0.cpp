_DWORD *__thiscall sub_101CE0E0(_DWORD *this)
{
  double v2; // st7
  _DWORD *v3; // ebx
  int *v4; // ecx
  _DWORD *v5; // eax

  sub_100C2130(this);
  v2 = 1.0;
  this[280] = &CDefaultPlayerPickupVPhysics::`vftable';
  v3 = 0;
  *this = &CRagdollProp::`vftable';
  this[280] = &CRagdollProp::`vftable';
  *((_BYTE *)this + 1128) = 0;
  this[462] = -1;
  this[459] = 0;
  this[463] = 5;
  *((_BYTE *)this + 1864) = 1;
  *((_BYTE *)this + 1866) = 0;
  this[1255] = -1;
  this[1258] = -1;
  this[1259] = -1;
  this[1260] = -1;
  this[1099] = -1;
  this[467] = this + 473;
  this[468] = this + 598;
  this[281] = 0;
  this[465] = 0;
  *((_BYTE *)this + 1865) = 0;
  this[469] = this + 723;
  this[470] = this + 848;
  this[471] = this + 973;
  *((_BYTE *)this + 1867) = 0;
  *((_BYTE *)this + 4392) = 0;
  *((_WORD *)this + 2218) = 1;
  *((_BYTE *)this + 4420) = 0;
  this[1264] = 0;
  this[1254] = 0;
  this[283] = 0;
  *((_BYTE *)this + 5028) = 0;
  if ( this[268] != COERCE_INT(1.0) )
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
        sub_100194B0(v4, 1072);
        v2 = 1.0;
      }
    }
    *((float *)this + 268) = v2;
  }
  *((float *)this + 1268) = v2;
  if ( *((_BYTE *)this + 1866) )
    return this;
  if ( !*(_DWORD *)(dword_10696134 + 48) )
  {
    if ( !*((_BYTE *)this + 1867) )
    {
      *((_BYTE *)this + 1867) = 1;
      this[281] = 0;
      sub_101CB850((int)this);
    }
    return this;
  }
  v5 = (_DWORD *)sub_10184390(12);
  if ( v5 )
  {
    v5[1] = 0;
    v5[2] = 0;
    *v5 = this;
    v3 = v5;
  }
  *(_DWORD *)(*(_DWORD *)(dword_106960D4 + 8) + 4) = v3;
  v3[2] = *(_DWORD *)(dword_106960D4 + 8);
  *(_DWORD *)(dword_106960D4 + 8) = v3;
  v3[1] = dword_106960D4;
  ++dword_106960D8;
  this[281] = v3;
  return this;
}
