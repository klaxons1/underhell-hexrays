char __usercall sub_1001EB70@<al>(int a1@<ebp>, int a2, const void *a3, int *a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  char v12; // cl
  char v13; // dl
  __int16 v14; // cx
  char v15; // dl
  double v16; // st7
  double v17; // st6
  double v18; // st6
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  float v24[22]; // [esp+18h] [ebp-CCh] BYREF
  float v25[10]; // [esp+70h] [ebp-74h] BYREF
  char v26; // [esp+98h] [ebp-4Ch]
  char v27; // [esp+99h] [ebp-4Bh]
  __int16 v28; // [esp+9Ah] [ebp-4Ah]
  float v29; // [esp+9Ch] [ebp-48h]
  char v30; // [esp+A6h] [ebp-3Eh]
  char v31; // [esp+A7h] [ebp-3Dh]
  int v32; // [esp+C8h] [ebp-1Ch]
  int v33; // [esp+CCh] [ebp-18h]
  int v34; // [esp+D0h] [ebp-14h]
  int v35; // [esp+D4h] [ebp-10h]
  int v36; // [esp+D8h] [ebp-Ch]
  void *v37; // [esp+DCh] [ebp-8h]
  void *retaddr; // [esp+E4h] [ebp+0h]

  v36 = a1;
  v37 = retaddr;
  *(float *)(a8 + 44) = 1.0;
  *(_BYTE *)(a8 + 55) = 0;
  qmemcpy(v24, a3, 0x50u);
  v33 = -1;
  v35 = 0;
  if ( *(int *)(a5 + 4) <= 0 )
    return 0;
  v34 = 0;
  while ( 1 )
  {
    v8 = v34 + *(_DWORD *)(a5 + 8);
    v9 = *(_DWORD *)(v8 + a5);
    v10 = *a4;
    v11 = a5 + v8;
    v32 = v9;
    if ( (a7 & *(_DWORD *)(*(_DWORD *)(v10 + 160) + 216 * v9 + v10 + 180)) != 0 )
    {
      if ( (unsigned __int8)sub_10091820((int)v24, *(_DWORD *)(a6 + 4 * v32), v11 + 8, v11 + 20, 0.0, (int)v25) )
      {
        *(float *)a8 = v25[0];
        v12 = v26;
        v13 = v27;
        *(float *)(a8 + 4) = v25[1];
        *(float *)(a8 + 8) = v25[2];
        *(float *)(a8 + 12) = v25[3];
        *(float *)(a8 + 16) = v25[4];
        *(float *)(a8 + 20) = v25[5];
        *(_BYTE *)(a8 + 40) = v12;
        v14 = v28;
        *(float *)(a8 + 24) = v25[6];
        *(_BYTE *)(a8 + 41) = v13;
        v15 = v30;
        *(float *)(a8 + 28) = v25[7];
        *(float *)(a8 + 32) = v25[8];
        *(float *)(a8 + 36) = v25[9];
        *(_WORD *)(a8 + 42) = v14;
        v16 = v29;
        LOBYTE(v14) = v31;
        v17 = v29;
        *(_BYTE *)(a8 + 54) = v15;
        v18 = v17 * *(float *)(a8 + 44);
        v19 = v35;
        *(_BYTE *)(a8 + 55) = v14;
        v33 = v19;
        *(float *)(a8 + 44) = v18;
        v24[4] = v24[4] * v16;
        v24[5] = v24[5] * v16;
        v24[6] = v16 * v24[6];
        if ( (_BYTE)v14 )
          break;
      }
    }
    v34 += 68;
    v20 = a8;
    if ( ++v35 >= *(_DWORD *)(a5 + 4) )
    {
      v19 = v33;
      goto LABEL_8;
    }
  }
  v20 = a8;
LABEL_8:
  if ( v19 < 0 )
    return 0;
  v21 = *(_DWORD *)(68 * v19 + *(_DWORD *)(a5 + 8) + a5 + 4);
  *(_DWORD *)(v20 + 80) = v19;
  *(_DWORD *)(v20 + 68) = v21;
  v22 = *a4 + *(_DWORD *)(*a4 + 160) + 216 * *(_DWORD *)(68 * v19 + *(_DWORD *)(a5 + 8) + a5);
  *(_DWORD *)(v20 + 48) = *(_DWORD *)(v22 + 180) | 0x40000000;
  *(_WORD *)(v20 + 72) = *(_WORD *)(v22 + 172);
  *(_DWORD *)(v20 + 60) = "**studio**";
  *(_WORD *)(v20 + 66) = 0x8000;
  *(_WORD *)(a8 + 64) = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 12))(a2, v22 + *(_DWORD *)(v22 + 176));
  return 1;
}
