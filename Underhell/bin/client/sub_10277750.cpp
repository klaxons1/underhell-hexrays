int __thiscall sub_10277750(_DWORD *this, int *a2)
{
  int v2; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // edi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  _DWORD *v14; // eax
  int result; // eax
  int i; // [esp+8h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v4 = this[67];
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v4 + 852))(v4, &v17);
  v5 = v20 - 1;
  for ( i = v20 - 1; i >= 0; --i )
  {
    v6 = *(_DWORD *)(v17 + 4 * v5);
    if ( v6 != this[52] )
    {
      v7 = (_DWORD *)this[67];
      if ( v6 >= 0 && v6 < v7[54] && v6 <= v7[60] )
      {
        v8 = 12 * v6 + v7[53];
        if ( *(_DWORD *)(v8 + 4) != v6 || *(_DWORD *)(v8 + 8) == v6 )
          v2 = *(_DWORD *)(12 * v6 + v7[53]);
        else
          v2 = 0;
      }
      v9 = a2[3];
      v10 = a2[1];
      if ( v9 + 1 > v10 )
        sub_102AA460(v9 - v10 + 1);
      ++a2[3];
      v11 = *a2;
      v12 = a2[3] - v9 - 1;
      v13 = a2[3] - v9 == 1;
      a2[4] = *a2;
      if ( v12 >= 0 && !v13 )
        memcpy((void *)(v11 + 4 * v9 + 4), (const void *)(v11 + 4 * v9), 4 * v12);
      v14 = (_DWORD *)(*a2 + 4 * v9);
      if ( v14 )
        *v14 = v2;
      v2 = 0;
    }
    v5 = i - 1;
  }
  v20 = 0;
  if ( v19 >= 0 )
  {
    if ( v17 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
      v17 = 0;
    }
    v18 = 0;
  }
  result = v17;
  v21 = v17;
  if ( v19 >= 0 )
  {
    if ( v17 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
  }
  return result;
}
