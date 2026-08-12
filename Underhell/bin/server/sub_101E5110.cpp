void __usercall sub_101E5110(int a1@<ecx>, int a2@<edi>)
{
  float v3; // eax
  float v4; // edx
  double v5; // st7
  bool v6; // c0
  double v7; // st7
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  float *v11; // ecx
  double v12; // st5
  double v13; // st6
  float *v14; // eax
  double v15; // st4
  double v16; // st6
  char v17; // al
  int v18; // edi
  double v19; // st7
  int v20; // edi
  float *v21; // eax
  _BYTE v23[20]; // [esp+18h] [ebp-7Ch] BYREF
  float v24; // [esp+2Ch] [ebp-68h]
  float v25; // [esp+44h] [ebp-50h]
  char v26; // [esp+4Eh] [ebp-46h]
  char v27; // [esp+4Fh] [ebp-45h]
  float v28[2]; // [esp+6Ch] [ebp-28h] BYREF
  float v29; // [esp+74h] [ebp-20h]
  float v30; // [esp+78h] [ebp-1Ch] BYREF
  float v31; // [esp+7Ch] [ebp-18h]
  float v32; // [esp+80h] [ebp-14h]
  float v33; // [esp+84h] [ebp-10h]
  float v34; // [esp+88h] [ebp-Ch]
  float v35; // [esp+8Ch] [ebp-8h]
  float v36; // [esp+90h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 3588) )
    return;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v3 = *(float *)(a1 + 588);
  v4 = *(float *)(a1 + 584);
  v33 = *(float *)(a1 + 580);
  v5 = *(float *)(dword_106B31C8 + 16);
  v35 = v3;
  v36 = v5;
  v34 = v4;
  if ( v5 <= 0.0 )
  {
    v7 = 0.1;
    goto LABEL_12;
  }
  v6 = v5 > 0.1;
  v7 = 0.1;
  if ( v6 )
LABEL_12:
    v36 = v7;
  v8 = sub_101C5260((_DWORD *)a1);
  if ( v8
    && *(_BYTE *)(v8 + 306) == 6
    && (v9 = *(_DWORD *)(v8 + 424)) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9) )
  {
    v10 = v9;
  }
  else
  {
    v10 = 0;
    if ( *(_BYTE *)(a1 + 3624) )
    {
      v11 = (float *)off_10668020;
      if ( *((float *)off_10668020 + 25) > 0.0 || (*(_BYTE *)(a1 + 256) & 1) == 0 )
        goto LABEL_18;
      v12 = *((float *)off_10668020 + 27) * v36 + *(float *)(a1 + 3604);
      v13 = v36 * *((float *)off_10668020 + 28) + *(float *)(a1 + 3608);
      v30 = (*((float *)off_10668020 + 26) * v36 + *(float *)(a1 + 3600)) * 0.5;
      v31 = v12 * 0.5;
      v32 = 0.5 * v13;
      v14 = (float *)sub_10019640((_DWORD *)a1);
      v15 = v14[2];
      v16 = v14[1] * 0.5 + v31;
      v33 = *v14 * 0.5 + v30;
      v34 = v16;
      v35 = 0.5 * v15 + v32;
    }
  }
  v11 = (float *)off_10668020;
LABEL_18:
  v17 = *(_BYTE *)(a1 + 306);
  if ( v17 == 8 || v17 == 10 )
    v18 = 2;
  else
    v18 = (*(_BYTE *)(a1 + 256) & 2) != 0;
  if ( v18 != *(_DWORD *)(a1 + 3544) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_101E34F0(a1, a1 + 580, a1 + 476, v18);
    v11 = (float *)off_10668020;
  }
  if ( !*(_BYTE *)(a1 + 3624) && !v10 )
  {
    if ( *(float *)(a1 + 4132) <= 0.0 )
      v19 = *(float *)(dword_106B7104 + 44);
    else
      v19 = *(float *)(a1 + 4132);
    v11[26] = v19;
    v11[27] = v19;
    v11[28] = v19;
    v11 = (float *)off_10668020;
  }
  if ( v11[25] > 0.1 )
  {
    if ( v11[25] <= 4.0 )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD, int))(**(_DWORD **)(a1 + 424) + 188))(
        *(_DWORD *)(a1 + 424),
        &v30,
        0,
        a2);
      v28[0] = v30;
      v28[1] = v31;
      v29 = v32;
      v29 = v32 + *((float *)off_10668020 + 25);
      sub_10265A60(a1, &v30, v28, 33636363, a1, 8, v23);
      if ( v25 < 1.0 || v26 || v27 )
        *((float *)off_10668020 + 25) = v24 - v32;
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 3588) + 28))(*((float *)off_10668020 + 25));
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 424);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      (*(void (__thiscall **)(int, int, float *, int))(*(_DWORD *)v20 + 180))(v20, a1 + 580, &flt_106F1CB4, 1);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 3588) + 32))(*(_DWORD *)(a1 + 3588));
    v11 = (float *)off_10668020;
  }
  v11[25] = 0.0;
  *(float *)(a1 + 4332) = v33;
  *(float *)(a1 + 4336) = v34;
  *(float *)(a1 + 4340) = v35;
  v21 = (float *)off_10668020;
  *(float *)(a1 + 4344) = *((float *)off_10668020 + 26);
  *(float *)(a1 + 4348) = v21[27];
  *(float *)(a1 + 4352) = v21[28];
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  *(float *)(a1 + 3600) = *(float *)(a1 + 580);
  *(float *)(a1 + 3604) = *(float *)(a1 + 584);
  *(float *)(a1 + 3608) = *(float *)(a1 + 588);
}
