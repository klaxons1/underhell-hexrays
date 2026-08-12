int __fastcall sub_100E13B0(int a1, int a2, int a3)
{
  int result; // eax
  unsigned int *v4; // esi
  unsigned int v5; // edi
  int *v6; // ecx

  result = *(_DWORD *)(a1 + 192);
  v4 = (unsigned int *)(a1 + 192);
  v5 = result & 0xFFFFFFEF;
  if ( result != (result & 0xFFFFFFEF) )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *v4 = v5;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        result = sub_100194B0(v6, 192);
      *v4 = v5;
    }
  }
  return result;
}
