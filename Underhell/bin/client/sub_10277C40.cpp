int __thiscall sub_10277C40(_DWORD *this, int a2, int a3, int *a4)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int result; // eax
  char v12; // [esp+Ah] [ebp-16h] BYREF
  char v13; // [esp+Bh] [ebp-15h] BYREF
  int v14; // [esp+Ch] [ebp-14h] BYREF
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  int i; // [esp+24h] [ebp+4h]
  int v20; // [esp+28h] [ebp+8h]

  v4 = this[66];
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v17 = 0;
  v13 = 0;
  v12 = 0;
  sub_10276410(v4, (int)&v13, &v14, &v13, &v12, a2, a3);
  v5 = 0;
  for ( i = v17; v5 < i; ++v5 )
  {
    v6 = a4[3];
    v7 = a4[1];
    v20 = *(_DWORD *)(v14 + 4 * v5);
    if ( v6 + 1 > v7 )
      sub_1010AFF0(a4, v6 - v7 + 1);
    ++a4[3];
    v8 = *a4;
    v9 = a4[3] - v6 - 1;
    a4[4] = *a4;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
    v10 = (_DWORD *)(*a4 + 4 * v6);
    if ( v10 )
      *v10 = *(_DWORD *)(v20 + 208);
  }
  result = v14;
  v17 = 0;
  if ( v16 >= 0 )
  {
    if ( v14 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
      result = 0;
      v14 = 0;
    }
    v15 = 0;
  }
  v18 = result;
  if ( v16 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
