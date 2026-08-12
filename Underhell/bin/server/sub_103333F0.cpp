int __thiscall sub_103333F0(_BYTE *this)
{
  int *v3; // ecx

  if ( (this[192] & 6) != 0 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 320))(this) )
    sub_102EB480((int)this);
  if ( *((_DWORD *)this + 48) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
      *((_DWORD *)this + 48) = 0;
      return sub_100D8500(this);
    }
    v3 = (int *)*((_DWORD *)this + 6);
    if ( v3 )
      sub_100194B0(v3, 192);
    *((_DWORD *)this + 48) = 0;
  }
  return sub_100D8500(this);
}
