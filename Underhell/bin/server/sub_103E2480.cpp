void __usercall sub_103E2480(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ebx
  int *v4; // ecx
  int v5; // eax
  int v6; // ebx
  int *v7; // ecx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // ebx
  int *v19; // ecx
  int v20; // ebx
  int v21; // edi
  _DWORD *v22; // eax
  int v23; // esi
  unsigned __int16 v24; // ax

  v3 = (*(_BYTE *)(a1 + 1689) != 0) - 1;
  if ( *(_DWORD *)(a1 + 1800) != v3 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 1800);
    }
    *(_DWORD *)(a1 + 1800) = v3;
  }
  v5 = sub_1031C9D0(a1, 0, 50.0, 0);
  v6 = 0;
  if ( v5 )
    *(_DWORD *)(a1 + 1808) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  else
    *(_DWORD *)(a1 + 1808) = -1;
  *(float *)(a1 + 1880) = -1.0;
  *(_DWORD *)(a1 + 1884) = 0;
  *(_DWORD *)(a1 + 1436) = 8;
  sub_100EBE30(a1, 7);
  sub_10267AE0((int *)a1, a2);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 0x10);
  if ( *(_BYTE *)(a1 + 606) != 1 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(a1 + 24);
      if ( v7 )
        sub_100194B0(v7, 606);
    }
    *(_BYTE *)(a1 + 606) = 1;
  }
  sub_10144F80((_BYTE *)(a1 + 1124), 0);
  *(float *)(a1 + 1708) = 10.0;
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 1;
  }
  sub_100C1600(a1, 1, *(unsigned __int8 *)(a1 + 1689));
  sub_100C1600(a1, 2, 1);
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v9 = *(_DWORD **)(a1 + 1100);
  if ( v9 && *v9 )
    v6 = *(_DWORD *)(a1 + 1100);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  sub_100C1460((_DWORD *)a1, v6, "vehicle_weapon_yaw", 0.0);
  v10 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v11 = *(_DWORD **)(a1 + 1100);
  if ( v11 && *v11 )
    v12 = *(_DWORD *)(a1 + 1100);
  else
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
  sub_100C1460((_DWORD *)a1, v12, "vehicle_weapon_pitch", 0.0);
  v13 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v14 = *(_DWORD **)(a1 + 1100);
  if ( v14 && *v14 )
    v15 = *(_DWORD *)(a1 + 1100);
  else
    v15 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
  sub_100C1460((_DWORD *)a1, v15, "Frame_Flex_L", 0.0);
  v16 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v17 = *(_DWORD **)(a1 + 1100);
  if ( v17 && *v17 )
    v18 = *(_DWORD *)(a1 + 1100);
  else
    v18 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
  sub_100C1460((_DWORD *)a1, v18, "Frame_Flex_R", 0.0);
  *(float *)(a1 + 1772) = 0.0;
  *(float *)(a1 + 1776) = 0.0;
  if ( *(_BYTE *)(a1 + 1688) != 1 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v19 = *(int **)(a1 + 24);
      if ( v19 )
        sub_100194B0(v19, 1688);
    }
    *(_BYTE *)(a1 + 1688) = 1;
  }
  v20 = 0;
  *(_DWORD *)(a1 + 1788) = 0;
  v21 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v22 = *(_DWORD **)(a1 + 1100);
  if ( v22 && *v22 )
    v20 = *(_DWORD *)(a1 + 1100);
  (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 104))(v21);
  sub_100C1460((_DWORD *)a1, v20, "Steer_Shock", 0.0);
  v23 = *(_DWORD *)(a1 + 424);
  if ( v23 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 148))(v23, 0.0);
    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 76))(v23);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v23 + 72))(v23, v24 | 0x20);
  }
}
