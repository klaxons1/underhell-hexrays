// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_100A6930(int a1@<ebp>, float *a2, float a3, int *a4, int a5, float a6)
{
  int *v6; // eax
  float v7; // ecx
  float v8; // edx
  double v9; // st7
  double v10; // st6
  void (__thiscall *v11)(int, float *, int); // eax
  double v12; // st7
  double (__thiscall *v13)(int); // eax
  float v14[22]; // [esp+64h] [ebp-ECh] BYREF
  _BYTE v15[12]; // [esp+BCh] [ebp-94h] BYREF
  float v16[3]; // [esp+C8h] [ebp-88h] BYREF
  float v17[14]; // [esp+D4h] [ebp-7Ch] BYREF
  float v18; // [esp+10Ch] [ebp-44h]
  float v19; // [esp+110h] [ebp-40h]
  float v20; // [esp+114h] [ebp-3Ch] BYREF
  float v21; // [esp+120h] [ebp-30h] BYREF
  float v22; // [esp+124h] [ebp-2Ch]
  float v23; // [esp+128h] [ebp-28h]
  int v24; // [esp+12Ch] [ebp-24h] BYREF
  float v25; // [esp+130h] [ebp-20h]
  int v26; // [esp+134h] [ebp-1Ch]
  int v27; // [esp+138h] [ebp-18h] BYREF
  float v28; // [esp+13Ch] [ebp-14h]
  float v29; // [esp+140h] [ebp-10h]
  int v30; // [esp+144h] [ebp-Ch]
  void *v31; // [esp+148h] [ebp-8h]
  void *retaddr; // [esp+150h] [ebp+0h]

  v30 = a1;
  v31 = retaddr;
  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_WaterRipple", 0, "Particle/Effect_Rendering", 0, 4);
  v6 = a4;
  if ( !a4 )
  {
    v6 = &v27;
    *(float *)&v27 = 0.80000001;
    v28 = 0.80000001;
    v29 = 0.75;
  }
  v7 = *(float *)v6;
  v8 = *((float *)v6 + 1);
  v23 = *((float *)v6 + 2);
  v9 = *a2;
  v21 = v7;
  *(float *)&v24 = v9;
  v10 = a2[1];
  v22 = v8;
  v25 = v10;
  v29 = COERCE_FLOAT(&v27);
  *(float *)&v26 = a2[2] + 8.0;
  *(float *)&v27 = v9;
  v28 = v10;
  v29 = a2[2] - 64.0;
  sub_1000E430(v14, (float *)LODWORD(v28), (float *)LODWORD(v29));
  sub_1012D400(0, 0);
  v11 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_104131A0 + 16);
  v29 = COERCE_FLOAT(v15);
  v28 = COERCE_FLOAT(&v20);
  v11(dword_104131A0, v14, 16432);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v15, (int)v16, 255, 0, 0, 1, 5.0);
  if ( v17[5] < 1.0 )
  {
    v27 = 3;
    *(float *)&v26 = 0.5 * v17[2] + v16[2];
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD, float *, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -16.0,
            16.0,
            &v21,
            a5);
    v13 = *(double (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 4);
    v25 = v12;
    *(float *)&v24 = 360.0;
    v23 = 0.0;
    v22 = v13(dword_10413198);
    v19 = 128.0 * a3;
    v18 = a3 * 16.0;
    sub_1008DCF0((float *)&v24, v17, v18, v19, 0.69999999, a6, 0.0, 0.25, v22, v23, (float *)v24, v25, v26, v27);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
