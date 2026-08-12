int __thiscall sub_1040D750(int this, float a2, float a3)
{
  int v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // esi
  int v8; // edx
  double v9; // st7
  double v10; // st7
  float *v11; // eax
  int v12; // edx
  double v13; // st7
  int (__thiscall *v14)(int); // eax
  float *v15; // eax
  double v16; // st7
  int v17; // edx
  int v18; // eax
  float v19; // edx
  float v20; // eax
  bool v21; // c0
  float v22; // [esp+14h] [ebp-50h]
  _BYTE v23[12]; // [esp+24h] [ebp-40h] BYREF
  float v24[3]; // [esp+30h] [ebp-34h] BYREF
  float v25[3]; // [esp+3Ch] [ebp-28h] BYREF
  float v26; // [esp+48h] [ebp-1Ch] BYREF
  float v27; // [esp+4Ch] [ebp-18h]
  float v28; // [esp+50h] [ebp-14h]
  float v29; // [esp+54h] [ebp-10h]
  float v30; // [esp+58h] [ebp-Ch]
  float v31; // [esp+5Ch] [ebp-8h]
  float v32; // [esp+60h] [ebp-4h]
  float v33; // [esp+6Ch] [ebp+8h]

  v4 = sub_100D1940((_DWORD *)this);
  v5 = sub_100D7680(v4);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5);
  v7 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)result + 540))(result, v25, v23);
    v8 = *(_DWORD *)dword_106B31E4;
    v32 = *(float *)(dword_106EFAF4 + 44);
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v8 + 4))(dword_106B31E4, -0.30000001, 0.2);
    v10 = v9 + v32;
    v32 = v10;
    if ( v10 < 0.0 )
      v32 = 0.0;
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
    v12 = *(_DWORD *)v5;
    v29 = v25[0] * v32 + *v11;
    v30 = v25[1] * v32 + v11[1];
    v13 = v32 * v25[2] + v11[2];
    v14 = *(int (__thiscall **)(int))(v12 + 576);
    v31 = v13;
    v15 = (float *)v14(v5);
    v26 = v29 - *v15;
    v27 = v30 - v15[1];
    if ( fabs(v31 - v15[2]) > 70.0 )
      return 39;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 904))(v5, v24);
    v28 = 0.0;
    if ( a2 < 0.7 && v24[1] * v27 + v24[0] * v26 < 0.7 )
      return 40;
    v33 = sub_10018C80(&v26);
    v16 = 48.0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
    {
      if ( (*(_DWORD *)(v7 + 252) & 0x1000) != 0 )
        sub_100DAFD0(v7);
      v17 = *(_DWORD *)(v7 + 252) >> 11;
      v26 = *(float *)(v7 + 476) * 0.34999999;
      v27 = 0.34999999 * *(float *)(v7 + 480);
      if ( (v17 & 1) != 0 )
        sub_100DAE60(v7);
      v18 = *(_DWORD *)(this + 252) >> 11;
      v29 = *(float *)(v7 + 580) + v26;
      v30 = *(float *)(v7 + 584) + v27;
      if ( (v18 & 1) != 0 )
        sub_100DAE60(this);
      v19 = *(float *)(this + 584);
      v20 = *(float *)(this + 588);
      v26 = *(float *)(this + 580);
      v27 = v19;
      v28 = v20;
      v22 = (v26 - v29) * (v26 - v29) + (v19 - v30) * (v19 - v30);
      v21 = off_10689708(v22) > 48.0;
      v16 = 48.0;
      if ( !v21 )
        return 23;
    }
    if ( v16 >= a3 || v16 >= v33 )
      return 23;
    else
      return 39;
  }
  return result;
}
