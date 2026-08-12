int __fastcall sub_102AABF0(int a1, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // esi
  int v5; // ebp
  int j; // edi
  int v7; // ecx
  int i; // [esp+4h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-18h]
  int v11; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  sub_102AAA10(a1, a2, &v11);
  v2 = 0;
  v10 = v14;
  result = v11;
  for ( i = 0; v2 < v10; i = v2 )
  {
    v4 = *(_DWORD *)(result + 4 * v2);
    if ( v4 )
    {
      ++*(_BYTE *)(v4 + 46);
      v5 = *(_DWORD *)(v4 + 12);
      for ( j = 0; j < v5; ++j )
      {
        v7 = *(_DWORD *)(*(_DWORD *)v4 + 4 * j);
        if ( v7 )
          sub_102AD190(v7);
      }
      *(_BYTE *)(v4 + 47) &= ~1u;
      *(_DWORD *)(v4 + 12) = 0;
      if ( (*(_BYTE *)(v4 + 46))-- == 1 )
        sub_102AA630(v4);
      sub_1011A810((int *)v4);
      result = v11;
      v2 = i;
    }
    ++v2;
  }
  v14 = 0;
  if ( v13 >= 0 )
  {
    if ( result )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      result = 0;
      v11 = 0;
    }
    v12 = 0;
  }
  v15 = result;
  if ( v13 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
