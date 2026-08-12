float *__thiscall sub_10178470(int this, float a2, float *a3)
{
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  float *v7; // eax
  float *v8; // ecx
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  int v14; // eax
  double v15; // st7
  int v16; // edx
  int v17; // eax
  double v18; // st6
  float *result; // eax
  float v20; // [esp+0h] [ebp-1Ch]
  float v21; // [esp+4h] [ebp-18h]
  float v22; // [esp+14h] [ebp-8h]

  if ( *(_BYTE *)(this + 568) )
  {
    sub_1021CBC0(*(_DWORD *)(this + 572));
    v4 = 0;
    if ( *(int *)(this + 20) > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *(_DWORD *)(this + 16);
        *(float *)(v5 + v6 + 12) = *(float *)(this + 540);
        v7 = (float *)(v5 + v6 + 12);
        ++v4;
        v7[1] = *(float *)(this + 544);
        v7[2] = *(float *)(this + 548);
        v8 = (float *)(v5 + *(_DWORD *)(this + 16));
        *v8 = *v7;
        v5 += 36;
        v8[1] = v7[1];
        v8[2] = v7[2];
      }
      while ( v4 < *(_DWORD *)(this + 20) );
    }
    v9 = *(float *)(this + 540) - *(float *)(this + 552);
    v10 = v9 * v9;
    v11 = *(float *)(this + 544) - *(float *)(this + 556);
    v12 = *(float *)(this + 548) - *(float *)(this + 560);
    v21 = v12 * v12 + v11 * v11 + v10;
    v22 = off_10689708(v21) + *(float *)(this + 564);
    sub_1021CC20(this + 8);
    v20 = v22 / (double)(*(_DWORD *)(this + 20) - 1);
    sub_1021CEA0(v20, this + 536);
    sub_1021CCA0(this + 8, 5.0);
    *(_BYTE *)(this + 568) = 0;
  }
  v13 = (double)(*(_DWORD *)(this + 20) - 1) * a2;
  v14 = (int)v13;
  v15 = v13 - (double)(int)v13;
  v16 = 9 * v14;
  v17 = *(_DWORD *)(this + 16);
  v18 = *(float *)(v17 + 4 * v16 + 60);
  result = (float *)(v17 + 4 * v16);
  *a3 = (v18 - result[6]) * v15 + result[6];
  a3[1] = (result[16] - result[7]) * v15 + result[7];
  a3[2] = v15 * (result[17] - result[8]) + result[8];
  return result;
}
