int __userpurge sub_101A4520@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st7
  int (__thiscall *v8)(int, int, int); // edx
  float *v9; // eax
  int (__thiscall *v10)(int); // edx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  double v14; // st7
  int (__thiscall *v15)(int); // eax
  float *v16; // eax
  float v18; // [esp+18h] [ebp-58h]
  int v19[2]; // [esp+38h] [ebp-38h] BYREF
  float v20; // [esp+40h] [ebp-30h]
  float v21; // [esp+44h] [ebp-2Ch]
  float v22; // [esp+48h] [ebp-28h]
  float v23; // [esp+4Ch] [ebp-24h]
  int v24; // [esp+50h] [ebp-20h] BYREF
  float v25; // [esp+54h] [ebp-1Ch]
  float v26; // [esp+58h] [ebp-18h]
  float v27; // [esp+5Ch] [ebp-14h]
  float v28; // [esp+60h] [ebp-10h]
  float v29; // [esp+64h] [ebp-Ch]
  int v30; // [esp+68h] [ebp-8h]
  int v31; // [esp+6Ch] [ebp-4h]
  float v32; // [esp+78h] [ebp+8h]
  int v33; // [esp+78h] [ebp+8h]

  if ( a4 >= 0 )
    return sub_10026910((_BYTE *)a1, a4);
  v31 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          "effects/muzzleflash1",
          0,
          0,
          0);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 36))(a1 - 4);
  v27 = *v5 - *(float *)(a1 + 3348);
  v28 = v5[1] - *(float *)(a1 + 3352);
  v29 = v5[2] - *(float *)(a1 + 3356);
  v6 = off_103EDFEC();
  if ( v6 > 32.0 )
  {
    v6 = 32.0;
LABEL_5:
    v7 = v6 * 0.5;
    if ( v7 >= 4.0 )
      v7 = 4.0;
    v32 = v7;
    v8 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)(a1 - 4) + 36);
    v21 = v27 * 24.0;
    v22 = v28 * 24.0;
    v23 = 24.0 * v29;
    v9 = (float *)v8(a1 - 4, a2, a3);
    *(float *)&v24 = *v9 + v21;
    v25 = v9[1] + v22;
    v26 = v9[2] + v23;
    v10 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
    v21 = -v27 * v32;
    v22 = -v28 * v32;
    v23 = v32 * -v29;
    v11 = v10(dword_1047C96C);
    v30 = v11;
    if ( v11 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 36))(v11, v31, 0);
    v12 = 0;
    v33 = 0;
    do
    {
      *(float *)&v24 = v21 + *(float *)&v24;
      v25 = v22 + v25;
      v26 = v23 + v26;
      v18 = (float)v33;
      v20 = sub_100260E0(v18, 5.0, 11.0, 0.25, 0.050000001);
      *(float *)&v19[1] = v20;
      *(float *)v19 = v20;
      sub_10017340(v12++, v31, (float *)&v24, 3.0, (float *)v19, 1.0);
      v33 = v12;
    }
    while ( v12 < 20 );
    v13 = v30;
    (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 12))(v30);
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = 0.0;
    goto LABEL_13;
  }
  if ( v6 > 0.0 )
    goto LABEL_5;
  v14 = 0.0;
LABEL_13:
  if ( v14 < *((float *)off_103DC81C + 4) && !*(_BYTE *)(a1 + 3360) )
  {
    v15 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 36);
    *(_BYTE *)(a1 + 3360) = 1;
    v16 = (float *)v15(a1 - 4);
    *(float *)(a1 + 3348) = *v16;
    *(float *)(a1 + 3352) = v16[1];
    *(float *)(a1 + 3356) = v16[2];
  }
  return 1;
}
