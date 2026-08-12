int __thiscall sub_1008DB70(
        _DWORD *this,
        float *a2,
        float *a3,
        int a4,
        float a5,
        float a6,
        float a7,
        char a8,
        float a9,
        float a10)
{
  int v11; // eax
  long double v12; // st7
  long double v13; // st7
  double v14; // st7
  float v15; // ecx
  double v16; // st7
  float v17; // edx
  float v18; // eax
  double v19; // st6
  int v20; // edi
  double v21; // rt1
  double v22; // st6
  double v23; // st7
  double v24; // st6
  int v25; // edi
  bool v26; // c0
  bool v27; // c3
  long double v28; // st7
  int v29; // eax
  double v31; // st6
  double v32; // st5
  int (__thiscall *v33)(_DWORD *, float *, float *, _DWORD, _DWORD, int, int, _DWORD); // edx
  int v34; // eax
  double v35; // st7
  float v36[3]; // [esp+10h] [ebp-24h] BYREF
  float v37; // [esp+1Ch] [ebp-18h] BYREF
  float v38; // [esp+20h] [ebp-14h]
  float v39; // [esp+24h] [ebp-10h]
  float v40; // [esp+28h] [ebp-Ch] BYREF
  float v41; // [esp+2Ch] [ebp-8h]
  float v42; // [esp+30h] [ebp-4h]
  int v43; // [esp+3Ch] [ebp+8h]
  int v44; // [esp+4Ch] [ebp+18h]
  float v45; // [esp+50h] [ebp+1Ch]
  float v46; // [esp+5Ch] [ebp+28h]

  v11 = this[1];
  if ( v11 )
    *(_DWORD *)(v11 + 2716) |= 8u;
  v12 = atan2(a7 * 0.5 / a5, 1.0);
  v13 = v12 + v12;
  v45 = v13;
  if ( a8 )
  {
    a6 = a6 * -1.0;
    v45 = v13 * -1.0;
  }
  v36[0] = *a2 - *a3;
  v36[1] = a2[1] - a3[1];
  v36[2] = a2[2] - a3[2];
  off_10689714();
  v14 = sub_10265030(v36);
  v15 = *a2;
  v16 = v14 * 0.017453292;
  v17 = a2[1];
  v18 = a2[2];
  v19 = 0.017453292 * a6 + v16;
  *(float *)&v43 = v19;
  v20 = LOBYTE(a10) != 0 ? 3 : 0;
  v21 = v19;
  v22 = v16;
  v23 = v21;
  v44 = 0;
  v24 = v22 + v45;
  v40 = v15;
  v41 = v17;
  v42 = v18;
  v46 = v24;
  v25 = v20 + 1;
  while ( 1 )
  {
    v26 = v24 < v23;
    v27 = v24 == v23;
    v28 = v24;
    if ( !a8 )
      break;
    if ( v26 || v27 )
      goto LABEL_8;
LABEL_12:
    v31 = *a3;
    v32 = a3[1];
    v33 = *(int (__thiscall **)(_DWORD *, float *, float *, _DWORD, _DWORD, int, int, _DWORD))(*this + 20);
    v39 = a3[2];
    v37 = v31 + cos(v28) * a5;
    v38 = v32 + a5 * sin(v28);
    v34 = v33(this, &v40, &v37, 0, 0, -1, v25, LODWORD(a9));
    if ( !v34 )
      return 0;
    *(_DWORD *)(v34 + 32) |= 0x20u;
    if ( v44 )
      sub_100B9A80(v44, v34);
    else
      v44 = v34;
    v40 = v37;
    v41 = v38;
    v42 = v39;
    v35 = v46 + v45;
    v46 = v35;
    v24 = v35;
    v23 = *(float *)&v43;
  }
  if ( v26 )
    goto LABEL_12;
LABEL_8:
  if ( v44 )
  {
    v29 = (*(int (__thiscall **)(_DWORD *, float *, int, _DWORD, _DWORD, int, int, _DWORD))(*this + 20))(
            this,
            &v40,
            a4,
            0,
            0,
            -1,
            v25,
            LODWORD(a9));
    if ( v29 )
    {
      *(_DWORD *)(v29 + 32) = *(_DWORD *)(v29 + 32) & 0xFFFFFFD7 | 8;
      sub_100B9A80(v44, v29);
      return v44;
    }
  }
  return 0;
}
