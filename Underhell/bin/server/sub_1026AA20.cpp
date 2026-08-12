__int16 __thiscall sub_1026AA20(char **this)
{
  char **v2; // esi
  int v3; // ebx
  int v4; // esi
  char *v5; // eax
  bool v6; // zf
  char **v7; // eax
  char *v8; // eax
  char **v9; // esi
  int v10; // edi
  char *v11; // eax

  v2 = this + 47;
  v3 = 9;
  do
  {
    if ( *v2 )
      sub_1023B8B0(*v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( (int)this[45] > 0 )
  {
    v4 = 0;
    do
    {
      v5 = this[42];
      v6 = *(_DWORD *)&v5[v4 + 16] == 0;
      v7 = (char **)&v5[v4 + 16];
      if ( !v6 )
      {
        v8 = *v7;
        if ( !v8 )
          v8 = (char *)String;
        sub_1023B8B0(v8);
      }
      ++v3;
      v4 += 20;
    }
    while ( v3 < (int)this[45] );
  }
  v9 = this + 56;
  v10 = 20;
  do
  {
    v11 = *v9;
    if ( *v9 )
      LOWORD(v11) = sub_1023B8B0(*v9);
    ++v9;
    --v10;
  }
  while ( v10 );
  return (__int16)v11;
}
