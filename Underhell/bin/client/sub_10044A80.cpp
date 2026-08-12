// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_10044A80@<eax>(
        float *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7)
{
  float v8; // edi
  float *v9; // eax
  float *result; // eax
  float *v11; // eax
  int (__thiscall *v12)(float *); // edx
  float *v13; // eax
  unsigned __int8 (__thiscall *v14)(_DWORD); // eax
  double v15; // st7
  double v16; // st7
  void (__thiscall *v17)(int, float *, int, void ***); // edx
  float v18; // ecx
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // st5
  double v23; // st6
  double v24; // st7
  float v26[22]; // [esp+30h] [ebp-FCh] BYREF
  _BYTE v27[12]; // [esp+88h] [ebp-A4h] BYREF
  float v28[19]; // [esp+94h] [ebp-98h] BYREF
  void **v29; // [esp+E0h] [ebp-4Ch] BYREF
  float v30[3]; // [esp+ECh] [ebp-40h] BYREF
  float v31; // [esp+F8h] [ebp-34h]
  float v32; // [esp+FCh] [ebp-30h] BYREF
  float v33; // [esp+100h] [ebp-2Ch]
  float v34; // [esp+104h] [ebp-28h]
  float v35; // [esp+108h] [ebp-24h] BYREF
  float v36; // [esp+10Ch] [ebp-20h]
  float v37; // [esp+110h] [ebp-1Ch]
  float v38; // [esp+114h] [ebp-18h] BYREF
  float v39; // [esp+118h] [ebp-14h]
  float v40; // [esp+11Ch] [ebp-10h]
  int v41; // [esp+120h] [ebp-Ch]
  void *v42; // [esp+124h] [ebp-8h]
  void *retaddr; // [esp+12Ch] [ebp+0h]

  v41 = a2;
  v42 = retaddr;
  v8 = COERCE_FLOAT((*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 848))(a1, a3, a4));
  if ( v8 == 0.0 )
  {
    v9 = (float *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 532))(a1, &v35);
    *a5 = *v9;
    a5[1] = v9[1];
    a5[2] = v9[2];
    result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 536))(a1);
    *a6 = *result;
    a6[1] = result[1];
    a6[2] = result[2];
    return result;
  }
  if ( !(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v8) + 164))(COERCE_FLOAT(LODWORD(v8)))
    && !(*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(v8) + 4) + 36))(LODWORD(v8) + 4) )
  {
    return (float *)(*(int (__thiscall **)(float *, float *, float *, float *))(*(_DWORD *)a1 + 1056))(a1, a5, a6, a7);
  }
  (*(void (__thiscall **)(float, float *))(*(_DWORD *)LODWORD(v8) + 172))(COERCE_FLOAT(LODWORD(v8)), &v38);
  v11 = (float *)(*(int (__thiscall **)(float *, float *, float))(*(_DWORD *)a1 + 1040))(
                   a1,
                   &v35,
                   COERCE_FLOAT(LODWORD(v8)));
  v38 = *v11 + v38;
  v39 = v11[1] + v39;
  v12 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 844);
  v40 = v11[2] + v40;
  if ( v12(a1) == 4 )
  {
    v13 = a6;
LABEL_11:
    v32 = *v13;
    v33 = v13[1];
    v34 = v13[2];
    goto LABEL_12;
  }
  if ( (float *)dword_10407394 != a1 )
  {
    v13 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 536))(a1);
    goto LABEL_11;
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v32);
LABEL_12:
  a1[1023] = *((float *)off_103DC81C + 4) * 48.0 + a1[1023];
  v14 = *(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v8) + 528);
  v31 = 96.0;
  if ( v14(LODWORD(v8)) )
    v15 = 240.0;
  else
    v15 = v31;
  if ( v15 >= a1[1023] )
  {
    v15 = 16.0;
    if ( a1[1023] >= 16.0 )
      v15 = a1[1023];
  }
  a1[1023] = v15;
  sub_101EDFB0(&v32, v30);
  off_103EDFEC();
  v16 = -a1[1023];
  v35 = v30[0] * v16 + v38;
  v36 = v30[1] * v16 + v8;
  sub_1012D400(LODWORD(v8), 0);
  v29 = &CTraceFilterNoNPCsOrPlayer::`vftable';
  sub_10034140(0);
  sub_1000E4B0(v26, &v38, &v35, flt_103D9A3C, flt_103D9A48);
  v17 = *(void (__thiscall **)(int, float *, int, void ***))(*(_DWORD *)dword_104131A0 + 16);
  v40 = COERCE_FLOAT(v27);
  v17(dword_104131A0, v26, 33570827, &v29);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v27, (int)v28, 255, 255, 0, 1, -1.0);
  sub_10034180();
  if ( v28[8] < 1.0 )
  {
    v39 = v18;
    v35 = v28[0];
    v36 = v28[1];
    v37 = v28[2];
    v19 = v18 - a5[1];
    v20 = v19 * v19;
    v21 = v38 - *a5;
    v22 = v20;
    v23 = v40 - a5[2];
    v39 = v21 * v21 + v22 + v23 * v23;
    a1[1023] = off_103EDFE0(v39);
  }
  *a6 = v32;
  a6[1] = v33;
  a6[2] = v34;
  *a5 = v35;
  a5[1] = v36;
  a5[2] = v37;
  v24 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)a1 + 952))(a1);
  result = a7;
  *a7 = v24;
  return result;
}
