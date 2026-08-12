double __usercall sub_10148A20@<st0>(float *a1@<esi>)
{
  float *v2; // ecx
  float *v3; // edx
  double v4; // st7

  if ( !a1 )
    return 0.0;
  if ( *(_DWORD *)(dword_1043C1A4 + 48) )
  {
    if ( -1.0 == *(float *)(dword_1043C234 + 44) )
      return a1[9];
    else
      return *(float *)(dword_1043C234 + 44);
  }
  else
  {
    if ( *((float *)off_103DC81C + 3) < (double)a1[14] )
    {
      v2 = a1 + 9;
      v3 = a1 + 13;
      if ( a1[13] != a1[9] )
      {
        v4 = *v2;
        if ( *((float *)off_103DC81C + 3) < (double)a1[14] )
          return v4 + (1.0 - (a1[14] - *((float *)off_103DC81C + 3)) / a1[15]) * (*v3 - v4);
        if ( *v3 != v4 )
          sub_10147830(v2, a1 + 13);
      }
    }
    return a1[9];
  }
}
