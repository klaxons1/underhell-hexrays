BOOL __thiscall sub_100A8FB0(float *this)
{
  int (*v2)(void); // eax
  float *v3; // eax
  int v4; // edx
  double v5; // st7
  int v6; // ecx
  int (__thiscall *v7)(float *); // eax
  double v8; // st7
  int (__thiscall *v9)(float *); // eax
  double v10; // st7
  int v11; // ecx
  int (__thiscall *v12)(float *); // eax
  int v13; // eax
  int v14; // ecx
  __int16 v15; // ax
  int (__thiscall *v16)(float *); // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  double v21; // st6
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // rtt
  double v26; // st5
  int v27; // eax
  double v28; // st3
  double v29; // rt1
  double v30; // st5
  double v31; // st6
  double v32; // st7
  float v34[2]; // [esp+4h] [ebp-14h] BYREF
  float v35; // [esp+Ch] [ebp-Ch]
  int v36; // [esp+10h] [ebp-8h]
  float v37; // [esp+14h] [ebp-4h]

  v2 = *(int (**)(void))(*(_DWORD *)this + 32);
  v36 = *(int *)(*((_DWORD *)this + 2) + 152);
  v3 = (float *)v2();
  v4 = *(_DWORD *)this;
  v37 = *v3;
  v5 = *(float *)(*(int (__thiscall **)(float *))(v4 + 36))(this) + v37;
  v6 = *((_DWORD *)this + 2);
  v7 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
  v34[0] = v5 * 0.5 + *(float *)&v36;
  v37 = *(float *)(v6 + 156);
  v8 = *(float *)(v7(this) + 4);
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 36);
  *(float *)&v36 = v8;
  v10 = *(float *)(v9(this) + 4) + *(float *)&v36;
  v11 = *((_DWORD *)this + 2);
  v12 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
  v34[1] = v10 * 0.5 + v37;
  v36 = *(int *)(v11 + 160);
  v13 = v12(this);
  v14 = *((_DWORD *)this + 1);
  v35 = *(float *)(v13 + 8) + *(float *)&v36 + 1.0;
  *(_BYTE *)(v14 + 320) = 0;
  sub_1000E2A0(*((_BYTE **)this + 1), 0);
  v15 = sub_100A8ED0(this, v34, 0);
  if ( (v15 & 0x4030) != 0 )
  {
    sub_1000E2A0(*((_BYTE **)this + 1), v15);
    *(_BYTE *)(*((_DWORD *)this + 1) + 320) = 1;
    v16 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
    v37 = *(float *)(*((_DWORD *)this + 2) + 160);
    v17 = v16(this);
    v18 = *(_DWORD *)this;
    v36 = *(int *)(v17 + 8);
    v19 = (*(int (__thiscall **)(float *))(v18 + 36))(this);
    v35 = (*(float *)(v19 + 8) + *(float *)&v36) * 0.5 + v37;
    v20 = sub_100A8ED0(this, v34, 1);
    if ( (v20 & 0x4030) != 0 )
    {
      *(_BYTE *)(*((_DWORD *)this + 1) + 320) = 2;
      v35 = *(float *)(*((_DWORD *)this + 1) + 228) + *(float *)(*((_DWORD *)this + 2) + 160);
      v20 = sub_100A8ED0(this, v34, 2);
      if ( (v20 & 0x4030) != 0 )
        *(_BYTE *)(*((_DWORD *)this + 1) + 320) = 3;
    }
    if ( (v20 & 0xFC0000) != 0 )
    {
      v21 = 0.0;
      if ( (v20 & 0x40000) != 0 )
      {
        v22 = 0.0;
        v23 = 1.0;
        v24 = 1.0;
      }
      else
      {
        v23 = 1.0;
        v24 = 0.0;
        v22 = 0.0;
      }
      if ( (v20 & 0x80000) != 0 )
        v22 = v23;
      if ( (v20 & 0x100000) != 0 )
        v24 = v24 - v23;
      if ( (v20 & 0x200000) != 0 )
        v22 = v22 - v23;
      if ( (v20 & 0x400000) != 0 )
        v21 = v23;
      if ( (v20 & 0x800000) != 0 )
      {
        v25 = v21 - v23;
        v26 = v24;
        v21 = v25;
      }
      else
      {
        v26 = v24;
      }
      v27 = *((_DWORD *)this + 1);
      v36 = *(unsigned __int8 *)(v27 + 320);
      v28 = (double)v36 * 50.0;
      v29 = v26 * v28 + *(float *)(v27 + 284);
      v30 = v21 * v28;
      v31 = v22 * v28 + *(float *)(v27 + 288);
      v32 = v30 + *(float *)(v27 + 292);
      *(float *)(v27 + 284) = v29;
      *(float *)(v27 + 288) = v31;
      *(float *)(v27 + 292) = v32;
    }
  }
  if ( !*((_DWORD *)this + 3) && *(_BYTE *)(*((_DWORD *)this + 1) + 320) )
    this[4] = *((float *)off_103DC81C + 3);
  return *(_BYTE *)(*((_DWORD *)this + 1) + 320) > 1u;
}
