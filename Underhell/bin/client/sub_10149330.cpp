int __cdecl sub_10149330(int a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // edi

  v1 = (6 * *(_DWORD *)(a1 + 12) + 4095) & 0xFFFFF000;
  v2 = sub_1001ACB0(&dword_1043C868);
  v3 = 0;
  if ( v2 )
  {
    v3 = v2[1];
    sub_10034930((int)v2);
  }
  else
  {
    v4 = sub_100DDA40(32);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 4) = 1;
      *(_DWORD *)v4 = &ClientWorldListInfo_t::`vftable';
      *(_DWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      *(_DWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)(v4 + 24) = 0;
      *(_BYTE *)(v4 + 28) = 0;
      v3 = v4;
    }
  }
  v5 = *(_DWORD *)(v3 + 16);
  if ( !v5
    || (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4), 1u),
        (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 32))(g_pMemAlloc, v5) < v1) )
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, unsigned int))(*g_pMemAlloc + 12))(g_pMemAlloc, v5, v1);
  }
  *(_DWORD *)(v3 + 16) = v5;
  v6 = v5 + 2 * *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v3 + 20) = v6;
  *(_DWORD *)(v3 + 24) = v6 + 2 * *(_DWORD *)(a1 + 12);
  *(_BYTE *)(v3 + 28) = 1;
  return v3;
}
