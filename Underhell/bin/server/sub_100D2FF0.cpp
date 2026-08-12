int __thiscall sub_100D2FF0(int *this)
{
  int *v2; // ecx
  int *v3; // ecx
  float v4; // edi
  int v5; // eax
  int result; // eax

  (*(void (__thiscall **)(int *))(*this + 100))(this);
  sub_10112C00(2);
  this[63] &= ~0x40000u;
  *((float *)this + 289) = 0.0;
  if ( this[296] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 1184);
    }
    this[296] = 0;
  }
  if ( this[282] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)this[6];
      if ( v3 )
        sub_100194B0(v3, 1128);
    }
    this[282] = 0;
  }
  sub_100D2EA0(this);
  v4 = *(float *)this;
  v5 = (*(int (__thiscall **)(int *))(*this + 1208))(this);
  (*(void (__thiscall **)(int *, int))(LODWORD(v4) + 104))(this, v5);
  sub_100D2EA0(this);
  (*(void (__thiscall **)(int *))(*this + 1336))(this);
  sub_100EBE30(11);
  if ( *((_BYTE *)this + 225) != 1 )
  {
    (*(void (__thiscall **)(int *, int))(*this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 1;
  }
  sub_100E88A0(0);
  *((_BYTE *)this + 1172) = 0;
  sub_10112D90(1, 36.0);
  result = sub_100EAB80(this, 128);
  *((float *)this + 318) = 0.0;
  this[315] = 0;
  this[314] = 0;
  return result;
}
