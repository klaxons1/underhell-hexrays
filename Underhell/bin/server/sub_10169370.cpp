char __usercall sub_10169370@<al>(int a1@<ebp>, _BYTE *a2, int a3, float *a4, float a5)
{
  float v5; // eax
  float v6; // ecx
  int v7; // edx
  int (__thiscall *v8)(int); // eax
  int v9; // eax
  int v10; // edx
  float *v11; // eax
  double v12; // st7
  int (__thiscall *v13)(int); // edx
  int v14; // eax
  double v15; // st7
  int (__thiscall *v16)(int); // edx
  int v17; // eax
  double v18; // st7
  float v20; // [esp+28h] [ebp-104h]
  float v21; // [esp+28h] [ebp-104h]
  float v22; // [esp+28h] [ebp-104h]
  float v23; // [esp+2Ch] [ebp-100h]
  float v24; // [esp+2Ch] [ebp-100h]
  float v25; // [esp+2Ch] [ebp-100h]
  float v26[22]; // [esp+40h] [ebp-ECh] BYREF
  _BYTE v27[12]; // [esp+98h] [ebp-94h] BYREF
  float v28[20]; // [esp+A4h] [ebp-88h] BYREF
  int v29; // [esp+F4h] [ebp-38h] BYREF
  float v30[3]; // [esp+100h] [ebp-2Ch] BYREF
  int v31; // [esp+10Ch] [ebp-20h]
  float v32; // [esp+110h] [ebp-1Ch] BYREF
  float v33; // [esp+114h] [ebp-18h]
  float v34; // [esp+118h] [ebp-14h]
  float *v35; // [esp+11Ch] [ebp-10h]
  int v36; // [esp+120h] [ebp-Ch]
  void *v37; // [esp+124h] [ebp-8h]
  void *retaddr; // [esp+12Ch] [ebp+0h]

  v36 = a1;
  v37 = retaddr;
  if ( a2[447] == 3 )
  {
    if ( *(_BYTE *)(a3 + 447) )
      goto LABEL_5;
    return 0;
  }
  if ( *(_BYTE *)(a3 + 447) == 3 )
    return 0;
LABEL_5:
  (*(void (__stdcall **)(float *))(*(_DWORD *)a2 + 504))(v30);
  v31 = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v5 = *(float *)(a3 + 584);
    v6 = *(float *)(a3 + 588);
    v32 = *(float *)(a3 + 580);
    v7 = *(_DWORD *)(a3 + 320);
    v33 = v5;
    v8 = *(int (__thiscall **)(int))(v7 + 8);
    v34 = v6;
    v9 = v8(a3 + 320);
    v10 = *(_DWORD *)(a3 + 320);
    v35 = (float *)v9;
    v11 = (float *)(*(int (__thiscall **)(int))(v10 + 4))(a3 + 320);
    v23 = *v35 - a5;
    v20 = a5 + *v11;
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            LODWORD(v20),
            LODWORD(v23));
    v13 = *(int (__thiscall **)(int))(*(_DWORD *)(a3 + 320) + 8);
    v32 = v12 + v32;
    v35 = (float *)v13(a3 + 320);
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)(a3 + 320) + 4))(a3 + 320);
    v24 = v35[1] - a5;
    v21 = a5 + *(float *)(v14 + 4);
    v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            LODWORD(v21),
            LODWORD(v24));
    v16 = *(int (__thiscall **)(int))(*(_DWORD *)(a3 + 320) + 8);
    v33 = v15 + v33;
    v35 = (float *)v16(a3 + 320);
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)(a3 + 320) + 4))(a3 + 320);
    v25 = v35[2] - a5;
    v22 = a5 + *(float *)(v17 + 8);
    v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            LODWORD(v22),
            LODWORD(v25));
    v34 = v18 + v34;
    sub_1001F180(v26, v30, &v32);
    sub_10265570(a2, 0);
    (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v26,
      16449,
      &v29,
      v27);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v27, (int)v28, 255, 0, 0, 1, 5.0);
    if ( 1.0 == v28[8] )
      break;
    if ( ++v31 >= 5 )
      return 0;
  }
  *a4 = v32;
  a4[1] = v33;
  a4[2] = v34;
  return 1;
}
