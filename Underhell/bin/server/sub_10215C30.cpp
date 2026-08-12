const char *__thiscall sub_10215C30(int this, const char *a2, int a3)
{
  const char *result; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // eax
  const char *v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 16) )
    return 0;
  v5 = *(_DWORD *)(this + 32);
  v6 = 0;
  v12 = v5;
  if ( v5 > 0 )
  {
    v7 = 0;
    do
    {
      v8 = strlen(a2);
      v9 = *(const char **)(*(_DWORD *)(this + 20) + v7);
      if ( !v9 )
        v9 = String;
      if ( !sub_104291C0(v9, a2, v8) )
        break;
      ++v6;
      v7 += 24;
    }
    while ( v6 < v12 );
    v5 = v12;
  }
  if ( v6 == v5 )
    return 0;
  v10 = 24 * v6;
  if ( a3 == -1 )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(this + 20) + v10 + 16) - 1;
  }
  else
  {
    v11 = *(_DWORD *)(*(_DWORD *)(this + 20) + v10 + 16) - 1;
    if ( a3 < v11 )
      v11 = a3;
  }
  result = *(const char **)(*(_DWORD *)(*(_DWORD *)(this + 20) + v10 + 4) + 4 * RandomInt(0, v11));
  if ( !result )
    return String;
  return result;
}
