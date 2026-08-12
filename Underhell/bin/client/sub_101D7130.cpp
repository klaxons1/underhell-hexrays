int __stdcall sub_101D7130(int a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 v3; // al
  int v4; // esi
  int v5; // edx
  int v6; // edx
  int result; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // edx

  v2 = *a2;
  *(_BYTE *)a1 = *a2;
  v3 = a2[1];
  *(_BYTE *)(a1 + 1) = v3;
  v4 = v2;
  if ( v2 <= v3 )
  {
    v8 = *(unsigned __int8 *)(a1 + 1);
    *(_BYTE *)(a1 + 2) = (char)(v3 + 4 * v4 + 2) / 5;
    v9 = (int)((unsigned __int64)(1717986919LL * (3 * v4 + 2 * v8 + 2)) >> 32) >> 1;
    *(_BYTE *)(a1 + 3) = v9 + (v9 < 0);
    v10 = *(unsigned __int8 *)(a1 + 1);
    *(_BYTE *)(a1 + 4) = (char)(3 * *(_BYTE *)(a1 + 1) + 2 * v4 + 2) / 5;
    v11 = (int)((unsigned __int64)(1717986919LL * (v4 + 4 * v10 + 2)) >> 32) >> 1;
    result = v11 + (v11 >> 31);
    *(_WORD *)(a1 + 5) = (unsigned __int8)result;
    *(_BYTE *)(a1 + 7) = -1;
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 1);
    *(_BYTE *)(a1 + 2) = (char)(v3 + 6 * v4 + 3) / 7;
    v6 = (int)((unsigned __int64)(2454267027LL * (5 * v4 + 2 * v5 + 3)) >> 32) >> 2;
    *(_BYTE *)(a1 + 3) = v6 + (v6 < 0);
    *(_BYTE *)(a1 + 4) = (char)(3 * (*(_BYTE *)(a1 + 1) + 1) + 4 * v4) / 7;
    *(_BYTE *)(a1 + 5) = (char)(3 * v4 + 3 + 4 * *(_BYTE *)(a1 + 1)) / 7;
    *(_BYTE *)(a1 + 6) = (char)(5 * *(_BYTE *)(a1 + 1) + 2 * v4 + 3) / 7;
    result = (v4 + 6 * *(unsigned __int8 *)(a1 + 1) + 3) / 7;
    *(_BYTE *)(a1 + 7) = result;
  }
  return result;
}
