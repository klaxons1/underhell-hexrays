int __cdecl sub_1017B330(char *Src, char *a2, int a3)
{
  char *v3; // ecx
  char *v4; // eax
  int v5; // esi
  const char *v6; // eax
  int v7; // eax

  v3 = a2;
  if ( !a2 )
    v3 = (char *)String;
  v4 = Src;
  if ( !Src )
    v4 = (char *)String;
  v5 = sub_10167E00(v4, v3, a3);
  v6 = Src;
  if ( !Src )
    v6 = String;
  v7 = sub_101679A0((int)v6);
  sub_101678E0(v7, 0);
  return v5;
}
