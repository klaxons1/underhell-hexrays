void __thiscall sub_10216EE0(int this, _DWORD *a2, float a3, int a4)
{
  int v5; // ecx
  int v6; // ebx
  int v7; // ecx
  float *v8; // esi
  float *v9; // eax
  double v10; // st7
  long double v11; // st7
  long double v12; // st6
  long double v13; // st5
  long double v14; // st7
  float v15; // [esp+0h] [ebp-38h]
  float v16; // [esp+14h] [ebp-24h]
  float v17; // [esp+18h] [ebp-20h]
  float i; // [esp+1Ch] [ebp-1Ch]
  float v19; // [esp+20h] [ebp-18h]
  float v20; // [esp+24h] [ebp-14h]
  float v21; // [esp+28h] [ebp-10h]
  float v22; // [esp+2Ch] [ebp-Ch]
  float v23; // [esp+30h] [ebp-8h]
  float v24; // [esp+34h] [ebp-4h]

  if ( *(float *)(this + 48) > 0.0 )
  {
    v5 = 17 * *(_DWORD *)(this + 44);
    v16 = *(float *)&a2[v5 + 22];
    v6 = 0;
    v17 = *(float *)&a2[v5 + 23];
    for ( i = *(float *)&a2[v5 + 24]; v6 < a2[10]; ++v6 )
    {
      v7 = v6 & 3;
      v8 = (float *)(a2[1517] + 4 * (v7 + v6 / 4 * a2[1581]));
      v19 = *v8;
      v20 = v8[4];
      v21 = v8[8];
      v9 = (float *)(a2[1519] + 4 * (v7 + v6 / 4 * a2[1583]));
      v22 = *v9;
      v23 = v9[4];
      v24 = v9[8];
      v15 = (v20 - v17) * (v20 - v17) + (v21 - i) * (v21 - i) + (v19 - v16) * (v19 - v16);
      v10 = off_103EDFE0(v15);
      if ( v10 <= *(float *)(this + 48) )
      {
        v11 = pow(v10 / *(float *)(this + 48), *(float *)(this + 52));
        v12 = v8[4] + ((v20 - v23) * v11 + v23 - v8[4]) * a3;
        v13 = *v8 + (v22 + (v19 - v22) * v11 - *v8) * a3;
        v14 = v8[8] + a3 * (v24 + v11 * (v21 - v24) - v8[8]);
        *v8 = v13;
        v8[4] = v12;
        v8[8] = v14;
      }
    }
  }
}
