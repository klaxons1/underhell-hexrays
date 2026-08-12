void *__thiscall sub_10060460(void *this)
{
  void *result; // eax
  int v2; // edi
  char *v3; // ebx
  int v4; // esi
  float *v5; // edx
  double v6; // st6

  result = this;
  v2 = 0;
  v3 = (char *)&unk_1040EB08;
  do
  {
    v4 = 0;
    if ( v2 >= 0 )
    {
      v5 = (float *)v3;
      do
      {
        ++v4;
        v5 += 3;
        v6 = (double)v4 / (double)(v2 + 1);
        *(v5 - 5) = v6;
        *(v5 - 4) = v6 * v6;
        *(v5 - 3) = v6 * (v6 * v6);
      }
      while ( v4 <= v2 );
    }
    v3 += 96;
    ++v2;
  }
  while ( (int)v3 < (int)byte_1040EE08 );
  return result;
}
