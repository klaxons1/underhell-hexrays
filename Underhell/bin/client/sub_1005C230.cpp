void __thiscall sub_1005C230(float *this)
{
  int v2; // edi
  float *v3; // esi
  double v4; // st7
  float *v5; // eax
  float v6; // edx
  float v7; // ecx
  float v8; // eax
  float v9; // edx
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // rt1
  double v16; // st7
  float v17; // [esp+0h] [ebp-44h]
  float v18; // [esp+4h] [ebp-40h]
  float v19[3]; // [esp+20h] [ebp-24h] BYREF
  float v20; // [esp+2Ch] [ebp-18h]
  float v21; // [esp+30h] [ebp-14h]
  float v22; // [esp+34h] [ebp-10h]
  float v23; // [esp+38h] [ebp-Ch]
  float v24; // [esp+3Ch] [ebp-8h]
  float *v25; // [esp+40h] [ebp-4h]

  v2 = 0;
  v3 = this + 316;
  v25 = this + 2272;
  do
  {
    v4 = *v25 * this[305];
    v24 = v4;
    v23 = v4 - v3[309];
    off_103EDFEC();
    v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
    v6 = v5[1];
    v7 = *v5;
    v8 = v5[2];
    v21 = v6;
    v9 = *v3;
    v20 = v7;
    v22 = v8;
    v22 = *(float *)((*(int (__thiscall **)(float *))(LODWORD(v9) + 36))(v3) + 8);
    v10 = v24;
    if ( v24 < 0.000001 )
      v10 = 0.000001;
    v17 = v10;
    sub_10123F00(v17, COERCE_INT(0.0));
    if ( v2 )
    {
      v11 = v3[309] * 40.0;
      v12 = v3[322] * v11;
      v13 = v11;
      v14 = v3[323] * v11;
      v15 = v13 * v3[324];
      v19[0] = v12 + v20;
      v19[1] = v14 + v21;
      v19[2] = v15 + v22;
      sub_10034A30(v3, v19);
    }
    v16 = sub_10034A10(v3, 2);
    v18 = v16 + v23 * 64.0;
    sub_10034AA0(v3, 2, v18);
    ++v25;
    ++v2;
    v3 += 326;
  }
  while ( v2 < 6 );
}
