int __userpurge sub_102FB800@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int *v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  int (__thiscall *v13)(int, float *); // edx
  float *v14; // eax
  int v15; // eax
  float *v16; // eax
  int v17; // eax
  float *v18; // [esp-14h] [ebp-98h]
  _BYTE v19[44]; // [esp+Ch] [ebp-78h] BYREF
  float v20; // [esp+38h] [ebp-4Ch]
  int v21; // [esp+58h] [ebp-2Ch]
  float v22[3]; // [esp+60h] [ebp-24h] BYREF
  float v23; // [esp+6Ch] [ebp-18h] BYREF
  float v24; // [esp+70h] [ebp-14h]
  float v25; // [esp+74h] [ebp-10h]
  int v26; // [esp+78h] [ebp-Ch] BYREF
  float v27; // [esp+7Ch] [ebp-8h]
  float v28; // [esp+80h] [ebp-4h]
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v6 = (int *)(*(int (**)(void))(*(_DWORD *)a1 + 368))();
  sub_10260A10(a2, a3, v6, 0.5, (float *)&v26);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = v27 - *(float *)(a1 + 584);
  v8 = v7 * v7;
  v9 = *(float *)&v26 - *(float *)(a1 + 580);
  v10 = v8;
  v11 = v28 - *(float *)(a1 + 588);
  if ( v9 * v9 + v10 + v11 * v11 > 10000.0 )
    return 39;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v13 = *(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 904);
  v23 = *(float *)&v26 - *(float *)(a1 + 580);
  v24 = v27 - *(float *)(a1 + 584);
  v14 = (float *)v13(a1, v22);
  if ( *v14 * v23 + v14[1] * v24 < 0.5 )
    return 40;
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v23 = 8.0;
  v24 = 8.0;
  v25 = 8.0;
  v22[0] = -8.0;
  v22[1] = -8.0;
  v22[2] = -8.0;
  v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 576))(v15);
  v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  sub_100231A0((int)&savedregs, a1, v16, v18, v22, &v23, 33701899, a1, 0, (int)v19);
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( v21 == v17 || v20 >= 1.0 || (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1080))(a1, v21) == 1 )
    return 23;
  else
    return 0;
}
