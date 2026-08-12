int __thiscall sub_10072EC0(float *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st3
  double v5; // st7
  double v6; // st6
  int v7; // eax
  int v8; // eax
  int v9; // esi
  char v10; // al
  char v11; // al
  double v12; // st6
  double v13; // st7
  int v14; // eax
  int v15; // eax
  int v16; // esi
  char v17; // al
  double v18; // st6
  double v19; // st7
  float *v20; // eax
  float v22; // [esp+14h] [ebp-34h]
  float v23; // [esp+18h] [ebp-30h]
  float v24[3]; // [esp+20h] [ebp-28h] BYREF
  float v25; // [esp+2Ch] [ebp-1Ch]
  float v26; // [esp+30h] [ebp-18h]
  float v27; // [esp+34h] [ebp-14h]
  float v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+3Ch] [ebp-Ch]
  int v30; // [esp+40h] [ebp-8h]
  int v31; // [esp+44h] [ebp-4h]

  v2 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  v25 = *v2 - this[491];
  v26 = v2[1] - this[492];
  v27 = v2[2] - this[493];
  v3 = off_103EDFEC();
  v31 = (int)(0.2 * v3);
  if ( v31 < 1 )
    v31 = 1;
  v30 = 0;
  v28 = v3 / (double)v31;
  do
  {
    v29 = sub_10115FB0();
    v22 = (double)v29 * 0.000030518509 * 5.0 - 2.5;
    v29 = sub_10115FB0();
    v23 = (double)v29 * 0.000030518509 * 5.0 - 2.5;
    v29 = sub_10115FB0();
    v4 = (double)v30;
    v5 = (double)v29 * 0.000030518509 * 5.0 - 2.5 + v28 * v27 * v4 + this[493];
    v6 = v26 * v28 * v4 + this[492] + v23;
    v24[0] = v25 * v28 * v4 + this[491] + v22;
    v24[1] = v6;
    v24[2] = v5;
    v7 = sub_100F29B0("effects/bubble");
    v8 = sub_100F2B60(60, v7, v24);
    v9 = v8;
    if ( v8 )
    {
      *(float *)(v8 + 44) = 0.0;
      *(float *)(v8 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              0.75,
                              1.25);
      *(float *)(v9 + 36) = 0.0;
      *(float *)(v9 + 56) = 0.0;
      v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 128, 255);
      *(_BYTE *)(v9 + 48) = v10;
      *(_BYTE *)(v9 + 49) = v10;
      *(_BYTE *)(v9 + 50) = v10;
      *(_WORD *)(v9 + 51) = 255;
      v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 2);
      *(_BYTE *)(v9 + 53) = v11;
      *(_BYTE *)(v9 + 54) = v11;
      v12 = v26 * 64.0;
      v13 = 64.0 * v27 + 32.0;
      *(float *)(v9 + 24) = v25 * 64.0;
      *(float *)(v9 + 28) = v12;
      *(float *)(v9 + 32) = v13;
    }
    v14 = sub_100F29B0("effects/splash2");
    v15 = sub_100F2B60(60, v14, v24);
    v16 = v15;
    if ( v15 )
    {
      *(float *)(v15 + 44) = 0.0;
      *(float *)(v15 + 40) = 0.2;
      v29 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      *(float *)(v16 + 36) = (float)v29;
      v29 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, -4, 4);
      *(float *)(v16 + 56) = (float)v29;
      v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 200, 255);
      *(_BYTE *)(v16 + 48) = v17;
      *(_BYTE *)(v16 + 49) = v17;
      *(_BYTE *)(v16 + 50) = v17;
      *(_DWORD *)(v16 + 51) = 134348928;
      v18 = v26 * 64.0;
      v19 = 64.0 * v27 + 32.0;
      *(float *)(v16 + 24) = v25 * 64.0;
      *(float *)(v16 + 28) = v18;
      *(float *)(v16 + 32) = v19;
    }
    ++v30;
  }
  while ( v30 < v31 );
  v20 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  this[491] = *v20;
  this[492] = v20[1];
  this[493] = v20[2];
  return sub_10027160(this);
}
