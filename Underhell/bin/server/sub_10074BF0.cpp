char __thiscall sub_10074BF0(int this, int a2, float a3, float *a4, _DWORD *a5)
{
  double v6; // st7
  int v8; // ebx
  double v9; // st7
  double v10; // st6
  double v11; // rt0
  double v12; // st6
  double v13; // st7
  double v14; // st6
  bool v15; // zf
  double v17; // st7
  char v18; // bl
  float *v19; // eax
  int v20; // edx
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // rt1
  double v25; // st5
  double v26; // st6
  double v27; // st4
  int v28; // ebx
  char v29; // al
  double v30; // st7
  _DWORD *v31; // eax
  int v32; // ecx
  int *v33; // eax
  double v34; // st7
  _DWORD *v35; // eax
  float *v36; // edx
  double v37; // st5
  double v38; // st7
  double v39; // st7
  int v40; // ecx
  double v41; // st7
  int v42; // eax
  double v43; // st7
  double v44; // st7
  char v45; // bl
  int *v46; // [esp-8h] [ebp-64h]
  int v47; // [esp-4h] [ebp-60h]
  int v48; // [esp+0h] [ebp-5Ch]
  int v49; // [esp+4h] [ebp-58h]
  float v50; // [esp+4h] [ebp-58h]
  float v51; // [esp+Ch] [ebp-50h]
  int v52[3]; // [esp+1Ch] [ebp-40h] BYREF
  int v53[3]; // [esp+28h] [ebp-34h] BYREF
  int v54; // [esp+34h] [ebp-28h] BYREF
  float v55; // [esp+38h] [ebp-24h]
  float v56; // [esp+3Ch] [ebp-20h]
  int v57; // [esp+40h] [ebp-1Ch] BYREF
  float v58; // [esp+44h] [ebp-18h]
  float v59; // [esp+48h] [ebp-14h]
  float v60; // [esp+4Ch] [ebp-10h]
  float v61; // [esp+50h] [ebp-Ch]
  float v62; // [esp+54h] [ebp-8h]
  char v63; // [esp+5Bh] [ebp-1h]
  float v64; // [esp+64h] [ebp+8h]
  int v65; // [esp+64h] [ebp+8h]
  bool v66; // [esp+67h] [ebp+Bh]
  int v67; // [esp+68h] [ebp+Ch]
  int v68; // [esp+68h] [ebp+Ch]
  int v69; // [esp+68h] [ebp+Ch]

  v6 = *(float *)(a2 + 36);
  v63 = 0;
  if ( 0.0 == v6 )
  {
    *a5 = -4;
    goto LABEL_51;
  }
  v8 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2604);
  v64 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 96))(v8);
  v9 = *(float *)(a2 + 36);
  sub_10090C40(*(float *)(a2 + 36));
  v10 = v64;
  if ( v64 <= v9 )
    v10 = v9;
  v62 = v10;
  v11 = v10;
  v12 = v9;
  v13 = v11;
  v14 = v12 * 0.5;
  if ( v14 < 16.0 )
    v14 = 16.0;
  v15 = (*(_BYTE *)(a2 + 56) & 5) == 0;
  v60 = v14;
  if ( !v15 && v13 >= *(float *)(a2 + 40) )
  {
    v13 = *(float *)(a2 + 40);
    v62 = *(float *)(a2 + 40);
  }
  if ( v13 <= 0.0 )
  {
    *a5 = 0;
    return 1;
  }
  v17 = sub_10078590(v8);
  v61 = v17;
  v66 = v62 <= v17;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 200) <= -0.001 )
  {
    if ( !*(_BYTE *)(this + 16) )
    {
LABEL_17:
      *(float *)(this + 200) = -1.0;
      goto LABEL_19;
    }
    if ( !sub_10074680((float *)a2, (float *)(this + 20), 0.1)
      || !sub_10074680((float *)(a2 + 12), (float *)(this + 32), 0.1)
      || v62 <= v17 )
    {
      v17 = v61;
      goto LABEL_17;
    }
    v17 = v61;
  }
