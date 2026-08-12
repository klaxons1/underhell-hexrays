int __fastcall sub_103395E0(int a1, int a2, int a3)
{
  int result; // eax
  int *v4; // esi
  int v5; // edi
  int *v6; // ecx

  result = *(_DWORD *)(a1 + 248);
  v4 = (int *)(a1 + 248);
  v5 = result | 0x20000;
  if ( result != (result | 0x20000) )
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
        result = sub_100194B0(v6, 248);
      *v4 = v5;
    }
  }
  return result;
}
