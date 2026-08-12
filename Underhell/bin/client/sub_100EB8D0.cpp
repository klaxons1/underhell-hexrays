_DWORD *__stdcall sub_100EB8D0(int a1, int a2, int a3, float a4, float a5)
{
  _DWORD *v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  double v9; // st7
  double v10; // st6
  _DWORD *v11; // ebx
  double v12; // st3
  _BYTE *v13; // eax
  _BYTE *v14; // edx
  int v15; // esi
  _DWORD *result; // eax
  _DWORD *v17; // ecx
  _BYTE v18[744]; // [esp+0h] [ebp-304h] BYREF
  _BYTE v19[24]; // [esp+2E8h] [ebp-1Ch] BYREF
  int v20; // [esp+300h] [ebp-4h]

  v5 = v18;
  v6 = 32;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 6;
    --v6;
  }
  while ( v6 );
  v7 = *(_DWORD **)(a1 + 8);
  v8 = (_DWORD *)(a1 + 4);
  v20 = 0;
  if ( v7 != (_DWORD *)(a1 + 4) )
  {
    v9 = a5;
    v10 = a4;
    while ( 1 )
    {
      v11 = (_DWORD *)v7[1];
      if ( v6 >= a3 )
        break;
      *(_DWORD *)(*v7 + 4) = v11;
      *(_DWORD *)v7[1] = *v7;
      v12 = v10 == v9 ? 0.0 : (*(float *)(a2 + 4 * v6) - v10) / (v9 - v10);
      ++v20;
      v13 = &v19[24 * (int)(v12 * -31.999901)];
      *v7 = v13;
      v7[1] = *((_DWORD *)v13 + 1);
      *((_DWORD *)v13 + 1) = v7;
      *(_DWORD *)v7[1] = v7;
      v7 = v11;
      if ( v11 == v8 )
        break;
      v6 = v20;
    }
  }
  v14 = v18;
  v15 = 32;
  do
  {
    result = (_DWORD *)*((_DWORD *)v14 + 1);
    if ( result != (_DWORD *)v14 )
    {
      do
      {
        v17 = (_DWORD *)result[1];
        *result = v8;
        result[1] = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = result;
        *(_DWORD *)result[1] = result;
        result = v17;
      }
      while ( v17 != (_DWORD *)v14 );
    }
    v14 += 24;
    --v15;
  }
  while ( v15 );
  return result;
}
