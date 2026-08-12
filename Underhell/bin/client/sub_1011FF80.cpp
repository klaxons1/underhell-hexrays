int __thiscall sub_1011FF80(float *this, int a2, int a3, int a4, float a5, float a6)
{
  double v7; // st7
  int result; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // esi
  double v12; // st7
  double v13; // st6
  float v14; // edx
  float v15; // eax
  double v16; // st5
  double v17; // st4
  double v18; // st7
  double v19; // rt1
  double v20; // st7
  int v21; // esi
  double v22; // st7
  unsigned int v23; // ecx
  double v24; // st6
  int v25; // edx
  double v26; // st6
  float v27[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v28; // [esp+1Ch] [ebp-10h]
  float v29; // [esp+20h] [ebp-Ch]
  float v30; // [esp+24h] [ebp-8h]
  int v31; // [esp+28h] [ebp-4h]
  int v32; // [esp+40h] [ebp+14h]

  v7 = a5 + *(double *)this;
  *(double *)this = v7;
  result = (int)ceil(v7 / this[3]);
  v9 = result - *((_DWORD *)this + 2);
  v31 = result;
  if ( v9 > 0 )
  {
    v32 = v9;
    do
    {
      v10 = 0;
      if ( a3 > 0 )
      {
        v11 = a2 + 20;
        do
        {
          (**(void (__thiscall ***)(int, int, int, float *))a4)(a4, a2, v10, v27);
          v12 = this[4];
          v13 = v27[0] * v12;
          v14 = *(float *)(v11 - 16);
          v15 = *(float *)(v11 - 12);
          v16 = v27[1] * v12;
          v28 = *(float *)(v11 - 20);
          v29 = v14;
          v30 = v15;
          ++v10;
          v17 = *(float *)(v11 - 20) - *(float *)(v11 - 8);
          v11 += 36;
          v18 = v12 * v27[2] + (*(float *)(v11 - 48) - *(float *)(v11 - 36)) * a6 + *(float *)(v11 - 48);
          v19 = v16 + (*(float *)(v11 - 52) - *(float *)(v11 - 40)) * a6 + *(float *)(v11 - 52);
          *(float *)(v11 - 56) = v13 + v17 * a6 + *(float *)(v11 - 56);
          *(float *)(v11 - 52) = v19;
          *(float *)(v11 - 48) = v18;
          *(float *)(v11 - 44) = v28;
          *(float *)(v11 - 40) = v29;
          *(float *)(v11 - 36) = v30;
        }
        while ( v10 < a3 );
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a4 + 4))(a4, a2, a3);
      --v32;
    }
    while ( v32 );
    result = v31;
  }
  v20 = (double)v31;
  v21 = 0;
  *((_DWORD *)this + 2) = result;
  v22 = (*(double *)this - (v20 * this[3] - this[3])) / this[3];
  if ( a3 >= 4 )
  {
    result = a2 + 52;
    v23 = ((unsigned int)(a3 - 4) >> 2) + 1;
    v21 = 4 * v23;
    do
    {
      v24 = *(float *)(result - 52);
      result += 144;
      --v23;
      *(float *)(result - 172) = (v24 - *(float *)(result - 184)) * v22 + *(float *)(result - 184);
      *(float *)(result - 168) = (*(float *)(result - 192) - *(float *)(result - 180)) * v22 + *(float *)(result - 180);
      *(float *)(result - 164) = (*(float *)(result - 188) - *(float *)(result - 176)) * v22 + *(float *)(result - 176);
      *(float *)(result - 136) = (*(float *)(result - 160) - *(float *)(result - 148)) * v22 + *(float *)(result - 148);
      *(float *)(result - 132) = (*(float *)(result - 156) - *(float *)(result - 144)) * v22 + *(float *)(result - 144);
      *(float *)(result - 128) = (*(float *)(result - 152) - *(float *)(result - 140)) * v22 + *(float *)(result - 140);
      *(float *)(result - 100) = (*(float *)(result - 124) - *(float *)(result - 112)) * v22 + *(float *)(result - 112);
      *(float *)(result - 96) = (*(float *)(result - 120) - *(float *)(result - 108)) * v22 + *(float *)(result - 108);
      *(float *)(result - 92) = (*(float *)(result - 116) - *(float *)(result - 104)) * v22 + *(float *)(result - 104);
      *(float *)(result - 64) = (*(float *)(result - 88) - *(float *)(result - 76)) * v22 + *(float *)(result - 76);
      *(float *)(result - 60) = (*(float *)(result - 84) - *(float *)(result - 72)) * v22 + *(float *)(result - 72);
      *(float *)(result - 56) = (*(float *)(result - 80) - *(float *)(result - 68)) * v22 + *(float *)(result - 68);
    }
    while ( v23 );
  }
  if ( v21 < a3 )
  {
    result = a2 + 36 * v21 + 16;
    v25 = a3 - v21;
    do
    {
      v26 = *(float *)(result - 16);
      result += 36;
      --v25;
      *(float *)(result - 28) = (v26 - *(float *)(result - 40)) * v22 + *(float *)(result - 40);
      *(float *)(result - 24) = (*(float *)(result - 48) - *(float *)(result - 36)) * v22 + *(float *)(result - 36);
      *(float *)(result - 20) = (*(float *)(result - 44) - *(float *)(result - 32)) * v22 + *(float *)(result - 32);
    }
    while ( v25 );
  }
  return result;
}
