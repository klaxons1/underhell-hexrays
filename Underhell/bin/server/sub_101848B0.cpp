void sub_101848B0()
{
  int i; // esi
  _DWORD *v1; // edx
  int v2; // ecx

  for ( i = dword_106B6D38 - 1; i >= 0; --i )
  {
    v1 = (_DWORD *)(dword_106B6D2C + 4 * i);
    if ( *v1 != -1
      && off_1061BE18[4 * (*v1 & 0xFFF) + 2] == *v1 >> 12
      && (v2 = off_1061BE18[4 * (*v1 & 0xFFF) + 1]) != 0 )
    {
      sub_10184710(v2);
    }
    else
    {
      if ( dword_106B6D38 - i - 1 > 0 )
        memcpy((void *)(dword_106B6D2C + 4 * i), v1 + 1, 4 * (dword_106B6D38 - i - 1));
      --dword_106B6D38;
    }
  }
}
