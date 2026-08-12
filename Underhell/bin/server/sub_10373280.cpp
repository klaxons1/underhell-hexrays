char __userpurge sub_10373280@<al>(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  int v5; // ebx
  float *v6; // edi
  float *v7; // eax
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  int v13; // eax
  int v14; // edi
  int *v15; // edi
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  int v19; // eax
  float *v20; // eax
  int v21; // eax
  float *v22; // [esp-24h] [ebp-ACh]
  int v23; // [esp-10h] [ebp-98h]
  _BYTE v25[76]; // [esp+4h] [ebp-84h] BYREF
  int v26; // [esp+50h] [ebp-38h]
  float v27[3]; // [esp+58h] [ebp-30h] BYREF
  float v28[3]; // [esp+64h] [ebp-24h] BYREF
  float v29[3]; // [esp+70h] [ebp-18h] BYREF
  float v30; // [esp+7Ch] [ebp-Ch]
  float v31; // [esp+80h] [ebp-8h]
  float v32; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  v8 = v7[1] - v6[1];
  v9 = v8 * v8;
  v10 = *v7 - *v6;
  v11 = v9;
  v12 = v7[2] - v6[2];
  if ( v10 * v10 + v11 + v12 * v12 >= 24336.0 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, a2);
  v14 = v13;
  if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
    sub_100DAE60(v13);
  v30 = *(float *)(v14 + 580) - *(float *)(a1 + 580);
  v31 = *(float *)(v14 + 584) - *(float *)(a1 + 584);
  v32 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 904))(a1, v27);
  if ( v27[1] * v31 + v30 * v27[0] + v27[2] * v32 <= 0.8 )
    return 0;
  v15 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v16 = (float *)sub_10073730(*(_DWORD *)(a1 + 1676));
  v29[0] = *v16 * 0.5;
  v29[1] = v16[1] * 0.5;
  v23 = *(_DWORD *)(a1 + 1676);
  v29[2] = 0.5 * v16[2];
  v17 = (float *)sub_10073710(v23);
  v28[0] = *v17 * 0.5;
  v28[1] = v17[1] * 0.5;
  v18 = 0.5 * v17[2];
  v19 = *v15;
  v28[2] = v18;
  v22 = (float *)(*(int (__thiscall **)(int *))(v19 + 576))(v15);
  v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  sub_100231A0((int)&savedregs, a1, v20, v22, v28, v29, 33570827, a1, 0, (int)v25);
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( v26 != v21 )
    return 0;
  *a3 = v26;
  return 1;
}
