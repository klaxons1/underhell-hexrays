int __cdecl sub_10103130(float *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int i; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v7; // edi
  _WORD v9[128]; // [esp+Ch] [ebp-200h] BYREF
  _WORD Src[128]; // [esp+10Ch] [ebp-100h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(**(_DWORD **)a1 + 156);
  v3 = 0;
  for ( i = 0; i < v2; ++i )
  {
    if ( !i || (*(_DWORD *)(*(_DWORD *)(v1 + 44) + 4 * i) & (_DWORD)a1[3]) != 0 )
    {
      Src[i] = v3;
      v9[v3++] = i;
    }
    else
    {
      Src[i] = -1;
    }
  }
  v5 = (2 * (v2 + 25 * v3) + 23) & 0xFFFFFFFC;
  v6 = (*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, v5);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 0;
    *(_WORD *)(v6 + 12) = 0;
  }
  sub_10101DA0(v6, a1, v5, Src, v9, v3);
  return v7;
}
