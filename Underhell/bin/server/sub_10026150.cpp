char __userpurge sub_10026150@<al>(char *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, float a5)
{
  int (__thiscall *v7)(char *); // edx
  float *v8; // eax
  int (__thiscall *v9)(char *, float *, int); // edx
  int v10; // eax
  float *v11; // eax
  int (__thiscall *v12)(char *, float *, int); // edx
  char v13; // bl
  int v14; // eax
  char v15; // cl
  char *v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int (__thiscall *v24)(int, _DWORD, _DWORD); // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int (__thiscall *v28)(int, _DWORD, _DWORD); // eax
  int v29; // eax
  int v30; // ecx
  int (__thiscall *v31)(int, _DWORD, _DWORD); // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  char v41; // cl
  char *v42; // eax
  int v43; // eax
  char v44; // cl
  char *v45; // eax
  char v46; // cl
  _BYTE v49[12]; // [esp+38h] [ebp-38h] BYREF
  float v50[3]; // [esp+44h] [ebp-2Ch] BYREF
  float v51; // [esp+50h] [ebp-20h]
  float v52; // [esp+54h] [ebp-1Ch]
  float v53; // [esp+58h] [ebp-18h]
  float v54; // [esp+5Ch] [ebp-14h] BYREF
  float v55; // [esp+60h] [ebp-10h]
  float v56; // [esp+64h] [ebp-Ch]
  int v57; // [esp+68h] [ebp-8h]
  float v58; // [esp+6Ch] [ebp-4h]
  char v59; // [esp+7Bh] [ebp+Bh]
  char v60; // [esp+7Bh] [ebp+Bh]

  if ( (*((_DWORD *)a1 + 63) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a4 + 252) & 0x800) != 0 )
    sub_100DAE60(a4);
  v51 = *(float *)(a4 + 580) - *((float *)a1 + 145);
  v52 = *(float *)(a4 + 584) - *((float *)a1 + 146);
  v53 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(char *, float *))(*(_DWORD *)a1 + 904))(a1, v50);
  v7 = *(int (__thiscall **)(char *))(*(_DWORD *)a1 + 1672);
  v58 = v50[1] * v52 + v51 * v50[0] + v50[2] * v53;
  v57 = v7(a1);
  (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2004))(a1);
  v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 504))(a4, v49);
  v54 = *v8;
  v55 = v8[1];
  v9 = *(int (__thiscall **)(char *, float *, int))(*(_DWORD *)a1 + 2028);
  v56 = v8[2];
  v59 = v9(a1, &v54, 1);
  v10 = *(_DWORD *)a1;
  if ( v59 )
  {
    (*(void (__thiscall **)(char *))(v10 + 2160))(a1);
    v14 = sub_1007DB30(41);
    if ( v14 != -1 )
    {
      v15 = v14;
      if ( v14 != 999999999 )
      {
        v16 = &a1[4 * ((v14 - 1000000000) >> 5) + 2192];
        *(_DWORD *)v16 |= 1 << (v15 & 0x1F);
      }
    }
    v13 = v59;
  }
  else
  {
    (*(void (__thiscall **)(char *, int, int))(v10 + 2004))(a1, a2, a3);
    if ( (*((_DWORD *)a1 + 63) & 0x800) != 0 )
      sub_100DAE60(a1);
    v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 520))(a4, v49);
    v54 = *v11;
    v55 = v11[1];
    v12 = *(int (__thiscall **)(char *, float *, int))(*(_DWORD *)a1 + 2028);
    v56 = v11[2];
    v13 = v12(a1, &v54, 1);
  }
  if ( !sub_100CF460(a1) || (v17 = *((_DWORD *)a1 + 698), v17 == 4) || (v60 = 1, v17 == 5) )
    v60 = 0;
  v18 = v57;
  if ( (v57 & 0x2000) != 0 && v60 )
  {
    v19 = sub_100CF460(a1);
    v20 = (*(int (__thiscall **)(int, float, _DWORD))(*(_DWORD *)v19 + 1372))(
            v19,
            COERCE_FLOAT(LODWORD(v58)),
            LODWORD(a5));
    v21 = v20;
    if ( v20 == 40 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(char *, float *))(*(_DWORD *)a1 + 880))(a1, &v54) )
        DevMsg("Warning: COND_NOT_FACING_ATTACK set but FInAimCone is true\n");
    }
    else if ( v20 == 21 && !v13 )
    {
      goto LABEL_25;
    }
    sub_10023CB0(a1, v21);
