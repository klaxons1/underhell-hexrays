int __thiscall sub_1010C0C0(int this, const char *a2, int a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // [esp+8h] [ebp-4h]

  if ( !*(_BYTE *)(this + 16) )
    return 0;
  v5 = *(_DWORD *)(this + 32);
  v6 = 0;
  v10 = v5;
  if ( v5 > 0 )
  {
    v7 = 0;
    do
    {
      if ( !sub_10227B20(*(_DWORD *)(*(_DWORD *)(this + 20) + v7), a2, strlen(a2)) )
        break;
      ++v6;
      v7 += 24;
    }
    while ( v6 < v10 );
    v5 = v10;
  }
  if ( v6 == v5 )
    return 0;
  v8 = 24 * v6;
  if ( a3 == -1 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(this + 20) + v8 + 16) - 1;
  }
  else
  {
    v9 = *(_DWORD *)(*(_DWORD *)(this + 20) + v8 + 16) - 1;
    if ( a3 < v9 )
      v9 = a3;
  }
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 20) + v8 + 4) + 4 * RandomInt(0, v9));
}
