// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_1014F6F0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // edx
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  int v10; // edx
  int v11; // eax
  float v12; // ecx
  float v13; // edx
  float *v14; // edi
  void (__thiscall *v15)(int, float *, int, float *); // eax
  const char *v16; // edx
  const char *v17; // eax
  const char *v18; // eax
  double v19; // st7
  const char *v20; // edx
  const char *v21; // eax
  const char *v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  float v26; // eax
  float v27; // ecx
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st3
  double v32; // st2
  double v33; // st7
  double v34; // st1
  double v35; // st4
  double v36; // st1
  double v37; // rt1
  double v38; // st1
  double v39; // st2
  double v40; // st3
  double v41; // rtt
  double v42; // st3
  double v43; // st7
  int result; // eax
  char v45; // dl
  int *v46; // ecx
  float v48[20]; // [esp+4Ch] [ebp-15Ch] BYREF
  _BYTE v49[12]; // [esp+9Ch] [ebp-10Ch] BYREF
  _BYTE v50[64]; // [esp+A8h] [ebp-100h] BYREF
  int v51; // [esp+E8h] [ebp-C0h]
  _BYTE v52[12]; // [esp+F4h] [ebp-B4h] BYREF
  int v53; // [esp+100h] [ebp-A8h] BYREF
  char v54; // [esp+12Bh] [ebp-7Dh]
  int v55; // [esp+140h] [ebp-68h]
  float v56[3]; // [esp+150h] [ebp-58h] BYREF
  float v57; // [esp+15Ch] [ebp-4Ch] BYREF
  float v58; // [esp+160h] [ebp-48h]
  float v59; // [esp+164h] [ebp-44h]
  float v60; // [esp+168h] [ebp-40h] BYREF
  float v61; // [esp+16Ch] [ebp-3Ch]
  float v62; // [esp+170h] [ebp-38h]
  float v63[3]; // [esp+174h] [ebp-34h] BYREF
  float v64; // [esp+180h] [ebp-28h] BYREF
  float v65; // [esp+184h] [ebp-24h]
  float v66; // [esp+188h] [ebp-20h]
  double v67; // [esp+18Ch] [ebp-1Ch]
  float *v68; // [esp+194h] [ebp-14h]
  _BYTE *v69; // [esp+198h] [ebp-10h]
  _DWORD v70[3]; // [esp+19Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1A8h] [ebp+0h]

  v70[0] = a2;
  v70[1] = retaddr;
  nullsub_4(a1);
  sub_10112C00(a1 + 320, 0);
  sub_100E0970(a1, v5, 0, 0);
  sub_100EBE30(a1, 0);
  *(_DWORD *)(a1 + 460) = 0;
  sub_100D8500((_DWORD *)a1);
  sub_100EAB80((_DWORD *)a1, 32);
  *(_DWORD *)(a1 + 252) |= 0x80u;
  sub_100D8500((_DWORD *)a1);
  v6 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, a3, a4);
  v7 = v6[3];
  v8 = v6[4];
  v9 = v6[5];
  v57 = v7;
  v58 = v8;
  v10 = *(_DWORD *)dword_106B3CDC;
  v59 = v9;
  v11 = (*(int (__thiscall **)(int))(v10 + 120))(dword_106B3CDC);
  v12 = *(float *)(v11 + 24);
  v13 = *(float *)(v11 + 28);
  v62 = *(float *)(v11 + 32);
  v14 = (float *)(a1 + 844);
  v60 = v12;
  v61 = v13;
  sub_1014F3A0(a1, (int)v70, a1 + 844, a1, (float *)(a1 + 832), (float *)(a1 + 844));
  sub_1001F200(v48, (float *)(a1 + 844), (float *)(a1 + 844), &v57, &v60);
  sub_10265570(0, 8);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v48,
    81931,
    &v64,
    v49);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v49, (int)v50, 255, 255, 0, 1, -1.0);
  sub_1001F200(v48, (float *)(a1 + 832), (float *)(a1 + 832), &v57, &v60);
  sub_10265570(0, 8);
  v15 = *(void (__thiscall **)(int, float *, int, float *))(*(_DWORD *)dword_106B31F4 + 16);
  v69 = v52;
  v15(dword_106B31F4, v48, 81931, &v64);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v52, (int)&v53, 255, 255, 0, 1, -1.0);
  if ( v50[43] )
  {
    if ( v51 )
    {
      v16 = *(const char **)(v51 + 260);
      if ( !v16 )
        v16 = String;
      v17 = *(const char **)(v51 + 92);
      if ( !v17 )
        v17 = String;
      v68 = (float *)v16;
      v18 = (const char *)sub_1025F440("%s/%s", (char)v17);
    }
    else
    {
      v18 = "NULL";
    }
    v19 = *(float *)(a1 + 852);
    v68 = (float *)v18;
    DevMsg(
      1,
      "Warning, funcladder with blocked bottom point (%.2f %.2f %.2f) stuck in (%s)\n",
      *v14,
      *(float *)(a1 + 848),
      v19,
      v18);
    if ( !v54 )
      goto LABEL_24;
  }
  else if ( !v54 )
  {
    goto LABEL_26;
  }
  if ( v55 )
  {
    v20 = *(const char **)(v55 + 260);
    if ( !v20 )
      v20 = String;
    v21 = *(const char **)(v55 + 92);
    if ( !v21 )
      v21 = String;
    v68 = (float *)v20;
    v22 = (const char *)sub_1025F440("%s/%s", (char)v21);
  }
  else
  {
    v22 = "NULL";
  }
  v23 = *(float *)(a1 + 840);
  v68 = (float *)v22;
  DevMsg(
    1,
    "Warning, funcladder with blocked top point (%.2f %.2f %.2f) stuck in (%s)\n",
    *(float *)(a1 + 832),
    *(float *)(a1 + 836),
    v23,
    v22);