LABEL_19:
  if ( LOBYTE(a3) )
  {
    *(float *)(this + 200) = flt_104A1084[sub_10023500()] + *(float *)(dword_106B31C8 + 12);
    v17 = v61;
  }
  v18 = 1;
  if ( !v66 )
  {
    v19 = *(float **)(this + 4);
    v20 = *(_DWORD *)(a2 + 48);
    v21 = *(float *)(a2 + 12) * v17;
    v22 = *(float *)(a2 + 16) * v17;
    v23 = v17 * *(float *)(a2 + 20);
    v24 = v22;
    v25 = v21 + v19[179];
    v19 += 179;
    v26 = v24 + v19[1];
    v27 = v19[2];
    v28 = *(_DWORD *)(a2 + 52);
    *(float *)&v57 = v25;
    v58 = v26;
    v59 = v23 + v27;
    v29 = sub_1007C550(v20, (int)v19, (int)&v57, 33701899, v28, 100.0, v20 == 0, a2 + 68);
    v18 = v29;
    if ( !v29 )
      *(float *)(a2 + 104) = v62 - v61 + *(float *)(a2 + 104);
    if ( *(_DWORD *)(dword_1069313C + 48) )
    {
      if ( v29 )
      {
        v68 = v57;
        v61 = v58;
        v34 = *((float *)sub_1004BCA0((_DWORD **)this, v52) + 2);
        v54 = v68;
        v33 = v53;
        v55 = v61;
        v56 = v34;
        v51 = 0.1;
        v49 = 0;
        v48 = 255;
        v47 = 0;
        v46 = &v54;
      }
      else
      {
        sub_10029660(*(_DWORD **)(this + 4), (int)"Close obstruction %f\n");
        v67 = v57;
        v61 = v58;
        v30 = *((float *)sub_1004BCA0((_DWORD **)this, v53) + 2);
        v54 = v67;
        v55 = v61;
        v56 = v30;
        v31 = sub_1004BCA0((_DWORD **)this, v52);
        sub_1011BC50((int)v31, (int)&v54, 255, 0, 0, 0, 0.1);
        v32 = *(_DWORD *)(a2 + 96);
        if ( !v32 )
          goto LABEL_30;
        v51 = 0.1;
        v49 = 255;
        v48 = 0;
        v47 = 255;
        v46 = (int *)(*(int (**)(void))(*(_DWORD *)v32 + 576))();
        v33 = v52;
      }
      v35 = sub_1004BCA0((_DWORD **)this, v33);
      sub_1011BC50((int)v35, (int)v46, v47, v48, v49, 0, v51);
    }
LABEL_30:
    sub_10060900((float *)(a2 + 124), (float *)(a2 + 68));
    if ( !v18 )
      goto LABEL_42;
  }
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 200) <= -0.001 )
  {
    if ( *(_DWORD *)(dword_1069313C + 48) )
      sub_10029660(*(_DWORD **)(this + 4), (int)"No obstruction (Near probe only)\n");
  }
  else
  {
    v36 = *(float **)(this + 4);
    v37 = *(float *)(a2 + 16) * v62 + v36[180];
    v38 = *(float *)(a2 + 20) * v62 + v36[181];
    *(float *)&v57 = *(float *)(a2 + 12) * v62 + v36[179];
    v58 = v37;
    v59 = v38;
    v39 = v60 / v62 * 100.0;
    if ( v39 > 100.0 )
      v39 = 100.0;
    v50 = v39;
    v18 = sub_1007C550(
            *(_DWORD *)(a2 + 48),
            (int)(v36 + 179),
            (int)&v57,
            33701899,
            *(_DWORD *)(a2 + 52),
            v50,
            *(_DWORD *)(a2 + 48) == 0,
            a2 + 68);
    if ( v66 )
      sub_10060900((float *)(a2 + 124), (float *)(a2 + 68));
    if ( *(_DWORD *)(dword_1069313C + 48) )
    {
      v40 = *(_DWORD *)(this + 4);
      v65 = v57;
      v69 = v40;
      v60 = v58;
      v41 = *(float *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v40 + 504))(v40, v52) + 8);
      v54 = v65;
      v55 = v60;
      v56 = v41;
      v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v69 + 504))(v69);
      if ( v18 )
      {
        sub_1011BC50(v42, (int)v53, (int)&v54, 0, 255, 0, 0.0);
        sub_10029660(*(_DWORD **)(this + 4), (int)"No obstruction\n");
      }
      else
      {
        sub_1011BC50(v42, (int)v53, (int)&v54, 255, 0, 0, 0.0);
        sub_10029660(*(_DWORD **)(this + 4), (int)"Obstruction %f\n");
      }
    }
  }
LABEL_42:
  v43 = v62;
  *(_BYTE *)(a2 + 64) = 1;
  v44 = v43 - *(float *)(a2 + 104);
  if ( v44 < 0.001 )
    v44 = 0.0;
  if ( v18 )
  {
    *a5 = 0;
    *(_BYTE *)(this + 16) = 1;
LABEL_51:
    v63 = 1;
    goto LABEL_52;
  }
  if ( (*(_BYTE *)(a2 + 56) & 5) != 0 && v44 > *(float *)(a2 + 40) )
  {
    *a5 = 0;
    *(_BYTE *)(this + 16) = 1;
    goto LABEL_51;
  }
  *a4 = v44;
  *(_BYTE *)(this + 16) = 0;
LABEL_52:
  sub_10074760((float *)(this + 20), a2);
  v45 = v63;
  if ( v63 )
  {
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 200) > -0.001 )
      *(float *)(this + 200) = flt_104A1084[sub_10023500()] + *(float *)(dword_106B31C8 + 12);
  }
  return v45;
}
