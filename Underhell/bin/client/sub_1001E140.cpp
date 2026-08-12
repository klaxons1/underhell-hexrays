int __cdecl sub_1001E140(int a1, char *String2)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v6; // esi
  const char *v7; // eax
  int v8; // eax
  int v9; // [esp+Ch] [ebp-4h]
  int v10; // [esp+18h] [ebp+8h]

  v2 = *(_DWORD *)a1 + *(_DWORD *)(*(_DWORD *)a1 + 160);
  v3 = *(_DWORD *)a1 + *(_DWORD *)(*(_DWORD *)a1 + 364);
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 156) - 1;
  v9 = 0;
  v10 = v2;
  if ( v4 < 0 )
    return -1;
  while ( 1 )
  {
    v6 = (v4 + v9) >> 1;
    v7 = (const char *)(v2 + 216 * *(unsigned __int8 *)(v6 + v3));
    v8 = _stricmp(&v7[*(_DWORD *)v7], String2);
    if ( v8 < 0 )
    {
      v9 = v6 + 1;
      goto LABEL_8;
    }
    if ( v8 <= 0 )
      return *(unsigned __int8 *)(v6 + v3);
    v4 = v6 - 1;
LABEL_8:
    if ( v9 > v4 )
      return -1;
    v2 = v10;
  }
}
