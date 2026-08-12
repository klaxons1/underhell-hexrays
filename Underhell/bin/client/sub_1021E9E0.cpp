void __thiscall sub_1021E9E0(float *this, _DWORD *a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ecx
  float *v6; // edx
  float *v7; // ebx
  int v8; // ebp
  double v9; // st7
  double v10; // st6
  int v11; // eax
  float *v12; // ebp
  float i; // [esp+8h] [ebp-14h]
  float v15; // [esp+10h] [ebp-Ch] BYREF
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]

  v4 = 0;
  for ( i = this[11] * 0.0174532925199433;
        v4 < a2[10];
        *v12 = *v12
             + (-((atan2(v16, v15) + 3.141592653589793) * 57.29577951308232) * 0.0174532925199433 + i - *v12) * this[12] )
  {
    v5 = v4 & 3;
    v6 = (float *)(a2[1517] + 4 * (v5 + v4 / 4 * a2[1581]));
    v7 = (float *)(a2[1519] + 4 * (v5 + v4 / 4 * a2[1583]));
    v8 = v4 / 4 * a2[1585];
    v9 = v7[4];
    v10 = v6[4];
    v15 = *v6 - *v7;
    v11 = a2[1521];
    v16 = v10 - v9;
    v12 = (float *)(v11 + 4 * (v5 + v8));
    v17 = 0.0;
    off_103EDFF0(&v15);
    ++v4;
  }
}
