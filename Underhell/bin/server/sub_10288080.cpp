int __fastcall sub_10288080(int a1, int a2, int a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // edi
  int *v6; // ecx

  v3 = (int *)(a1 + 824);
  result = *(_DWORD *)(a1 + 824) == 0;
  v5 = result;
  if ( *(_DWORD *)(a1 + 824) != result )
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
        result = sub_100194B0(v6, 824);
      *v3 = v5;
    }
  }
  return result;
}
