void __thiscall sub_100EAAB0(_DWORD *this, int a2)
{
  int *v3; // ecx

  if ( a2 != this[48] )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 320))(this) )
    {
      if ( (a2 & 6) == 0 || (this[48] & 6) != 0 )
      {
        if ( (a2 & 6) == 0 && (this[48] & 6) != 0 )
          sub_102EB480(this);
      }
      else
      {
        sub_102EB400((int)this, 307.20001);
      }
    }
    if ( this[48] != a2 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v3 = (int *)this[6];
        if ( v3 )
          sub_100194B0(v3, 192);
      }
      this[48] = a2;
    }
    if ( (a2 & 8) != 0 )
    {
      sub_1012DA40(this);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 320))(this) )
        sub_100F81F0(this);
    }
    sub_100D8500(this);
  }
}
