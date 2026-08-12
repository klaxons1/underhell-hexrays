unsigned int __thiscall sub_100CD300(unsigned int *this, int a2)
{
  unsigned int result; // eax
  unsigned int *v4; // ecx
  int *v5; // edx
  int v6; // edi

  result = this[525];
  v4 = this + 525;
  if ( result == -1 || (v5 = &off_1061BE18[4 * (result & 0xFFF) + 1], result >>= 12, v5[1] != result) )
    v6 = 0;
  else
    v6 = *v5;
  if ( a2 != v6 )
  {
    sub_100C9FD0(v4, a2);
    return (*(int (__thiscall **)(unsigned int *, int, int))(*this + 1132))(this, v6, a2);
  }
  return result;
}
