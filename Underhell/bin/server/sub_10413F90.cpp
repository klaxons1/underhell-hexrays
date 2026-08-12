int __usercall sub_10413F90@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int *v3; // edi
  int v4; // ebx
  int *v5; // ecx
  int v6; // ebx
  double v7; // st7
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ebx
  int result; // eax

  sub_10267AE0((int *)a1, a2);
  sub_100E88A0((_DWORD *)a1, 1);
  v3 = (int *)(a1 + 216);
  v4 = (int)*(float *)(dword_106F10F4 + 44);
  if ( *(_DWORD *)(a1 + 216) != v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 456))(a1, a1 + 216);
    *v3 = v4;
  }
  if ( *(_DWORD *)(a1 + 220) != *v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *(_DWORD *)(a1 + 220) = *v3;
  }
  if ( *(_DWORD *)(a1 + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
        sub_100194B0(v5, 904);
    }
    *(float *)(a1 + 904) = 0.0;
  }
  v6 = 0;
  *(_DWORD *)(a1 + 1752) = 10;
  *(_DWORD *)(a1 + 1780) = 5;
  *(_DWORD *)(a1 + 1792) = 0;
  if ( *(_BYTE *)(a1 + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    *(_BYTE *)(a1 + 224) = 0;
  }
  *(_BYTE *)(a1 + 1768) = 0;
  v7 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(a1 + 1732) = 0;
  *(float *)(a1 + 1728) = v7 + 0.1;
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v9 = *(_DWORD **)(a1 + 1100);
  if ( v9 && *v9 )
    v6 = *(_DWORD *)(a1 + 1100);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  sub_100C1460((_DWORD *)a1, v6, "vehicle_weapon_pitch", 0.0);
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
  sub_100C1460((_DWORD *)a1, v12, "vehicle_weapon_yaw", 90.0);
  sub_10412F60(a1);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC);
  if ( result == 2 )
    return sub_100EA940((int *)a1, 0x10000);
  return result;
}
