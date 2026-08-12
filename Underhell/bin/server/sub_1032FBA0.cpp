int __fastcall sub_1032FBA0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  unsigned int *v5; // edi
  unsigned int v6; // esi
  int *v7; // ecx

  result = 3;
  if ( a4 == 3 )
  {
    result = *(_DWORD *)(a1 + 248);
    v5 = (unsigned int *)(a1 + 248);
    v6 = result & 0xFFFFFFFD;
    if ( result != (result & 0xFFFFFFFD) )
    {
      result = a1;
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        ++dword_106E570C;
        *v5 = v6;
        return result;
      }
      v7 = *(int **)(a1 + 24);
      if ( v7 )
        result = sub_100194B0(v7, 248);
      *v5 = v6;
    }
    ++dword_106E570C;
  }
  else if ( a3 == 3 )
  {
    --dword_106E570C;
  }
  return result;
}
