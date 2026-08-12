void __thiscall sub_10136DD0(float *this, float **a2)
{
  float *i; // edx
  float *j; // esi
  float *k; // edx

  for ( i = *a2; *a2; i = *a2 )
  {
    if ( *((float *)off_103DC81C + 3) <= (double)i[1] )
      break;
    *a2 = *(float **)i;
    *i = this[6];
    *((_DWORD *)this + 6) = i;
  }
  for ( j = *a2; j; j = *(float **)j )
  {
    for ( k = *(float **)j; *(_DWORD *)j; k = *(float **)j )
    {
      if ( *((float *)off_103DC81C + 3) <= (double)k[1] )
        break;
      *j = *k;
      *k = this[6];
      *((_DWORD *)this + 6) = k;
    }
  }
}
