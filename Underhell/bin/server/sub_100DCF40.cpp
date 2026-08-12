int __thiscall sub_100DCF40(_BYTE *this, int a2, int a3)
{
  int result; // eax
  __int16 v4; // bx
  _BYTE *v5; // edi

  if ( a2 )
  {
    result = a2 - 1;
    if ( a2 != 1 )
      return result;
    result = a3;
    if ( !a3 || (a3 & 0x20) != 0 )
      --this[444];
    if ( (a3 & 0x10) != 0 )
      --this[445];
  }
  else
  {
    result = a3;
    if ( !a3 || (a3 & 0x20) != 0 )
      ++this[444];
    if ( (a3 & 0x10) != 0 )
      ++this[445];
  }
  if ( this[306] == 6 )
  {
    v4 = 0;
    if ( this[444] )
      v4 = 32;
    if ( this[445] )
      v4 |= 0x10u;
    v5 = this + 447;
    if ( (v4 & 0x4030) != 0 )
    {
      if ( *v5 != 1 )
      {
        (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 672))(this, this + 447);
        *v5 = 1;
      }
      return sub_100E8800(v4);
    }
    else
    {
      if ( *v5 )
      {
        (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 672))(this, this + 447);
        *v5 = 0;
      }
      return sub_100E8800(0);
    }
  }
  return result;
}
