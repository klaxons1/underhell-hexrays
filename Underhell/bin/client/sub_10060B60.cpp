char __thiscall sub_10060B60(_DWORD *this)
{
  int v1; // esi
  float *v2; // edi
  float *i; // edx
  double v4; // st3
  double v5; // st6
  double v6; // st3
  double v7; // st4

  v1 = 0;
  if ( (int)this[317] <= 0 )
  {
    return --this[302] > 0;
  }
  else
  {
    v2 = (float *)this[316];
    for ( i = v2 + 5; ; i += 9 )
    {
      v4 = *v2 - *(i - 2);
      v5 = v4 * v4;
      v6 = *(i - 4) - *(i - 1);
      v7 = *(i - 3) - *i;
      if ( v7 * v7 + v6 * v6 + v5 > 0.029999999 )
        break;
      ++v1;
      v2 += 9;
      if ( v1 >= this[317] )
        return --this[302] > 0;
    }
    return 1;
  }
}
