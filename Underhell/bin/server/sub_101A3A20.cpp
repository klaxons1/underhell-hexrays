char __userpurge sub_101A3A20@<al>(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  int v5; // ebx
  float *v6; // edi
  float *v7; // eax
  double v8; // st4
  double v9; // st7
  double v10; // st4
  double v11; // st5
  int v12; // eax
  int v13; // edi
  int v14; // eax
  float *v15; // eax
  int v16; // eax
  float *v17; // [esp-20h] [ebp-9Ch]
  _BYTE v19[76]; // [esp+4h] [ebp-78h] BYREF
  int v20; // [esp+50h] [ebp-2Ch]
  _BYTE v21[12]; // [esp+58h] [ebp-24h] BYREF
  float v22[3]; // [esp+64h] [ebp-18h] BYREF
  float v23; // [esp+70h] [ebp-Ch]
  float v24; // [esp+74h] [ebp-8h]
  float v25; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  v8 = *v7 - *v6;
  v9 = v8 * v8;
  v10 = v7[1] - v6[1];
  v11 = v7[2] - v6[2];
  if ( v11 * v11 + v10 * v10 + v9 >= 6084.0 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, a2);
  v13 = v12;
  if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
    sub_100DAE60(v12);
  v23 = *(float *)(v13 + 580) - *(float *)(a1 + 580);
  v24 = *(float *)(v13 + 584) - *(float *)(a1 + 584);
  v25 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 904))(a1, v22);
  if ( v22[1] * v24 + v23 * v22[0] + v22[2] * v25 <= 0.8 )
    return 0;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 504))(v14);
  v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  sub_1002A5F0((int)&savedregs, a1, v15, v17, (int)v21, 33570827, a1, 0);
  v16 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 368))(a1, v19);
  if ( v20 != v16 )
    return 0;
  *a3 = v20;
  return 1;
}
