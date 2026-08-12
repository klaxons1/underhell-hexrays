void __thiscall sub_10157DF0(_DWORD *this, float *a2, float a3, float a4)
{
  int v4; // esi
  double v5; // st6
  double v6; // st6
  double v7; // st7
  double v8; // st6
  float *v9; // eax

  v4 = this[1];
  v5 = a3;
  if ( !*(_BYTE *)(v4 + 3244) && 0.0 == *(float *)(v4 + 4136) )
  {
    if ( a3 > 30.0 )
      v5 = 30.0;
    v6 = v5 - (*(float *)(this[2] + 68) * a2[1] + *a2 * *(float *)(this[2] + 64) + *(float *)(this[2] + 72) * a2[2]);
    if ( v6 > 0.0 )
    {
      v7 = v6;
      v8 = a3 * a4 * *(float *)(dword_106B31C8 + 16) * *(float *)(v4 + 4512);
      if ( v8 <= v7 )
        v7 = v8;
      v9 = (float *)this[2];
      v9[16] = *a2 * v7 + v9[16];
      v9[26] = *a2 * v7 + v9[26];
      v9[17] = a2[1] * v7 + v9[17];
      v9[27] = a2[1] * v7 + v9[27];
      v9[18] = v7 * a2[2] + v9[18];
      v9[28] = v7 * a2[2] + v9[28];
    }
  }
}
