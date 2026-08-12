const char *__thiscall sub_10132310(char *this, int a2)
{
  const char **v3; // ecx
  const char *v4; // ecx
  const char *v5; // edi
  char *v6; // esi
  _DWORD *v7; // ecx
  const char *result; // eax
  int v9; // esi
  char v10; // cl

  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( v4 )
      v5 = v4;
    else
      v5 = String;
  }
  else
  {
    v5 = sub_1010D460((int)v3);
  }
  v6 = this + 840;
  if ( *(v6 - 756) )
  {
    *(v6 - 752) |= 1u;
  }
  else
  {
    v7 = (_DWORD *)*((_DWORD *)v6 - 204);
    if ( v7 )
    {
      *v7 |= 0x101u;
      *(_WORD *)(sub_10153460(v7) + 2) = 0;
    }
  }
  result = v5;
  v9 = v6 - v5;
  do
  {
    v10 = *result;
    result[v9] = *result;
    ++result;
  }
  while ( v10 );
  return result;
}
