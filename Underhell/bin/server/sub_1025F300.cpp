int __cdecl sub_1025F300(_DWORD *a1, int a2, int a3)
{
  float *v3; // esi
  int v4; // edi
  const char *v5; // eax

  v3 = (float *)a3;
  v4 = 3;
  do
  {
    if ( *v3 < (double)*(float *)((char *)v3 + a2 - a3) )
    {
      if ( a1 )
        v5 = sub_100D6390(a1);
      else
        v5 = "<NULL>";
      Error("%s: backwards mins/maxs", v5);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return sub_100D5D10(a2, a3);
}
