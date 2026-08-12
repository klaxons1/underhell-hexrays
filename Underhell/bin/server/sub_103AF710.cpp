int __cdecl sub_103AF710(float *a1, int a2, float a3, int a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  int result; // eax
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st5
  int v14; // eax
  float v15; // [esp+0h] [ebp-1Ch]
  float v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+10h] [ebp-Ch] BYREF
  float v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+18h] [ebp-4h]

  if ( a2 )
  {
    v4 = *(float *)a2 - *a1;
    *(float *)&v17 = v4;
    v5 = *(float *)(a2 + 4) - a1[1];
    v18 = v5;
    v19 = *(float *)(a2 + 8) - a1[2];
    v16 = v4 * v4 + v5 * v5;
    v6 = off_10689708(v16);
    v7 = a3;
    if ( v6 <= 0.1 || v7 > v6 )
    {
      *(float *)a4 = *(float *)a2;
      *(float *)(a4 + 4) = *(float *)(a2 + 4);
      v13 = *(float *)(a2 + 8);
      *(float *)(a4 + 8) = *(float *)(a2 + 8);
      v17 = *(int *)a4;
      v14 = *(_DWORD *)(a2 + 40);
      v18 = *(float *)(a4 + 4);
      v19 = v13;
      v15 = v7 - v6;
      return sub_103AF710((int)&v17, v14, v15, a4);
    }
    else
    {
      result = a4;
      v9 = v7 / v6;
      v10 = *(float *)&v17 * v9 + *a1;
      v11 = v9 * v18 + a1[1];
      v12 = v9 * v19 + a1[2];
      *(float *)a4 = v10;
      *(float *)(a4 + 4) = v11;
      *(float *)(a4 + 8) = v12;
    }
  }
  return result;
}
