char __userpurge sub_10363720@<al>(int a1@<ecx>, int a2@<edi>, float a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // ebx
  int *v6; // ecx
  unsigned int v7; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  float *v12; // eax
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  double v18; // st7
  char v19; // bl
  int v20; // eax
  int v21; // eax
  float *v22; // eax
  double v23; // st7
  __int64 v24; // [esp+0h] [ebp-5Ch]
  float v26; // [esp+Ch] [ebp-50h]
  float v27; // [esp+Ch] [ebp-50h]
  float v28[3]; // [esp+18h] [ebp-44h] BYREF
  float v29; // [esp+24h] [ebp-38h] BYREF
  float v30; // [esp+28h] [ebp-34h]
  float v31; // [esp+2Ch] [ebp-30h]
  float v32; // [esp+30h] [ebp-2Ch] BYREF
  float v33; // [esp+34h] [ebp-28h]
  float v34; // [esp+38h] [ebp-24h]
  float v35; // [esp+3Ch] [ebp-20h] BYREF
  float v36; // [esp+40h] [ebp-1Ch]
  float v37; // [esp+44h] [ebp-18h]
  float v38; // [esp+48h] [ebp-14h] BYREF
  float v39; // [esp+4Ch] [ebp-10h]
  float v40; // [esp+50h] [ebp-Ch]
  float v41; // [esp+54h] [ebp-8h]
  unsigned int *v42; // [esp+58h] [ebp-4h]
  float v43; // [esp+64h] [ebp+8h]

  v4 = *(_DWORD *)(a1 + 4184);
  v5 = (_DWORD *)(a1 + 4184);
  v42 = (unsigned int *)(a1 + 4184);
  if ( v4 == -1 )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 1312))(a1, "Ack! No Phys Object!");
  v6 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
  v7 = v4 >> 12;
  if ( v6[1] != v7 || !*v6 )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 1312))(a1, "Ack! No Phys Object!");
  if ( v6[1] == v7 )
    v9 = *v6;
  else
    v9 = 0;
  v10 = *(_DWORD *)(v9 + 424);
  if ( !v10 )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 1312))(a1, "Pulling object with no Phys Object?!");
  if ( ((*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v10 + 76))(*(_DWORD *)(v9 + 424), a2) & 4) != 0 )
  {
    *(_BYTE *)(a1 + 4288) = 0;
    sub_10360B50((_DWORD *)a1);
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 1312))(a1, "Player Grabbed Ball");
  }
  else
  {
    sub_10363410(a1);
    sub_100BD6D0((void *)a1, *(_DWORD *)(a1 + 4192), (int)&v29, 0, 0, 0);
    if ( *v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*v5 & 0xFFF) + 1];
    v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
    v13 = v30 - v12[1];
    v14 = v13 * v13;
    v15 = v29 - *v12;
    v16 = v14;
    v17 = v31 - v12[2];
    v26 = v15 * v15 + v16 + v17 * v17;
    v18 = off_10689708(v26);
    v19 = LOBYTE(a3);
    v41 = v18;
    if ( LOBYTE(a3) || v18 > 48.0 )
    {
      v21 = sub_1026A890(v42);
      v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 576))(v21);
      v35 = v29 - *v22;
      v36 = v30 - v22[1];
      v37 = v31 - v22[2];
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v10 + 204))(v10, &v38, &v32);
      v27 = v39 * v39 + v38 * v38 + v40 * v40;
      v43 = off_10689708(v27);
      off_10689714();
      off_10689714();
      v23 = 0.1;
      if ( v19 == 1 )
        v23 = 0.2;
      v38 = v38 * v43 * v23;
      v39 = v39 * v43 * v23;
      v40 = v23 * (v43 * v40);
      v32 = v32 * 0.80000001;
      v33 = v33 * 0.80000001;
      v34 = 0.80000001 * v34;
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v10 + 196))(v10, &v38);
      v35 = v35 * v41 * 4.0;
      v36 = v36 * v41 * 4.0;
      v37 = v41 * v37 * 4.0;
      v28[0] = 0.0;
      v28[1] = 0.0;
      v28[2] = 0.0;
      return (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v10 + 208))(v10, &v35, v28);
    }
    else
    {
      v20 = sub_1026A890(v42);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 76))(v20, a1);
      sub_10082A70(*(float **)(a1 + 2588), 1u);
      HIDWORD(v24) = a1;
      LODWORD(v24) = a1;
      sub_1010DD80((_DWORD *)(a1 + 4252), v24, 0.0);
      *(_BYTE *)(a1 + 4288) = 1;
      sub_10360B50((_DWORD *)a1);
      return sub_10027CD0((_DWORD *)a1, 0);
    }
  }
}
