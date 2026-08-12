void __thiscall sub_10237290(int this, int a2)
{
  int v3; // ebx
  const char *v4; // eax
  int v5; // esi
  int *v6; // ecx

  v3 = 0;
  if ( *(int *)(this + 1076) > 0 )
  {
    do
    {
      if ( *(_DWORD *)(a2 + 24) == 2 )
      {
        v4 = *(const char **)(a2 + 8);
        if ( !v4 )
          v4 = String;
      }
      else
      {
        v4 = sub_1010D460(a2 + 8);
      }
      if ( !strcmp(*(const char **)(*(_DWORD *)(this + 1064) + 4 * v3), v4) )
        break;
      ++v3;
    }
    while ( v3 < *(_DWORD *)(this + 1076) );
    if ( v3 < *(_DWORD *)(this + 1076) )
    {
      v5 = 0;
      while ( *(_BYTE *)(this + v5 + 1084) != 0xFF )
      {
        if ( ++v5 >= 16 )
          return;
      }
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + v5 + 1084) = v3;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, v5 + 1084);
        *(_BYTE *)(this + v5 + 1084) = v3;
      }
    }
  }
}
