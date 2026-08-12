char __thiscall sub_102144B0(_DWORD *this)
{
  unsigned int v3; // eax

  if ( this[418] == 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 856))(this, 0) )
  {
    sub_10210260(this);
    return 1;
  }
  else
  {
    v3 = this[429];
    if ( v3 == -1 || off_1061BE18[4 * (this[429] & 0xFFF) + 2] != v3 >> 12 )
    {
      sub_102141C0(this, 0);
      return 1;
    }
    else
    {
      sub_102141C0(this, off_1061BE18[4 * (this[429] & 0xFFF) + 1]);
      return 1;
    }
  }
}
