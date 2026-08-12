int __userpurge sub_1030BB60@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4, float a5)
{
  int *v6; // eax
  double v7; // st7
  _DWORD *v9; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  double (__thiscall *v14)(int *); // eax
  float *v15; // eax
  float *v16; // [esp-1Ch] [ebp-98h]
  int v17; // [esp+0h] [ebp-7Ch]
  _BYTE v18[44]; // [esp+10h] [ebp-6Ch] BYREF
  float v19; // [esp+3Ch] [ebp-40h]
  float v20; // [esp+64h] [ebp-18h] BYREF
  float v21; // [esp+68h] [ebp-14h]
  float v22; // [esp+6Ch] [ebp-10h]
  int v23; // [esp+70h] [ebp-Ch] BYREF
  float v24; // [esp+74h] [ebp-8h]
  float v25; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 1672) || sub_100697A0((_DWORD *)a1, 88, 1) )
    return 0;
  if ( *(_DWORD *)(dword_10698344 + 48) && *(_BYTE *)(a1 + 3675) )
  {
    v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    sub_10260A10(a2, a3, v6, 0.25, (float *)&v23);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v20 = *(float *)(a1 + 580) - *(float *)&v23;
    v21 = *(float *)(a1 + 584) - v24;
    v7 = *(float *)(a1 + 588) - v25;
    v22 = v7;
    sub_100D7A40(&v20);
    if ( v7 > 156.0 )
      return 39;
  }
  else if ( a5 > 156.0 )
  {
    return 39;
  }
  if ( a4 < 0.69999999 )
    return 40;
  v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( sub_101C5260(v9) == a1 )
    return 23;
  v10 = *(int **)(a1 + 424);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v12 = *v10;
  v20 = 10.0;
  v21 = 10.0;
  v13 = v11;
  v14 = *(double (__thiscall **)(int *))(v12 + 116);
  v22 = 10.0;
  *(float *)&v23 = -10.0;
  v24 = -10.0;
  v25 = -10.0;
  *(float *)&v17 = v14(v10) * 0.5;
  v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
  v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
  sub_1030A4A0((int)&savedregs, v15, v16, (float *)&v23, &v20, 100679691, a1, 0, (int)v18, v17);
  if ( v19 < 1.0 )
    return 23;
  else
    return 0;
}
