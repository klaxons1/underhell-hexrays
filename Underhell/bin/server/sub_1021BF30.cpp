int __fastcall sub_1021BF30(int a1, int a2, char a3)
{
  int result; // eax
  int *v4; // esi
  int v5; // edi
  int *v6; // ecx

  result = 0;
  if ( !a3 )
    result = 32;
  v4 = (int *)(a1 + 804);
  if ( (*(_DWORD *)(a1 + 804) & 0x20) != result )
  {
    v5 = result | *v4;
    if ( *v4 != v5 )
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
          result = sub_100194B0(v6, 804);
        *v4 = v5;
      }
    }
  }
  return result;
}
