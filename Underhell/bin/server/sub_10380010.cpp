char __thiscall sub_10380010(void *this, float *a2, float *a3, int a4, int a5, int a6)
{
  float v7; // eax
  float v8; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  char result; // al
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st4
  double v19; // st5
  double v20; // rt1
  double v21; // st6
  double v22; // st4
  double v23; // st6
  double v24; // rtt
  double v25; // st7
  double v26; // st4
  double v27; // st6
  double v28; // st5
  double v29; // st7
  int v30; // edx
  double v31; // st7
  double v32; // st7
  double v33; // st7
  float v34; // [esp+10h] [ebp-A0h]
  float v35; // [esp+10h] [ebp-A0h]
  _BYTE v36[12]; // [esp+20h] [ebp-90h] BYREF
  _BYTE v37[12]; // [esp+2Ch] [ebp-84h] BYREF
  float v38; // [esp+38h] [ebp-78h]
  float v39; // [esp+3Ch] [ebp-74h]
  float v40; // [esp+40h] [ebp-70h]
  float v41; // [esp+44h] [ebp-6Ch]
  float v42; // [esp+48h] [ebp-68h]
  float v43; // [esp+4Ch] [ebp-64h]
  float v44; // [esp+58h] [ebp-58h]
  int v45; // [esp+78h] [ebp-38h]
  float *v46; // [esp+80h] [ebp-30h]
  float *v47; // [esp+84h] [ebp-2Ch]
  float v48; // [esp+88h] [ebp-28h]
  float v49; // [esp+8Ch] [ebp-24h]
  float v50; // [esp+90h] [ebp-20h]
  float v51; // [esp+94h] [ebp-1Ch] BYREF
  float v52; // [esp+98h] [ebp-18h]
  float v53; // [esp+9Ch] [ebp-14h]
  float v54; // [esp+A0h] [ebp-10h]
  float v55; // [esp+A4h] [ebp-Ch]
  float v56; // [esp+A8h] [ebp-8h]
  char v57; // [esp+AFh] [ebp-1h]
  int savedregs; // [esp+B0h] [ebp+0h] BYREF
  float v59; // [esp+BCh] [ebp+Ch]
  int v60; // [esp+BCh] [ebp+Ch]

  v7 = *a3;
  v8 = a3[2];
  v49 = a3[1];
  v57 = 0;
  v48 = v7;
  v50 = v8;
  v59 = off_10689714();
  v47 = (float *)sub_10073730(*((_DWORD *)this + 419));
  v46 = (float *)sub_10073710(*((_DWORD *)this + 419));
  v10 = *((_DWORD *)this + 63) >> 11;
  v54 = v48 * v59;
  v55 = v49 * v59;
  v56 = v59 * v50;
  if ( (v10 & 1) != 0 )
    sub_100DAE60((int)this);
  v11 = *((_DWORD *)this + 63) >> 11;
  v51 = *((float *)this + 145) + v54;
  v52 = v55 + *((float *)this + 146);
  v53 = v56 + *((float *)this + 147);
  if ( (v11 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_100231A0((int)&savedregs, (int)this, (float *)this + 145, &v51, v46, v47, 33701899, (int)this, 0, (int)v37);
  (*(void (__thiscall **)(void *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v36, 0, 0);
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
  {
    v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    v13 = v45;
    if ( v45 == v12 )
      return 0;
  }
  else
  {
    v13 = v45;
  }
  if ( v44 >= 1.0 )
    goto LABEL_23;
  v60 = v13;
  if ( !v13 )
    goto LABEL_19;
  if ( !sub_100D7680(v13) )
  {
    if ( v60 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
    {
      DevMsg("Avoided collision\n");
      return 0;
    }
LABEL_19:
    DevMsg(2, "Avoiding the world\n");
    v56 = v43;
    v54 = v41;
    v55 = v42;
    if ( 0.0 == v44 )
      return 0;
    v34 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1];
    v29 = off_10689708(v34);
    v25 = v29 / v44;
    goto LABEL_21;
  }
  DevMsg(2, "Avoiding an NPC\n");
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v15 = v38 - *((float *)this + 145);
  v16 = v39 - *((float *)this + 146);
  v17 = v40 - *((float *)this + 147);
  v18 = v16 * a3[2] - v17 * a3[1];
  v19 = v17 * *a3 - a3[2] * v15;
  v20 = v18;
  v21 = v15 * a3[1] - v16 * *a3;
  v22 = v19 * a3[2] - v21 * a3[1];
  v23 = v21 * *a3 - a3[2] * v20;
  v24 = v20 * a3[1] - v19 * *a3;
  *a2 = v22;
  a2[1] = v23;
  a2[2] = v24;
  off_10689714();
  if ( v44 <= 0.0 )
  {
    v54 = *a2 * 1000.0;
    v55 = a2[1] * 1000.0;
    v25 = 1000.0 * a2[2];
    v56 = v25;
    sub_100D7A40(a3);
LABEL_21:
    v27 = v54 * v25;
    v28 = v55 * v25;
    v26 = v56;
    goto LABEL_22;
  }
  sub_100D7A40(a3);
  v25 = 0.0 * a2[2];
  v26 = 1.0 / v44;
  v27 = *a2 * 0.0 * v26;
  v28 = 0.0 * a2[1] * v26;
LABEL_22:
  v57 = 1;
  *a2 = v27;
  a2[1] = v28;
  a2[2] = v25 * v26;
LABEL_23:
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v30 = *((_DWORD *)this + 63);
  v51 = *((float *)this + 145);
  v52 = *((float *)this + 146);
  v53 = *((float *)this + 147) - 16.0;
  if ( (v30 & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1002A5F0((int)&savedregs, (int)this, (float *)this + 145, &v51, 147467, (int)this, 0, (int)v37);
  if ( v44 < 1.0 )
  {
    v31 = flt_10675174 / v44;
    v57 = 1;
    *a2 = *a2;
    a2[1] = a2[1];
    a2[2] = v31 + a2[2];
  }
  if ( *((_BYTE *)this + 3665) )
    return v57;
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v35 = *((float *)this + 147) + 8.0;
  v32 = (sub_102604A0((_DWORD *)this + 145, *((float *)this + 147), v35) - *((float *)this + 147)) * 0.125;
  if ( v32 >= 1.0 )
    return v57;
  v57 = 1;
  result = 1;
  v33 = -(flt_10675174 / v32);
  *a2 = *a2;
  a2[1] = a2[1];
  a2[2] = v33 + a2[2];
  return result;
}
