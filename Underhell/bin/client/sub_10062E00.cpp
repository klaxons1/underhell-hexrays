int __cdecl sub_10062E00(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ecx
  int v6; // esi
  int v7[3]; // [esp+Ch] [ebp-10h] BYREF
  float v8; // [esp+18h] [ebp-4h]
  float v9; // [esp+24h] [ebp+8h]

  result = a1;
  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 4);
  v8 = *(float *)(a1 + 64);
  v4 = dword_103DBBE4;
  v9 = *(float *)(a1 + 60);
  v7[0] = v2;
  v5 = *(_DWORD *)(result + 8);
  v7[1] = v3;
  v7[2] = v5;
  if ( dword_103DBBE4 != -1 )
  {
    result = dword_103DBBD8;
    do
    {
      v6 = 12 * v4;
      sub_100605E0(*(_DWORD *)(v6 + result), (float *)v7, v8, v9);
      result = dword_103DBBD8;
      v4 = *(_DWORD *)(v6 + dword_103DBBD8 + 8);
    }
    while ( v4 != -1 );
  }
  return result;
}
