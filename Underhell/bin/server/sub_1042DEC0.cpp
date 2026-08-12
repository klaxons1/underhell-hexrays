_DWORD *__thiscall sub_1042DEC0(_DWORD *this, int a2, int a3, char a4)
{
  bool v5; // zf

  *this = a2;
  this[1] = a3;
  this[2] = -1;
  *((_BYTE *)this + 20) = 0;
  this[11] &= 0xFFFFFFFC;
  this[3] = 0;
  this[4] = 0;
  this[6] = 0;
  this[8] = 0;
  *((_BYTE *)this + 21) = a4;
  if ( (a4 & 8) != 0 )
  {
    this[7] = a3;
  }
  else
  {
    v5 = (this[5] & 1) == 0;
    this[7] = -1;
    if ( v5 )
    {
      if ( sub_1042D470((int)this, 1) )
        *(_BYTE *)(this[4] - this[8] + *this) = 0;
      else
        *((_BYTE *)this + 20) &= ~1u;
    }
    this[7] = this[4];
  }
  this[9] = sub_101722C0;
  this[10] = sub_1042DD70;
  return this;
}