LABEL_24:
  if ( *(int *)(dword_106CE684 + 48) > 1 )
    *(_DWORD *)(a1 + 236) |= 1u;
LABEL_26:
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v24 = *(float *)(a1 + 832);
  v67 = *(double *)(a1 + 580);
  v64 = v24 - *(float *)&v67;
  v68 = &v64;
  v65 = *(float *)(a1 + 836) - *((float *)&v67 + 1);
  v66 = *(float *)(a1 + 840) - COERCE_FLOAT(&v64);
  sub_1014EFD0((float *)(a1 + 832), &v64);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v25 = *v14;
  v26 = *(float *)(a1 + 584);
  v27 = *(float *)(a1 + 588);
  LODWORD(v67) = *(_DWORD *)(a1 + 580);
  *((float *)&v67 + 1) = v26;
  v68 = (float *)LODWORD(v27);
  v64 = v25 - *(float *)&v67;
  v28 = *(float *)(a1 + 848);
  v68 = &v64;
  v65 = v28 - v26;
  v66 = *(float *)(a1 + 852) - COERCE_FLOAT(&v64);
  sub_1014F040((float *)(a1 + 844), &v64);
  v63[0] = 16384.0;
  v29 = 16384.0;
  v30 = 16384.0;
  v31 = -16384.0;
  v32 = -16384.0;
  v33 = -16384.0;
  if ( *v14 < 16384.0 )
    v63[0] = *v14;
  if ( *v14 > -16384.0 )
    v31 = *v14;
  if ( v63[0] > (double)*(float *)(a1 + 832) )
    v63[0] = *(float *)(a1 + 832);
  v34 = v31;
  if ( v31 < *(float *)(a1 + 832) )
    v34 = *(float *)(a1 + 832);
  v35 = v34;
  if ( *(float *)(a1 + 848) < 16384.0 )
    v29 = *(float *)(a1 + 848);
  if ( *(float *)(a1 + 848) > -16384.0 )
    v32 = *(float *)(a1 + 848);
  v36 = v29;
  if ( v29 > *(float *)(a1 + 836) )
    v36 = *(float *)(a1 + 836);
  v37 = v36;
  v38 = v32;
  v39 = v37;
  if ( v38 < *(float *)(a1 + 836) )
    v38 = *(float *)(a1 + 836);
  if ( *(float *)(a1 + 852) < 16384.0 )
    v30 = *(float *)(a1 + 852);
  if ( *(float *)(a1 + 852) > -16384.0 )
    v33 = *(float *)(a1 + 852);
  v40 = v30;
  if ( v30 > *(float *)(a1 + 840) )
    v40 = *(float *)(a1 + 840);
  v41 = v40;
  v42 = v33;
  v43 = v41;
  if ( v42 < *(float *)(a1 + 840) )
    v42 = *(float *)(a1 + 840);
  v63[0] = v63[0] + v57;
  v63[1] = v39 + v58;
  v63[2] = v43 + v59;
  v56[0] = v35 + v60;
  v56[1] = v38 + v61;
  v56[2] = v42 + v62;
  result = sub_1025F360(a1, v63, v56);
  v45 = *(_BYTE *)(a1 + 248) & 1;
  HIBYTE(v69) = v45;
  if ( v45 != *(_BYTE *)(a1 + 857) )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *(_BYTE *)(a1 + 857) = v45;
    }
    else
    {
      v46 = *(int **)(a1 + 24);
      if ( v46 )
      {
        result = sub_100194B0(v46, 857);
        v45 = HIBYTE(v69);
      }
      *(_BYTE *)(a1 + 857) = v45;
    }
  }
  return result;
}
