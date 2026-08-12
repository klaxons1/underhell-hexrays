char *__cdecl getStringHelper(char *a1, char *a2, char *a3, int a4)
{
  int v4; // esi
  char *v5; // ecx
  int v6; // edx

  v4 = a4;
  if ( a4 > a2 - a1 )
    v4 = a2 - a1;
  if ( v4 )
  {
    v5 = a1;
    v6 = v4;
    do
    {
      *v5 = v5[a3 - a1];
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return &a1[v4];
}
