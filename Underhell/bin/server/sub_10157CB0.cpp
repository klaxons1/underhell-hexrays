void __thiscall sub_10157CB0(_DWORD *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st7
  float *v10; // eax
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st7
  float v16; // [esp+0h] [ebp-10h]
  float v17; // [esp+Ch] [ebp-4h]

  if ( 0.0 == *(float *)(this[1] + 4136) )
  {
    v2 = (float *)this[2];
    v16 = v2[17] * v2[17] + v2[16] * v2[16] + v2[18] * v2[18];
    v3 = off_10689708(v16);
    v17 = v3;
    if ( v3 >= 0.1 )
    {
      if ( sub_101C5260(this[1]) )
      {
        v4 = *(float *)(this[1] + 4512) * *(float *)(dword_106B7344 + 44);
        if ( v17 >= (double)*(float *)(dword_106B6F54 + 44) )
        {
          v5 = v4 * v17;
          v6 = v17;
        }
        else
        {
          v5 = v4 * *(float *)(dword_106B6F54 + 44);
          v6 = v17;
        }
        v7 = v5 * *(float *)(dword_106B31C8 + 16);
      }
      else
      {
        v6 = v17;
        v7 = (float)0.0;
      }
      v8 = v6 - v7;
      if ( v8 < 0.0 )
        v8 = 0.0;
      if ( v6 == v8 )
      {
        v9 = v8;
      }
      else
      {
        v9 = v8 / v6;
        v10 = (float *)this[2];
        v10[16] = v9 * v10[16];
        v10[17] = v10[17] * v9;
        v10[18] = v10[18] * v9;
      }
      v11 = (float *)this[2];
      v12 = 1.0 - v9;
      v13 = v11[16] * v12;
      v14 = v11[17] * v12;
      v15 = v12 * v11[18];
      v11[26] = v11[26] - v13;
      v11[27] = v11[27] - v14;
      v11[28] = v11[28] - v15;
    }
  }
}
