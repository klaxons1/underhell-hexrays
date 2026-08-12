// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_103264B0(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  float *v5; // eax
  float v6; // edx
  float *v7; // edi
  float *v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int *v12; // edi
  unsigned __int8 (__thiscall *v13)(_DWORD); // edx
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int *v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  double v24; // st7
  int (__thiscall *v25)(_DWORD *); // eax
  int v26; // eax
  unsigned int v27; // edx
  float *v28; // edi
  float *v29; // eax
  int v30; // edx
  double v31; // st7
  int (__thiscall *v32)(_DWORD *); // eax
  int v33; // eax
  float *v34; // edi
  int v35; // eax
  double v36; // st7
  int (__thiscall *v37)(_DWORD *); // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  float v42[22]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v43[12]; // [esp+7Ch] [ebp-94h] BYREF
  float v44[16]; // [esp+88h] [ebp-88h] BYREF
  int *v45; // [esp+C8h] [ebp-48h]
  float v46[3]; // [esp+D8h] [ebp-38h] BYREF
  float v47[3]; // [esp+E4h] [ebp-2Ch] BYREF
  float v48; // [esp+F0h] [ebp-20h]
  float v49; // [esp+F4h] [ebp-1Ch]
  float v50; // [esp+F8h] [ebp-18h]
  float v51; // [esp+FCh] [ebp-14h]
  char v52; // [esp+103h] [ebp-Dh]
  int v53; // [esp+104h] [ebp-Ch]
  void *v54; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v53 = a2;
  v54 = retaddr;
  *(float *)&v5 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 368))(a1, a3, a4));
  v6 = *v5;
  v51 = *(float *)&v5;
  v7 = (float *)(*(int (__thiscall **)(float *))(LODWORD(v6) + 576))(v5);
  v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 576))(a1);
  sub_1001F180(v42, v8, v7);
  sub_10265570(v47, (int)a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v42,
    33570827,
    v47,
    v43);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v43, (int)v44, 255, 0, 0, 1, 5.0);
  v9 = a1[935];
  if ( v9 != -1 && off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v9 >> 12 && off_1061BE18[4 * (a1[935] & 0xFFF) + 1]
    || (v10 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1), !sub_100D7680(v10))
    || (v11 = a1[935], v11 != -1)
    && off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v11 >> 12
    && off_1061BE18[4 * (a1[935] & 0xFFF) + 1] )
  {
    v12 = (int *)LODWORD(v51);
    v52 = 0;
  }
  else
  {
    v12 = (int *)LODWORD(v51);
    v13 = *(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v51) + 264);
    v52 = 1;
    if ( !v13(LODWORD(v51)) )
      goto LABEL_19;
  }
  if ( v44[8] >= 1.0
    || v45 == v12
    || ((v14 = a1[935], v14 == -1) || (v12 = off_1061BE18, off_1061BE18[4 * (a1[935] & 0xFFF) + 2] != v14 >> 12)
      ? (v15 = 0)
      : (v15 = off_1061BE18[4 * (a1[935] & 0xFFF) + 1]),
        v45 == (int *)v15) )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1)
      && (v18 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1),
          (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 320))(v18)) )
    {
      sub_10325350((int)a1, (int)v12, (int)a1, 60.0);
    }
    else
    {
      v19 = a1[935];
      if ( v19 != -1 && off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v19 >> 12 && off_1061BE18[4 * (a1[935] & 0xFFF) + 1] )
      {
        sub_10326250((int)a1, 60.0);
      }
      else
      {
        v51 = 60.0;
        if ( v52 )
          sub_10325420((int)a1, v51);
        else
          sub_10325540((int)a1, v51);
      }
    }
    v20 = a1[935];
    if ( v20 != -1 )
    {
      v21 = &off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
      v22 = v20 >> 12;
      if ( off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v22 )
      {
        if ( *v21 )
        {
          if ( off_1061BE18[4 * (a1[935] & 0xFFF) + 2] == v22 )
            v23 = *v21;
          else
            v23 = 0;
          if ( (*(_DWORD *)(v23 + 252) & 0x800) != 0 )
            sub_100DAE60(v23);
          v24 = *(float *)(v23 + 708);
          v25 = *(int (__thiscall **)(_DWORD *))(*a1 + 368);
          v47[0] = 0.0;
          v47[2] = 0.0;
          v47[1] = v24;
          v26 = v25(a1);
          v27 = a1[935];
          if ( v27 == -1 || off_1061BE18[4 * (a1[935] & 0xFFF) + 2] != v27 >> 12 )
            v51 = 0.0;
          else
            v51 = *(float *)&off_1061BE18[4 * (a1[935] & 0xFFF) + 1];
          v28 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 576))(v26);
          v29 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v51) + 576))(COERCE_FLOAT(LODWORD(v51)));
          v30 = *a1;
          v48 = *v29 - *v28;
          v49 = v29[1] - v28[1];
          v31 = v29[2];
          v32 = *(int (__thiscall **)(_DWORD *))(v30 + 368);
          v50 = v31 - v28[2];
          v33 = v32(a1);
          v34 = (float *)v33;
          if ( (*(_DWORD *)(v33 + 252) & 0x800) != 0 )
            sub_100DAE60(v33);
          v35 = *a1;
          v36 = v34[145] + v48;
          v51 = COERCE_FLOAT(v46);
          v37 = *(int (__thiscall **)(_DWORD *))(v35 + 368);
          v46[0] = v36;
          v46[1] = v34[146] + v49;
          v46[2] = v34[147] + v50;
          v38 = v37(a1);
          sub_100E0D20(v38, (float *)LODWORD(v51));
          v39 = *a1;
          v51 = COERCE_FLOAT(v47);
          v40 = (*(int (__thiscall **)(_DWORD *))(v39 + 368))(a1);
          sub_100E0EA0(v40, (float *)LODWORD(v51));
        }
      }
    }
    return;
  }
LABEL_19:
  v16 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 320))(v16) )
  {
    v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
    if ( v17 )
    {
      a1[2475] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
      sub_103244B0((int)a1, 0);
      return;
    }
    a1[2475] = -1;
  }
  sub_103244B0((int)a1, 0);
}
