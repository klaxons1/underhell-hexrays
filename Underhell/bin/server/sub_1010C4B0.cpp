void __thiscall sub_1010C4B0(_DWORD *this, int a2)
{
  unsigned int *v3; // ecx
  unsigned int *v4; // edi
  unsigned int v5; // eax
  int v6; // edx

  v3 = (unsigned int *)this[1];
  v4 = 0;
  while ( v3 )
  {
    v5 = *v3;
    if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
    if ( v6 == a2 || v5 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != v5 >> 12 || !off_1061BE18[4 * (*v3 & 0xFFF) + 1] )
    {
      if ( v4 )
        v4[1] = v3[1];
      else
        this[1] = v3[1];
      sub_1042FBE0(v3);
      --*this;
      v3 = (unsigned int *)this[1];
      v4 = 0;
    }
    else
    {
      v4 = v3;
      v3 = (unsigned int *)v3[1];
    }
  }
}
