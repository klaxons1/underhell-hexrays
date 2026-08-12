int __thiscall sub_102E20A0(int *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int *v5; // eax
  int result; // eax
  int *v7; // ecx

  v3 = *this;
  v4 = *this - 1;
  if ( *this != v4 )
  {
    v5 = this - 1261;
    if ( *((_BYTE *)this - 4960) )
    {
      *((_BYTE *)v5 + 88) |= 1u;
      result = v3;
      *this = v4;
      return result;
    }
    v7 = (int *)v5[6];
    if ( v7 )
      sub_100194B0(v7, 5044);
    *this = v4;
  }
  return v3;
}
