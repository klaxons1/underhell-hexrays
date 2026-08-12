int sub_10154880()
{
  int i; // esi
  int result; // eax
  int v2; // ecx

  for ( i = dword_1069E3D8 - 1; i >= 0; --i )
  {
    result = dword_1069E3CC;
    v2 = dword_1069E3E4[4 * *(unsigned __int16 *)(dword_1069E3CC + 2 * i)];
    if ( v2 )
      result = sub_100E0C80(v2);
  }
  dword_1069E3D8 = 0;
  return result;
}
