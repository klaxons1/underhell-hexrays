int __userpurge sub_101CA610@<eax>(int a1@<ecx>, int a2@<esi>, int a3, int a4, int a5, float *a6, float *a7)
{
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edx
  int *v11; // edi
  int v12; // edx
  double v13; // st7
  int v14; // edx
  int (__thiscall *v15)(int); // eax
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v19; // eax
  int v20; // edi
  double v21; // st7
  unsigned __int8 (__thiscall *v22)(int, _DWORD, _DWORD); // eax
  float v23; // [esp+10h] [ebp-60h]
  float v24[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v25[3]; // [esp+30h] [ebp-40h] BYREF
  int v26[3]; // [esp+3Ch] [ebp-34h] BYREF
  float v27[3]; // [esp+48h] [ebp-28h] BYREF
  int v28; // [esp+54h] [ebp-1Ch] BYREF
  float v29; // [esp+58h] [ebp-18h]
  float v30; // [esp+5Ch] [ebp-14h]
  int v31; // [esp+60h] [ebp-10h]
  float v32; // [esp+64h] [ebp-Ch]
  float v33; // [esp+68h] [ebp-8h]
  int v34; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  v7 = a1;
  v8 = a1 - 800;
  v34 = a1;
  if ( !sub_101CA2A0(a1 - 800, (int)&savedregs, a1, a2) )
    return 0;
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a4 + 76))(a4) & 4) != 0 )
  {
    v9 = sub_10261B20();
    if ( v9 )
    {
      v10 = *(_DWORD *)(v7 + 12);
      if ( v10 != -1 )
      {
        v11 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 12) & 0xFFF) + 1];
        if ( v11[1] == v10 >> 12 )
        {
          v12 = *v11;
          v7 = v34;
LABEL_9:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 1476))(v9, v12);
          goto LABEL_10;
        }
        v7 = v34;
      }
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  v13 = *(float *)(v8 + 820) + *(float *)(dword_106B31C8 + 12);
  *(float *)(v8 + 824) = v13;
  v23 = v13;
  sub_100EC4A0((int *)v8, v23, 0);
  *a7 = 0.0;
  v14 = *(_DWORD *)a4;
  a7[1] = 0.0;
  a7[2] = 0.0;
  v15 = *(int (__thiscall **)(int))(v14 + 76);
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  if ( (v15(a4) & 0x10) != 0 )
  {
    v16 = *(_DWORD *)(v7 + 12);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(v7 + 12) & 0xFFF) + 2] != v16 >> 12 )
      v17 = 0;
    else
      v17 = off_1061BE18[4 * (*(_DWORD *)(v7 + 12) & 0xFFF) + 1];
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 340))(v17) )
      return 0;
  }
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a4 + 188))(a4, v27, 0);
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a4 + 204))(a4, v24, 0);
  v19 = *(_DWORD *)(v7 + 8);
  if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(v7 + 8) & 0xFFF) + 2] != v19 >> 12 )
    v20 = 0;
  else
    v20 = off_1061BE18[4 * (*(_DWORD *)(v7 + 8) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v20 + 252) & 0x800) != 0 )
    sub_100DAE60(v20);
  *(float *)&v31 = v27[0] - *(float *)(v20 + 580);
  v32 = v27[1] - *(float *)(v20 + 584);
  if ( v27[2] - *(float *)(v20 + 588) <= 0.0 )
    v21 = -0.1;
  else
    v21 = 0.1;
  v33 = v21;
  off_10689714();
  *(float *)v26 = 0.0;
  *(float *)&v26[1] = 0.0;
  *(float *)&v26[2] = 0.0;
  *(float *)v25 = *(float *)&v31 * 150.0;
  *(float *)&v25[1] = v32 * 150.0;
  *(float *)&v25[2] = 150.0 * v33;
  sub_101DBA60(a4, (int)v25, (int)v26, (int)&v28, 0, 0.0);
  v31 = v28;
  v32 = v29;
  v33 = v30;
  off_10689714();
  if ( v24[1] * v32 + v24[0] * *(float *)&v31 + v24[2] * v33 < 75.0 )
  {
    v22 = *(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 264);
    *a6 = *(float *)&v28;
    a6[1] = v29;
    a6[2] = v30;
    if ( v22(a4, 0, 0) )
      a6[2] = *(float *)(dword_106B6F0C + 44) + a6[2];
  }
  return 3;
}
