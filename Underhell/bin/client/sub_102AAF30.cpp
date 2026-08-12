int __cdecl sub_102AAF30(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edi

  if ( !dword_10482954 )
    return 0;
  if ( a1 )
    v2 = ~(dword_10482984 - 1) & (dword_10482984 + a1 - 1);
  else
    v2 = dword_10482984;
  v3 = dword_10482970 + v2;
  v4 = dword_10482970;
  if ( dword_10482970 + v2 > (unsigned int)dword_10482974 && !sub_1022E130(&dword_10482970, dword_10482970 + v2) )
    return 0;
  result = v4;
  dword_10482970 = v3;
  return result;
}
