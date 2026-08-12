int __usercall sub_101D9BD0@<eax>(float *a1@<eax>, float *a2@<edx>, int a3)
{
  int v4; // ecx
  double v5; // st7
  int v6; // esi
  int result; // eax
  double v8; // st7
  int v9; // edi
  int v10; // esi
  double v11; // st5
  double v12; // st6
  int v13; // ebp
  double v14; // st6
  int v15; // ebp
  double v16; // st5
  double v17; // st7
  double v18; // st6
  double v19; // st5
  int v20; // [esp+Ch] [ebp-10h]
  int v21; // [esp+10h] [ebp-Ch]
  int v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]
  int v24; // [esp+20h] [ebp+4h]
  int v25; // [esp+20h] [ebp+4h]

  if ( a3 < 16 )
    memset32(&a2[a3], 1203982336, 16 - a3);
  v4 = 1;
  *a2 = *a1;
  v20 = 1;
  v5 = a1[1];
  v6 = a3 - 1;
  result = a3 - 2;
  a2[1] = v5;
  v24 = a3 - 1;
  if ( a3 - 2 >= 4 )
  {
    v8 = (double)v24;
    v9 = 3;
    v10 = a3 - 3;
    v21 = 3;
    result = (int)(a2 + 3);
    v22 = a3 - 3;
    do
    {
      v4 += 4;
      v11 = (double)v20;
      result += 16;
      v20 = v4;
      *(float *)(result - 20) = ((double)(v10 + 1) * *a2 + v11 * a2[1]) / v8;
      v12 = (double)(v9 - 1);
      v13 = v9 + 1;
      v9 += 4;
      *(float *)(result - 16) = (v12 * a2[1] + (double)v22 * *a2) / v8;
      v14 = (double)(v10 - 1);
      v23 = v13;
      v15 = v10 - 2;
      v10 -= 4;
      v22 = v10;
      v16 = (double)v21;
      v21 = v9;
      *(float *)(result - 12) = (v14 * *a2 + v16 * a2[1]) / v8;
      *(float *)(result - 8) = ((double)v23 * a2[1] + (double)v15 * *a2) / v8;
    }
    while ( v4 < a3 - 4 );
    v6 = a3 - 1;
  }
  if ( v4 < v6 )
  {
    v17 = (double)v24;
    result = (int)&a2[v4 + 1];
    v25 = a3 - v4 - 1;
    do
    {
      v18 = (double)v25--;
      ++v4;
      result += 4;
      v19 = (double)v20;
      v20 = v4;
      *(float *)(result - 4) = (v18 * *a2 + v19 * a2[1]) / v17;
    }
    while ( v4 < v6 );
  }
  return result;
}
