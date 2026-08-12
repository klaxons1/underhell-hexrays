int __fastcall sub_102CD110(int a1, int a2, int a3)
{
  unsigned int *v3; // edi
  int result; // eax
  unsigned int v5; // esi
  int *v6; // ecx

  *(_DWORD *)(a1 + 1076) = 0;
  v3 = (unsigned int *)(a1 + 248);
  *(_DWORD *)(a1 + 808) = -1;
  result = *(_DWORD *)(a1 + 248);
  v5 = result & 0xFFFFFF7F;
  if ( result != (result & 0xFFFFFF7F) )
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
  return result;
}
