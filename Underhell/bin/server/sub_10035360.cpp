int __thiscall sub_10035360(int *this, int a2)
{
  int result; // eax
  int v4; // esi
  int *v5; // ecx

  if ( (a2 & 6) != 0 && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 320))(this) )
    sub_102EB480(this);
  result = this[48];
  v4 = result & ~a2;
  if ( result != v4 )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)this[6];
      if ( v5 )
        result = sub_100194B0(v5, 192);
    }
    this[48] = v4;
  }
  if ( (a2 & 0x20) != 0 )
  {
    if ( this[6] )
      *(_DWORD *)this[6] |= 0x80u;
    return sub_100D8500(this);
  }
  return result;
}
