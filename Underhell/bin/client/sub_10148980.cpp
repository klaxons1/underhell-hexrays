double __usercall sub_10148980@<st0>(float *a1@<esi>)
{
  float *v2; // ecx
  float *v3; // edx
  double v4; // st7

  if ( !a1 )
    return 0.0;
  if ( *(_DWORD *)(dword_1043C1A4 + 48) )
  {
    if ( -1.0 == *(float *)(dword_1043C1EC + 44) )
      return a1[8];
    else
      return *(float *)(dword_1043C1EC + 44);
  }
  else
  {
    if ( *((float *)off_103DC81C + 3) < (double)a1[14] )
    {
      v2 = a1 + 8;
      v3 = a1 + 12;
      if ( a1[12] != a1[8] )
      {
        v4 = *v2;
        if ( *((float *)off_103DC81C + 3) < (double)a1[14] )
          return v4 + (1.0 - (a1[14] - *((float *)off_103DC81C + 3)) / a1[15]) * (*v3 - v4);
        if ( *v3 != v4 )
          sub_10147800(v2, a1 + 12);
      }
    }
    return a1[8];
  }
}
