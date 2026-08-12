int __thiscall sub_10241EB0(_DWORD *this)
{
  int *v2; // ecx
  int v3; // edx

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  if ( this[200] != COERCE_INT(100.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 800);
    }
    *((float *)this + 200) = 100.0;
  }
  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v3, 4, 0);
  sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
  this[63] |= 0x80u;
  return sub_100D8500(this);
}
