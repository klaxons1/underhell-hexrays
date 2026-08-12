unsigned int __thiscall sub_102A0B20(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  int (__thiscall *v23)(int); // edx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  bool v30; // zf
  int (__thiscall *v31)(int); // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  long double v38; // st6
  long double v39; // st7
  long double v40; // st6
  int v41; // eax
  double v42; // st7
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  double v47; // st7
  double v48; // st5
  double v49; // st4
  double v50; // st3
  double v51; // st6
  unsigned int v52; // eax
  int v53; // ecx
  double v54; // st6
  double v55; // st7
  _BYTE v56[12]; // [esp+4h] [ebp-28h] BYREF
  float v57[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v58; // [esp+1Ch] [ebp-10h] BYREF
  float v59; // [esp+20h] [ebp-Ch]
  float v60; // [esp+24h] [ebp-8h]
  float v61; // [esp+28h] [ebp-4h]

  result = *(_DWORD *)(this + 68);
  if ( result == -1 )
    return result;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  result >>= 12;
  if ( v3[1] != result || !*v3 )
    return result;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100000);
  sub_10023E00(*(char **)(this + 4), v5);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v7 = sub_1007DB30((_DWORD *)(v6 + 52), 100007);
  sub_10023E00(*(char **)(this + 4), v7);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v9 = sub_1007DB30((_DWORD *)(v8 + 52), 100010);
  sub_10023E00(*(char **)(this + 4), v9);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v11 = sub_1007DB30((_DWORD *)(v10 + 52), 100003);
  sub_10023E00(*(char **)(this + 4), v11);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v13 = sub_1007DB30((_DWORD *)(v12 + 52), 100004);
  sub_10023E00(*(char **)(this + 4), v13);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v15 = sub_1007DB30((_DWORD *)(v14 + 52), 100008);
  sub_10023E00(*(char **)(this + 4), v15);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v17 = sub_1007DB30((_DWORD *)(v16 + 52), 100009);
  sub_10023E00(*(char **)(this + 4), v17);
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v18 = sub_10261B20();
    v19 = v18;
    if ( v18 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 1088))(v18)
        && ((v20 = *(_DWORD *)(this + 68), v20 == -1)
         || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v20 >> 12
          ? (v21 = 0)
          : (v21 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1]),
            v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 340))(v21),
            v23 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 1092),
            v61 = *(float *)&v22,
            v23(v19) == v22) )
      {
        if ( !*(_BYTE *)(this + 64) )
        {
          sub_1004C1E0((char **)this, 100008);
          *(_BYTE *)(this + 64) = 1;
        }
      }
      else if ( *(_BYTE *)(this + 64) )
      {
        v24 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
        v25 = sub_1007DB30((_DWORD *)(v24 + 52), 100009);
        sub_10023CB0(*(char **)(this + 4), v25);
        *(_BYTE *)(this + 64) = 0;
      }
    }
  }
  v26 = *(_DWORD *)(this + 68);
  if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v26 >> 12 )
    v27 = 0;
  else
    v27 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  if ( (double)*(int *)(v27 + 1656) >= 100.0 )
  {
    *(_BYTE *)(this + 65) = 0;
  }
  else if ( !*(_BYTE *)(this + 65) )
  {
    *(_BYTE *)(this + 65) = 1;
  }
  v28 = *(_DWORD *)(this + 68);
  if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v28 >> 12 )
    v29 = 0;
  else
    v29 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  v30 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 868))(v29) == 0;
  v31 = *(int (__thiscall **)(int))(*(_DWORD *)this + 52);
  if ( v30 )
  {
    v34 = v31(this);
    v35 = sub_1007DB30((_DWORD *)(v34 + 52), 100005);
    sub_10023E00(*(char **)(this + 4), v35);
    *(_BYTE *)(this + 66) = 0;
  }
  else
  {
    v32 = v31(this);
    v33 = sub_1007DB30((_DWORD *)(v32 + 52), 100005);
    sub_10023CB0(*(char **)(this + 4), v33);
    if ( !*(_BYTE *)(this + 66) )
      *(_BYTE *)(this + 66) = 1;
  }
  sub_1029FEC0((_DWORD *)this, &v58);
  if ( *(float *)(dword_106DB534 + 44) <= v59 - *(float *)(this + 24) )
  {
    v38 = fabs(v58 - *(float *)(this + 20));
    if ( v38 <= 200.0 )
    {
      v39 = v38;
      v40 = fabs(v60 - *(float *)(this + 28));
      if ( v40 <= 75.0 )
      {
        if ( v39 > 50.0 || v40 > 25.0 )
          sub_1004C1E0((char **)this, 100010);
        goto LABEL_42;
      }
    }
    v41 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v37 = sub_1007DB30((_DWORD *)(v41 + 52), 100007);
  }
  else
  {
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v37 = sub_1007DB30((_DWORD *)(v36 + 52), 100000);
  }
  sub_10023CB0(*(char **)(this + 4), v37);
LABEL_42:
  v42 = v59 * v59 + v58 * v58 + v60 * v60;
  v61 = v42;
  if ( *(float *)(this + 60) <= 1024.0 || v42 >= 1024.0 )
  {
    if ( *(float *)(this + 60) < 4096.0 && v42 > 4096.0 )
    {
      v45 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v46 = sub_1007DB30((_DWORD *)(v45 + 52), 100003);
      sub_10023CB0(*(char **)(this + 4), v46);
      v42 = v61;
    }
  }
  else
  {
    v43 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v44 = sub_1007DB30((_DWORD *)(v43 + 52), 100004);
    sub_10023CB0(*(char **)(this + 4), v44);
    v42 = v61;
  }
  *(float *)(this + 60) = v42;
  v47 = v58;
  v48 = v59;
  v49 = v59 - *(float *)(this + 24);
  v50 = v60;
  v51 = v60 - *(float *)(this + 28);
  *(float *)(this + 32) = v58 - *(float *)(this + 20);
  *(float *)(this + 36) = v49;
  *(float *)(this + 40) = v51;
  *(float *)(this + 20) = v47;
  *(float *)(this + 24) = v48;
  *(float *)(this + 28) = v50;
  v52 = *(_DWORD *)(this + 68);
  if ( v52 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v52 >> 12 )
    v53 = 0;
  else
    v53 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  result = (*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v53 + 540))(v53, v56, v57);
  v54 = 0.80000001 * v57[2] + 0.2 * *(float *)(this + 52);
  v55 = v57[1] * 0.80000001 + *(float *)(this + 48) * 0.2;
  *(float *)(this + 44) = v57[0] * 0.80000001 + *(float *)(this + 44) * 0.2;
  *(float *)(this + 48) = v55;
  *(float *)(this + 52) = v54;
  return result;
}
