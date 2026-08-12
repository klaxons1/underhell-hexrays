int __fastcall sub_1038F680(int a1, int a2, int a3)
{
  unsigned int *v3; // esi
  int result; // eax
  unsigned int v5; // edi
  int *v6; // ecx

  v3 = (unsigned int *)(a1 + 248);
  result = *(_DWORD *)(a1 + 248) >> 23;
  if ( (*(_DWORD *)(a1 + 248) & 0x800000) != 0 )
  {
    v5 = *v3 & 0xFF7FFFFF;
    if ( *v3 != v5 )
    {
      result = a1;
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *v3 = v5;
      }
      else
      {
        v6 = *(int **)(a1 + 24);
        if ( v6 )
          result = sub_100194B0(v6, 248);
        *v3 = v5;
      }
    }
  }
  return result;
}
