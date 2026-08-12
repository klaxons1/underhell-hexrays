int __fastcall sub_100E0C80(int a1)
{
  unsigned int *v1; // esi
  int result; // eax
  unsigned int v3; // edi
  int *v4; // ecx

  v1 = (unsigned int *)(a1 + 192);
  result = *(_DWORD *)(a1 + 192) >> 3;
  if ( (*(_DWORD *)(a1 + 192) & 8) != 0 )
  {
    v3 = *v1 & 0xFFFFFFF7;
    if ( *v1 != v3 )
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
          result = sub_100194B0(v4, 192);
        *v1 = v3;
      }
    }
  }
  return result;
}
