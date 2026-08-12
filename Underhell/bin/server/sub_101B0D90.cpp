int __thiscall sub_101B0D90(char **this, int a2)
{
  char *v3; // eax
  char *v4; // eax
  char **v5; // esi
  int v6; // edi
  char *v7; // eax
  int result; // eax

  v3 = this[14];
  if ( !v3 )
    v3 = (char *)String;
  sub_1023B8B0(v3);
  v4 = this[15];
  if ( !v4 )
    v4 = (char *)String;
  sub_1023B8B0(v4);
  v5 = this + 18;
  v6 = 3;
  do
  {
    v7 = *v5;
    if ( !*v5 )
      v7 = (char *)String;
    result = sub_1023B8B0(v7);
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
