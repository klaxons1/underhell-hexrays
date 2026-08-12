bool __userpurge sub_10186ED0@<al>(_DWORD *a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // eax
  float v5; // edx
  double v7; // st7
  float v8; // ecx
  int v9; // edi
  unsigned __int8 *v10; // ebx
  int v11; // edx
  void (__thiscall *v12)(_DWORD *, float *, float *); // eax
  float *v13; // eax
  bool result; // al
  void (__thiscall *v15)(_DWORD *, float *, float *); // eax
  void (__thiscall *v16)(_DWORD *, float *, float *); // eax
  void (__thiscall *v17)(_DWORD *, float *, float *); // eax
  void (__thiscall *v18)(_DWORD *, float *, float *); // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  int v23; // edi
  double v24; // st7
  int v25; // ebx
  int v26; // ebx
  double v27; // st7
  int v28; // esi
  int v29; // edi
  unsigned __int16 v32[64]; // [esp+54h] [ebp-128h] BYREF
  float v33[2]; // [esp+D4h] [ebp-A8h] BYREF
  float v34[2]; // [esp+DCh] [ebp-A0h] BYREF
  float v35[2]; // [esp+E4h] [ebp-98h] BYREF
  float v36[2]; // [esp+ECh] [ebp-90h] BYREF
  float v37[16]; // [esp+F4h] [ebp-88h] BYREF
  float v38; // [esp+134h] [ebp-48h]
  unsigned __int8 *v39; // [esp+138h] [ebp-44h]
  unsigned __int8 *v40; // [esp+13Ch] [ebp-40h] BYREF
  int v41; // [esp+140h] [ebp-3Ch]
  float v42; // [esp+144h] [ebp-38h] BYREF
  int v43; // [esp+148h] [ebp-34h]
  float v44; // [esp+14Ch] [ebp-30h]
  float v45; // [esp+150h] [ebp-2Ch] BYREF
  float v46; // [esp+154h] [ebp-28h]
  float v47; // [esp+158h] [ebp-24h]
  float v48; // [esp+15Ch] [ebp-20h] BYREF
  float v49; // [esp+160h] [ebp-1Ch]
  float v50; // [esp+164h] [ebp-18h]
  float v51; // [esp+168h] [ebp-14h] BYREF
  float v52; // [esp+16Ch] [ebp-10h]
  int v53; // [esp+170h] [ebp-Ch] BYREF
  int v54; // [esp+174h] [ebp-8h]
  float v55; // [esp+178h] [ebp-4h]

  v4 = a4;
  v5 = *(float *)(a4 + 52);
  v44 = *(float *)(a4 + 76);
  a4 = *(int *)(a4 + 64);
  v7 = *(float *)(v4 + 80);
  v48 = *(float *)(v4 + 48);
  v38 = v7;
  v8 = *(float *)(v4 + 56);
  v55 = 0.0;
  v9 = *(_DWORD *)(v4 + 8);
  v10 = (unsigned __int8 *)(v4 + 12);
  v49 = v5;
  v11 = *(_DWORD *)(v4 + 92);
  v50 = v8;
  v39 = (unsigned __int8 *)(v4 + 84);
  v12 = *(void (__thiscall **)(_DWORD *, float *, float *))(*a1 + 116);
  v41 = v11;
  v40 = v10;
  v12(a1, &v51, &v48);
  v13 = sub_101859B0((int)a1, &v42, &v51);
  v51 = *v13;
  v52 = v13[1];
  result = sub_10185900(a1, &v51);
  if ( result )
  {
    *(float *)&v43 = -v44;
    v53 = v43;
    *(float *)&v54 = v44;
    sub_101EE800((int)&v53, *(float *)&a4, (int)&v53);
    v15 = *(void (__thiscall **)(_DWORD *, float *, float *))(*a1 + 116);
    v45 = v48 + *(float *)&v53;
    v46 = v49 + *(float *)&v54;
    v47 = v50 + v55;
    v15(a1, v36, &v45);
    *(float *)&v53 = v44;
    *(float *)&v54 = v44;
    sub_101EE800((int)&v53, *(float *)&a4, (int)&v53);
    v16 = *(void (__thiscall **)(_DWORD *, float *, float *))(*a1 + 116);
    v45 = v48 + *(float *)&v53;
    v46 = v49 + *(float *)&v54;
    v47 = v50 + v55;
    v16(a1, v34, &v45);
    *(float *)&v53 = v44;
    v54 = v43;
    sub_101EE800((int)&v53, *(float *)&a4, (int)&v53);
    v45 = v48 + *(float *)&v53;
    v46 = v49 + *(float *)&v54;
    v17 = *(void (__thiscall **)(_DWORD *, float *, float *))(*a1 + 116);
    v47 = v50 + v55;
    v17(a1, v33, &v45);
    v53 = v43;
    v54 = v43;
    sub_101EE800((int)&v53, *(float *)&a4, (int)&v53);
    v18 = *(void (__thiscall **)(_DWORD *, float *, float *))(*a1 + 116);
    v45 = v48 + *(float *)&v53;
    v46 = v49 + *(float *)&v54;
    v47 = v50 + v55;
    v18(a1, v35, &v45);
    v19 = sub_101859B0((int)a1, &v42, v36);
    v37[0] = *v19;
    v37[1] = v19[1];
    v37[2] = 0.0;
    v37[3] = 0.0;
    v20 = sub_101859B0((int)a1, &v42, v34);
    v37[4] = *v20;
    v37[5] = v20[1];
    v37[6] = 1.0;
    v37[7] = 0.0;
    v21 = sub_101859B0((int)a1, &v42, v33);
    v37[8] = *v21;
    v37[9] = v21[1];
    v37[10] = 1.0;
    v37[11] = 1.0;
    v22 = sub_101859B0((int)a1, &v42, v35);
    v37[12] = *v22;
    v37[13] = v22[1];
    v37[14] = 0.0;
    v37[15] = 1.0;
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
      dword_1047CA6C,
      255,
      255,
      255,
      255);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, v9);
    (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA6C + 396))(dword_1047CA6C, 4, v37);
    *(float *)&v23 = COERCE_FLOAT(sub_10186780(a1, v44));
    a4 = v23 + 4;
    v43 = v23;
    v52 = (double)(v23 + 4) + v52;
    if ( v38 >= 0.0 && v38 <= 1.0 && v39 )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(
        dword_1047CA6C,
        0,
        0,
        0,
        255);
      v24 = (double)v43;
      v25 = *(_DWORD *)dword_1047CA6C;
      *(float *)&a4 = v24;
      (*(void (__thiscall **)(int, int, int, int, int))(v25 + 48))(
        dword_1047CA6C,
        (int)(v51 - v24),
        (int)(v52 - 1.0),
        (int)(v24 + v51),
        (int)(v52 + 1.0));
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(*v39, v39[1], v39[2], 255);
      v26 = *(_DWORD *)dword_1047CA6C;
      v27 = v51 - *(float *)&a4;
      a4 = (int)((double)(2 * v23) * v38);
      (*(void (__thiscall **)(int, int, int, int, int))(v26 + 48))(
        dword_1047CA6C,
        (int)v27,
        (int)(v52 - 1.0),
        (int)((double)a4 + v27),
        (int)(v52 + 1.0));
      v10 = v40;
      v52 = v52 + 3.0;
    }
    if ( v41 )
    {
      if ( v10 )
      {
        (*(void (__thiscall **)(int, int, unsigned __int16 *, int, int, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v41,
          v32,
          128,
          a2,
          a3);
        (*(void (__thiscall **)(int, _DWORD, unsigned __int16 *, int *, unsigned __int8 **))(*(_DWORD *)dword_1047CA6C
                                                                                           + 288))(
          dword_1047CA6C,
          a1[1575],
          v32,
          &a4,
          &v40);
        v41 = a4 / 2;
        v28 = (int)(v51 - (double)(a4 / 2));
        v29 = (int)v52;
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 76))(
          dword_1047CA6C,
          0,
          0,
          0,
          255);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v28 + 1, v29);
        (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
          dword_1047CA6C,
          v32,
          wcslen(v32),
          0);
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 76))(*v10, v10[1], v10[2], 255);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v28, v29);
        wcslen(v32);
        (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)dword_1047CA6C + 88))(dword_1047CA6C, v32);
      }
    }
    return 1;
  }
  return result;
}
