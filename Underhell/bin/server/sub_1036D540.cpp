int __fastcall sub_1036D540(int a1)
{
  int result; // eax
  int *v2; // esi
  int v3; // edi
  int *v4; // ecx

  result = *(_DWORD *)(a1 + 248);
  v2 = (int *)(a1 + 248);
  v3 = result | 2;
  if ( result != (result | 2) )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *v2 = v3;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        result = sub_100194B0(v4, 248);
      *v2 = v3;
    }
  }
  return result;
}
