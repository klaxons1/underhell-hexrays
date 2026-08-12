int __fastcall sub_1001BE90(int a1)
{
  int *v1; // esi
  int result; // eax
  int v3; // edi
  int *v4; // ecx

  v1 = (int *)(a1 + 1536);
  result = *(_DWORD *)(a1 + 1536) == 0;
  v3 = result;
  if ( *(_DWORD *)(a1 + 1536) != result )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *v1 = v3;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        result = sub_100194B0(v4, 1536);
      *v1 = v3;
    }
  }
  return result;
}
