char __thiscall sub_103C9770(float *this)
{
  unsigned int v2; // eax
  int v3; // ecx

  if ( *((_DWORD *)this + 629) == 1 )
  {
    v2 = *((_DWORD *)this + 672);
    if ( v2 != -1
      && off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 2] == v2 >> 12
      && off_1061BE18[4 * ((_DWORD)this[672] & 0xFFF) + 1] )
    {
      return 0;
    }
  }
  if ( sub_100C4E90(this, 137) || sub_100697A0(this, 104, 1) || sub_100697A0(this, 43, 1) )
    return 0;
  v3 = *((_DWORD *)this + 906);
  if ( v3 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 212))(v3);
  else
    return sub_10020540(this);
}
