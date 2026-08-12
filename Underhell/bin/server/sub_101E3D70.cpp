void __thiscall sub_101E3D70(float *this)
{
  int (__thiscall *v2)(float *, _BYTE *); // edx
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st1
  double v8; // rt2
  double v9; // st1
  double v10; // st3
  double v11; // st0
  double v12; // rt0
  double v13; // st3
  double v14; // rt1
  double v15; // st3
  double v16; // rt2
  double v17; // st3
  _BYTE v18[8]; // [esp+10h] [ebp-48h] BYREF
  float v19; // [esp+18h] [ebp-40h]
  int v20; // [esp+1Ch] [ebp-3Ch] BYREF
  float v21; // [esp+20h] [ebp-38h]
  float v22; // [esp+24h] [ebp-34h]
  int v23; // [esp+28h] [ebp-30h] BYREF
  float v24; // [esp+2Ch] [ebp-2Ch]
  float v25; // [esp+30h] [ebp-28h]
  float v26; // [esp+34h] [ebp-24h] BYREF
  float v27; // [esp+38h] [ebp-20h]
  float v28; // [esp+3Ch] [ebp-1Ch]
  float v29; // [esp+40h] [ebp-18h]
  float v30; // [esp+44h] [ebp-14h]
  int v31; // [esp+48h] [ebp-10h]
  float v32; // [esp+4Ch] [ebp-Ch]
  float v33; // [esp+50h] [ebp-8h]
  int v34; // [esp+54h] [ebp-4h]

  if ( ((_DWORD)this[59] & 0x2000000) != 0 && *((_DWORD *)this + 55) == 1 )
  {
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 904))(this, &v26);
    v2 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504);
    *(float *)&v23 = v26 * 10.0;
    v24 = v27 * 10.0;
    v25 = 10.0 * v28;
    v3 = (float *)v2(this, v18);
    v4 = *v3 + *(float *)&v23;
    v5 = v3[1] + v24;
    v19 = v3[2] + v25;
    v6 = v28 * 0.0;
    v7 = v27 * 8.0 - v6;
    *(float *)&v23 = v7;
    v8 = v7;
    v9 = v6 - v26 * 8.0;
    v24 = v9;
    v10 = v26 * 0.0 - v27 * 0.0;
    *(float *)&v34 = v4 - v8;
    v33 = v5 - v9;
    v11 = v19 - v10;
    v32 = v11;
    v20 = v34;
    v21 = v33;
    v22 = v11 - 8.0;
    v12 = v10;
    v13 = v4 + *(float *)&v23;
    *(float *)&v31 = v13;
    v14 = v13;
    v15 = v5 + v24;
    v30 = v15;
    v16 = v15;
    v17 = v12 + v19;
    v29 = v17;
    *(float *)&v23 = v14;
    v24 = v16;
    v25 = v17 + 8.0;
    sub_1011BC50((float *)&v23, (float *)&v20, 255, 0, 0, 0, 0.0);
    v20 = v34;
    v21 = v33;
    v22 = v32 + 8.0;
    v23 = v31;
    v24 = v30;
    v25 = v29 - 8.0;
    sub_1011BC50((float *)&v23, (float *)&v20, 255, 0, 0, 0, 0.0);
  }
  sub_100DF330(this);
}
