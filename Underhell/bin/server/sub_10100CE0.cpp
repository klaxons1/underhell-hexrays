double __cdecl sub_10100CE0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  double result; // st7
  int i; // esi
  double v7; // st7
  _DWORD v8[4]; // [esp+Ch] [ebp-24h] BYREF
  float v9[4]; // [esp+1Ch] [ebp-14h] BYREF
  float v10; // [esp+2Ch] [ebp-4h]

  v4 = sub_10245550(a2);
  sub_10100370(a1, v4, a2, a3, v8, v9);
  result = 0.0;
  v10 = 0.0;
  for ( i = 0; i < 4; ++i )
  {
    if ( 0.0 != v9[i] )
    {
      v7 = sub_10100A10((_DWORD *)v8[i], a4);
      result = v7 * v9[i] + v10;
      v10 = result;
    }
  }
  return result;
}