LABEL_25:
    v18 = v57;
    goto LABEL_26;
  }
  if ( (v57 & 0x20000) != 0 )
  {
    v25 = (*(int (__thiscall **)(char *, float, _DWORD))(*(_DWORD *)a1 + 1964))(
            a1,
            COERCE_FLOAT(LODWORD(v58)),
            LODWORD(a5));
    if ( v25 != 21 || v13 )
      sub_10023CB0(a1, v25);
  }
LABEL_26:
  if ( (v18 & 0x4000) != 0
    && v60
    && (v22 = sub_100CF460(a1), ((*(int (__thiscall **)(int))(*(_DWORD *)v22 + 1364))(v22) & 0x4000) != 0) )
  {
    v23 = sub_100CF460(a1);
    v24 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v23 + 1376);
  }
  else
  {
    if ( (v18 & 0x40000) == 0 )
      goto LABEL_39;
    v24 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 1968);
    v23 = (int)a1;
  }
  v26 = v24(v23, LODWORD(v58), LODWORD(a5));
  if ( v26 != 22 || v13 )
    sub_10023CB0(a1, v26);
LABEL_39:
  if ( (v18 & 0x8000) != 0 && v60 )
  {
    v27 = sub_100CF460(a1);
    v28 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v27 + 1380);
LABEL_44:
    v29 = v28(v27, LODWORD(v58), LODWORD(a5));
    sub_10023CB0(a1, v29);
    goto LABEL_45;
  }
  if ( (v18 & 0x80000) != 0 )
  {
    v28 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 1972);
    v27 = (int)a1;
    goto LABEL_44;
  }
LABEL_45:
  if ( (v18 & 0x10000) != 0 && v60 )
  {
    v30 = sub_100CF460(a1);
    v31 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v30 + 1384);
  }
  else
  {
    if ( (v18 & 0x100000) == 0 )
      goto LABEL_51;
    v31 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 1976);
    v30 = (int)a1;
  }
  v32 = v31(v30, LODWORD(v58), LODWORD(a5));
  sub_10023CB0(a1, v32);
LABEL_51:
  (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1);
  v33 = sub_1007DB30(22);
  if ( v33 != -1 )
  {
    v34 = v33 - 1000000000;
    if ( v34 != -1 && ((1 << (v34 & 0x1F)) & *(_DWORD *)&a1[4 * (v34 >> 5) + 2192]) != 0 )
      goto LABEL_63;
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1);
  v35 = sub_1007DB30(21);
  if ( v35 != -1 )
  {
    v36 = v35 - 1000000000;
    if ( v36 != -1 && ((1 << (v36 & 0x1F)) & *(_DWORD *)&a1[4 * (v36 >> 5) + 2192]) != 0 )
      goto LABEL_63;
  }
  if ( ((*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1), v37 = sub_1007DB30(24), v37 != -1)
    && (v38 = v37 - 1000000000, v38 != -1)
    && ((1 << (v38 & 0x1F)) & *(_DWORD *)&a1[4 * (v38 >> 5) + 2192]) != 0
    || ((*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1), v39 = sub_1007DB30(23), v39 != -1)
    && (v39 -= 1000000000, v39 != -1)
    && (LOBYTE(v39) = ((1 << (v39 & 0x1F)) & *(_DWORD *)&a1[4 * (v39 >> 5) + 2192]) != 0, (_BYTE)v39) )
  {
LABEL_63:
    (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1);
    v40 = sub_1007DB30(38);
    if ( v40 != -1 )
    {
      v41 = v40;
      if ( v40 != 999999999 )
      {
        v42 = &a1[4 * ((v40 - 1000000000) >> 5) + 2192];
        *(_DWORD *)v42 &= ~(1 << (v41 & 0x1F));
      }
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1);
    v43 = sub_1007DB30(39);
    if ( v43 != -1 )
    {
      v44 = v43;
      if ( v43 != 999999999 )
      {
        v45 = &a1[4 * ((v43 - 1000000000) >> 5) + 2192];
        *(_DWORD *)v45 &= ~(1 << (v44 & 0x1F));
      }
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1);
    v39 = sub_1007DB30(42);
    if ( v39 != -1 )
    {
      v46 = v39;
      if ( v39 != 999999999 )
      {
        v39 = (v39 - 1000000000) >> 5;
        *(_DWORD *)&a1[4 * v39 + 2192] &= ~(1 << (v46 & 0x1F));
      }
    }
  }
  return v39;
}
