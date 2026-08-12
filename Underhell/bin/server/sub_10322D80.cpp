int __fastcall sub_10322D80(int a1, float a2)
{
  int result; // eax
  float *v4; // esi
  int *v5; // ecx

  result = *(_DWORD *)(a1 + 248) >> 17;
  if ( (*(_DWORD *)(a1 + 248) & 0x20000) == 0 )
  {
    v4 = (float *)(a1 + 3668);
    if ( *(_DWORD *)(a1 + 3668) != LODWORD(a2) )
    {
      result = a1;
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *v4 = a2;
      }
      else
      {
        v5 = *(int **)(a1 + 24);
        if ( v5 )
          result = sub_100194B0(v5, 3668);
        *v4 = a2;
      }
    }
  }
  return result;
}
