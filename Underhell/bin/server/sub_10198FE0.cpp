int sub_10198FE0()
{
  int result; // eax
  int v1; // ecx
  int v2; // edi
  int v3; // esi
  float v4[3]; // [esp+0h] [ebp-18h] BYREF
  float v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * result;
      v3 = *(_DWORD *)(12 * result + v1);
      if ( sub_1018ABA0((_DWORD *)v3) )
      {
        sub_1018AD00((float *)v3, v5, 0);
        sub_1018AD00((float *)v3, v4, 1);
        if ( *(float *)(dword_106B82D4 + 44) > (double)v5[2] || *(float *)(dword_106B82D4 + 44) > (double)v4[2] )
          *(_WORD *)(v3 + 40) |= 2u;
      }
      v1 = dword_10632624;
      result = *(_DWORD *)(v2 + dword_10632624 + 8);
    }
    while ( result != -1 );
  }
  return result;
}
