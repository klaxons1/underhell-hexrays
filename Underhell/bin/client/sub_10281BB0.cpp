char *__cdecl sub_10281BB0(char **a1)
{
  char *v1; // edi
  int v2; // edx
  int v3; // ebp
  char *v4; // esi
  int v5; // edx

  byte_104819B8[0] = 0;
  v1 = *a1;
  if ( !isalnum(**a1) )
  {
    do
    {
      if ( !*v1 )
        break;
      v2 = *++v1;
    }
    while ( !isalnum(v2) );
  }
  v3 = 0;
  if ( isalnum(*v1) )
  {
    v4 = v1;
    do
    {
      v4[byte_104819B8 - v1] = *v4;
      v5 = *++v4;
      ++v3;
    }
    while ( isalnum(v5) );
  }
  byte_104819B8[v3] = 0;
  *a1 = &v1[v3];
  return byte_104819B8;
}
