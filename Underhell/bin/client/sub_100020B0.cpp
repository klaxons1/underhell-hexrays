int __stdcall sub_100020B0(_DWORD **a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  const char *v6; // edi
  int v7; // eax
  int v8; // esi
  void (__thiscall *v9)(int, _DWORD ***, int); // edx
  int v11; // eax

  v2 = dword_10400F74;
  v3 = dword_10400F68;
  v4 = 0;
  if ( dword_10400F74 > 0 )
  {
    while ( *(_DWORD *)(dword_10400F68 + 8 * v4) != **a1 )
    {
      if ( ++v4 >= dword_10400F74 )
        goto LABEL_8;
    }
    v5 = dword_10400F68 + 8 * v4;
    if ( v5 )
    {
      v6 = (const char *)sub_101267A0(*(unsigned __int16 *)(v5 + 4));
      if ( v6 )
        goto LABEL_12;
      v2 = dword_10400F74;
      v3 = dword_10400F68;
    }
  }
LABEL_8:
  v7 = 0;
  if ( v2 <= 0 )
    goto LABEL_11;
  while ( *(_DWORD *)(v3 + 8 * v7) )
  {
    if ( ++v7 >= v2 )
      goto LABEL_11;
  }
  v11 = v3 + 8 * v7;
  if ( v11 )
    v6 = (const char *)sub_101267A0(*(unsigned __int16 *)(v11 + 4));
  else
LABEL_11:
    v6 = 0;
LABEL_12:
  v8 = a2;
  v9 = *(void (__thiscall **)(int, _DWORD ***, int))(*(_DWORD *)a2 + 52);
  a1 = (_DWORD **)((strlen(v6) + 1) | 0x80800000);
  v9(a2, &a1, 1);
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v8 + 92))(v8, v6);
}
