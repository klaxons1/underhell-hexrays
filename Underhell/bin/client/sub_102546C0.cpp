int __thiscall sub_102546C0(int this)
{
  int v1; // esi
  int v2; // edx
  int result; // eax
  _DWORD *v4; // edi
  int v5; // esi
  int v6; // eax
  _DWORD *i; // edx
  int v8; // edx
  _DWORD *v9; // edi

  v1 = *(_DWORD *)(this + 272);
  v2 = 0;
  if ( v1 <= 0 )
  {
LABEL_5:
    v5 = v1 - 1;
    v6 = 0;
    if ( v5 <= 0 )
      return *(_DWORD *)(this + 232);
    for ( i = *(_DWORD **)(this + 260); *(_DWORD *)(this + 280) >= *i; ++i )
    {
      if ( ++v6 >= v5 )
        return *(_DWORD *)(this + 232);
    }
    return *(_DWORD *)(*(_DWORD *)(this + 260) + 4 * v6);
  }
  result = *(_DWORD *)(this + 280);
  v4 = *(_DWORD **)(this + 260);
  while ( result != *v4 )
  {
    ++v2;
    ++v4;
    if ( v2 >= v1 )
      goto LABEL_5;
  }
  v8 = 0;
  if ( v1 - 1 > 0 )
  {
    v9 = *(_DWORD **)(this + 260);
    do
    {
      if ( result == *v9 )
        break;
      ++v8;
      ++v9;
    }
    while ( v8 < v1 - 1 );
  }
  if ( !*(_BYTE *)(this + 284) )
  {
    if ( v8 != v1 - 2 )
      return *(_DWORD *)(*(_DWORD *)(this + 260) + 4 * v8 + 4);
    goto LABEL_5;
  }
  return result;
}
