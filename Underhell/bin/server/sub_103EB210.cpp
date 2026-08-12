void __usercall sub_103EB210(int a1@<ecx>, int a2@<edi>)
{
  bool v3; // zf
  double v4; // st7
  int *v5; // eax
  int *v6; // ecx
  int v7; // eax
  char *v8; // [esp+0h] [ebp-8h]

  *(_DWORD *)(a1 + 1436) = 1;
  sub_10267AE0((int *)a1, a2);
  v3 = *(_BYTE *)(a1 + 1724) == 0;
  v4 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(a1 + 1788) = 0;
  *(float *)(a1 + 1784) = v4 + 0.1;
  *(float *)(a1 + 1708) = 10.0;
  if ( v3 )
    v8 = "GaussEnergy";
  else
    v8 = "AR2";
  v5 = sub_102D9B20();
  *(_DWORD *)(a1 + 1732) = sub_100B9D10(v5, v8);
  v6 = sub_102D9B20();
  if ( *(_BYTE *)(a1 + 1724) )
    v7 = sub_100B9D10(v6, "AirboatGun");
  else
    v7 = sub_100B9D10(v6, "GaussEnergy");
  v3 = *(_BYTE *)(a1 + 1689) == 0;
  *(_DWORD *)(a1 + 1924) = v7;
  if ( v3 )
  {
    sub_100C1600(a1, 1, 0);
  }
  else
  {
    sub_100C1600(a1, 1, 1);
    sub_10078870((_DWORD *)a1, "vehicle_weapon_yaw", 0.0);
    sub_10078870((_DWORD *)a1, "vehicle_weapon_pitch", 0.0);
    *(_DWORD *)(a1 + 1764) = 0;
    *(float *)(a1 + 1768) = 0.0;
    *(float *)(a1 + 1772) = 0.0;
  }
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 0x10);
}
