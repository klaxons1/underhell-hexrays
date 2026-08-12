int __cdecl sub_101BDD70(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int i; // edi
  int v7; // eax
  int v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ebp
  double v14; // st6
  int result; // eax
  double v16; // st5
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  bool v22; // zf
  _BYTE *v23; // ecx
  bool v24; // cc
  int v25; // [esp+14h] [ebp-5Ch]
  int v26; // [esp+20h] [ebp-50h]
  int v27; // [esp+24h] [ebp-4Ch]
  int v28; // [esp+28h] [ebp-48h]
  int v29; // [esp+40h] [ebp-30h]
  int v30; // [esp+44h] [ebp-2Ch]
  int v31; // [esp+48h] [ebp-28h]
  int v32; // [esp+48h] [ebp-28h]
  int v33; // [esp+4Ch] [ebp-24h]
  int v34; // [esp+50h] [ebp-20h]

  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
  {
    v7 = *(_DWORD *)(a2 + 12);
    v8 = 0;
    if ( v7 > 0 )
    {
      v9 = *(_DWORD *)(a2 + 8);
      do
      {
        v10 = *(_DWORD *)(a2 + 8) * (v8 + i * v7);
        v11 = 0;
        if ( v9 > 0 )
        {
          v12 = 4 * v10;
          do
          {
            v31 = *(unsigned __int8 *)(v12 + *(_DWORD *)a2 + 3);
            ++v11;
            v12 += 4;
            *(float *)(v12 + a6 - 4) = fabs(*(float *)(v12 + a6 - 4) - (double)v31);
            v9 = *(_DWORD *)(a2 + 8);
          }
          while ( v11 < v9 );
        }
        v7 = *(_DWORD *)(a2 + 12);
        ++v8;
      }
      while ( v8 < v7 );
    }
  }
  v13 = a4;
  v33 = (a4 >> 1) - ((a4 * *(_DWORD *)(a1 + 20)) >> 1);
  v34 = (a3 >> 1) - ((a3 * *(_DWORD *)(a1 + 20)) >> 1);
  if ( *(float *)(a2 + 76) < 0.0 )
    v14 = 102.0;
  else
    v14 = *(float *)(a2 + 76) * 255.0;
  result = a4 * a3;
  if ( a5 )
    result *= a5;
  v16 = 1.0 / (double)result;
  v27 = 0;
  if ( *(int *)(a2 + 28) > 0 )
  {
    v28 = (a5 >> 1) - ((a5 * *(_DWORD *)(a1 + 20)) >> 1);
    do
    {
      v17 = *(_DWORD *)(a2 + 24);
      v18 = 0;
      v32 = 0;
      if ( v17 > 0 )
      {
        v26 = v33;
        do
        {
          v19 = *(_DWORD *)(a2 + 20);
          v20 = 4 * v19 * (v18 + v27 * v17);
          v30 = v20;
          v29 = 0;
          if ( v19 > 0 )
          {
            v25 = v34;
            do
            {
              v21 = *(_DWORD *)(a2 + 4);
              v22 = *(_BYTE *)(v21 + v20 + 3) == 0xFF;
              v23 = (_BYTE *)(v21 + v20 + 3);
              if ( !v22 && 0.0 * v16 > v14 )
                *v23 = -1;
              v25 += a3;
              v20 = v30 + 4;
              v24 = ++v29 < *(_DWORD *)(a2 + 20);
              v30 += 4;
            }
            while ( v24 );
            v13 = a4;
            v18 = v32;
          }
          v17 = *(_DWORD *)(a2 + 24);
          v26 += v13;
          v32 = ++v18;
        }
        while ( v18 < v17 );
      }
      v28 += a5;
      result = ++v27;
    }
    while ( v27 < *(_DWORD *)(a2 + 28) );
  }
  return result;
}
