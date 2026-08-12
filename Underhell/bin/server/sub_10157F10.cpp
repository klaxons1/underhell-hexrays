void __thiscall sub_10157F10(_DWORD *this, float a2, float a3)
{
  int v4; // ecx
  double v5; // st7
  int v6; // edx
  int v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // st5
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // rt2
  float *v16; // eax
  double v17; // st7
  float *v18; // esi
  double v19; // st6
  double v20; // st6
  float *v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st7
  double v25; // st6
  float *v26; // eax
  double v27; // st5
  float *v28; // eax
  double v29; // st5
  double v30; // rt2
  double v31; // rtt
  float *v32; // esi
  float v33; // [esp+8h] [ebp-54h]
  float v34; // [esp+Ch] [ebp-50h]
  _BYTE v35[12]; // [esp+14h] [ebp-48h] BYREF
  float v36[3]; // [esp+20h] [ebp-3Ch] BYREF
  float v37[3]; // [esp+2Ch] [ebp-30h] BYREF
  float v38[3]; // [esp+38h] [ebp-24h] BYREF
  float v39; // [esp+44h] [ebp-18h]
  float v40; // [esp+48h] [ebp-14h]
  float v41; // [esp+4Ch] [ebp-10h]
  float v42; // [esp+50h] [ebp-Ch]
  float v43; // [esp+54h] [ebp-8h]
  float v44; // [esp+58h] [ebp-4h]

  v4 = this[2];
  v44 = *(float *)(dword_106B7104 + 44) * a2;
  sub_104222B0(v4 + 12, v37, v38, v35);
  v5 = a2;
  v6 = this[2];
  if ( (*(_DWORD *)(v6 + 36) & 0x20000) != 0 )
  {
    v5 = v5 * 0.5;
    a2 = v5;
  }
  v42 = *(float *)(v6 + 44) * v5;
  v43 = v5 * *(float *)(v6 + 48);
  off_10689714();
  off_10689714();
  v7 = this[2];
  v39 = v37[0] * v42 + v38[0] * v43;
  v40 = v38[1] * v43 + v37[1] * v42;
  v41 = v42 * v37[2] + v43 * v38[2] + *(float *)(v7 + 52) * a2;
  v36[2] = v41;
  v36[0] = v39;
  v36[1] = v40;
  v8 = off_10689714();
  v9 = v44;
  if ( v44 >= v8 )
  {
    v11 = v39;
    v14 = v8;
    v13 = v41;
    v15 = v14;
    v12 = v40;
    v9 = v15;
  }
  else
  {
    v10 = v9 / v8;
    v11 = v39 * v10;
    v12 = v40 * v10;
    v13 = v10 * v41;
  }
  if ( a3 <= 0.0 )
  {
    v26 = (float *)this[2];
    v25 = a3;
    v26[16] = v11;
    v26[17] = v12;
    v27 = v13;
    v24 = 0.0;
    v26[18] = v27;
  }
  else
  {
    v33 = v9;
    (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 80))(this, v36, LODWORD(v33), LODWORD(a3));
    v16 = (float *)this[2];
    v34 = v16[17] * v16[17] + v16[16] * v16[16] + v16[18] * v16[18];
    v17 = off_10689708(v34);
    if ( v17 < 1.0 )
    {
      v18 = (float *)this[2];
      v18[16] = 0.0;
      v18[17] = 0.0;
      v18[18] = 0.0;
      return;
    }
    v19 = v44 * 0.25;
    if ( v19 <= v17 )
      v19 = v17;
    v20 = v17 - v19 * (*(float *)(this[1] + 4512) * *(float *)(dword_106B7344 + 44)) * *(float *)(dword_106B31C8 + 16);
    if ( v20 < 0.0 )
      v20 = 0.0;
    v21 = (float *)this[2];
    v22 = v20 / v17;
    v21[16] = v21[16] * v22;
    v21[17] = v21[17] * v22;
    v23 = v22 * v21[18];
    v24 = 0.0;
    v21[18] = v23;
    v25 = a3;
  }
  v28 = (float *)this[2];
  v29 = *(float *)(dword_106B31C8 + 16);
  v30 = v28[17] * v29 + v28[39];
  v31 = v29 * v28[18] + v28[40];
  v28[38] = v28[16] * v29 + v28[38];
  v28[39] = v30;
  v28[40] = v31;
  if ( v25 < v24 )
  {
    v32 = (float *)this[2];
    v32[16] = v24;
    v32[17] = v24;
    v32[18] = v24;
  }
}
