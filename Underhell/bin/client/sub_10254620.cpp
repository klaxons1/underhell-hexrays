int __thiscall sub_10254620(int this)
{
  int v3; // edi
  char v4; // al
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int *v9; // esi
  int *i; // ecx

  if ( !*(_BYTE *)(this + 341) )
    return *(_DWORD *)(this + 376);
  v3 = *(_DWORD *)(this + 280);
  v4 = sub_10253F30((_DWORD *)this, v3);
  v5 = *(_DWORD *)(this + 272);
  if ( v4 )
  {
    v6 = 0;
    if ( v5 > 0 )
    {
      v7 = *(_DWORD **)(this + 260);
      do
      {
        if ( v3 == *v7 )
          break;
        ++v6;
        ++v7;
      }
      while ( v6 < v5 );
    }
    if ( *(_BYTE *)(this + 284) )
    {
      if ( v6 <= 0 )
        return **(_DWORD **)(this + 260);
      else
        return *(_DWORD *)(*(_DWORD *)(this + 260) + 4 * v6 - 4);
    }
    else
    {
      return v3;
    }
  }
  else
  {
    v8 = 0;
    if ( v5 <= 0 )
      return 0;
    v9 = *(int **)(this + 260);
    for ( i = v9; v3 >= *i; ++i )
    {
      if ( ++v8 >= v5 )
        return 0;
    }
    if ( v8 )
      return v9[v8 - 1];
    else
      return 0;
  }
}
