int __thiscall sub_10272060(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  this[63] |= 0x80u;
  sub_100D8500(this);
  if ( this[204] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 816);
    }
    this[204] = 0;
  }
  sub_10112C00((int)(this + 80), 3);
  sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 4);
  sub_10271D60((int)this, *((float *)this + 201), *((float *)this + 202));
  if ( this[206] != 1 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)this[6];
      if ( v3 )
        sub_100194B0(v3, 824);
    }
    this[206] = 1;
  }
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  return sub_100EA940(this, 0x8000);
}
