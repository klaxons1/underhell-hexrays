char __usercall sub_103C32A0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  const char *v4; // eax
  int v5; // eax
  int v6; // ebx
  int *v7; // ecx
  float *v8; // eax
  int v9; // edi
  int v10; // edx
  _DWORD *v11; // ebx
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // ebx
  int *v15; // eax
  int v16; // edi
  int *v17; // ecx
  bool v18; // al
  bool v19; // cl
  void (__thiscall *v20)(int); // eax
  float v22; // [esp+2Ch] [ebp-1Ch]
  _BYTE v23[12]; // [esp+38h] [ebp-10h] BYREF
  int v24; // [esp+44h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  v4 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &v24);
  if ( !v4 || !*v4 )
    v4 = "models/combine_turrets/floor_turret.mdl";
  (*(void (__thiscall **)(int, const char *, int, int))(*(_DWORD *)a1 + 104))(a1, v4, a3, a2);
  if ( (*(_DWORD *)(a1 + 248) & 0x200) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 3772);
    if ( v5 )
    {
      if ( v5 <= 4 )
      {
        v24 = 1;
        if ( v5 >= 1 )
          v24 = v5;
      }
      else
      {
        v24 = 4;
      }
      sub_10031670((_DWORD *)(a1 + 848), &v24);
    }
    else
    {
      v6 = dword_106EBD44 + 1;
      if ( *(_DWORD *)(a1 + 848) != dword_106EBD44 + 1 )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(a1 + 24);
          if ( v7 )
            sub_100194B0(v7, 848);
        }
        *(_DWORD *)(a1 + 848) = v6;
      }
      dword_106EBD44 = ((_BYTE)dword_106EBD44 + 1) & 3;
    }
  }
  *(_DWORD *)(a1 + 1708) = -1;
  *(_DWORD *)(a1 + 1740) = 0;
  *(_BYTE *)(a1 + 1713) = 0;
  j_nullsub_4((void *)a1);
  sub_100E88A0((_DWORD *)a1, 0);
  sub_100E88A0((_DWORD *)a1, 0);
  *(float *)(a1 + 1688) = 0.0;
  *(float *)(a1 + 1692) = 0.0;
  *(float *)(a1 + 1696) = 12.75;
  v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 1796))(a1, v23, 1);
  sub_100DC4E0((float *)a1, v8);
  *(float *)(a1 + 1684) = 0.40000001;
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 1;
  }
  if ( *(_DWORD *)(a1 + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *(_DWORD *)(a1 + 220) = 100;
  }
  if ( *(_DWORD *)(a1 + 216) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 456))(a1, a1 + 216);
    *(_DWORD *)(a1 + 216) = 100;
  }
  *(_DWORD *)(a1 + 252) |= 0x8000000u;
  v9 = dword_10700AC8;
  v10 = *(_DWORD *)dword_10700AC8;
  v24 = *(_DWORD *)(a1 + 2184);
  (*(void (__thiscall **)(int))(v10 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v11 = *(_DWORD **)(a1 + 1100);
  if ( !v11 || !*v11 )
    v11 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  sub_100BE7D0((_DWORD *)a1, (int)v11, v24, 0.0);
  v12 = dword_10700AC8;
  v13 = *(_DWORD *)dword_10700AC8;
  v24 = *(_DWORD *)(a1 + 2180);
  (*(void (__thiscall **)(int))(v13 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v14 = *(_DWORD **)(a1 + 1100);
  if ( !v14 || !*v14 )
    v14 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
  sub_100BE7D0((_DWORD *)a1, (int)v14, v24, 0.0);
  v15 = sub_102D9B20();
  *(_DWORD *)(a1 + 3728) = sub_100B9D10(v15, "PISTOL");
  *(_DWORD *)(a1 + 3800) = sub_100BEF30(a1, "eyes");
  *(_DWORD *)(a1 + 3796) = sub_100BEF30(a1, "light");
  v16 = *(_DWORD *)(a1 + 248) | 0x20;
  if ( *(_DWORD *)(a1 + 248) != v16 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v17 = *(int **)(a1 + 24);
      if ( v17 )
        sub_100194B0(v17, 248);
    }
    *(_DWORD *)(a1 + 248) = v16;
  }
  v18 = (*(_DWORD *)(a1 + 248) & 0x20) != 0;
  v19 = (*(_DWORD *)(a1 + 248) & 0x40) == 0;
  *(_BYTE *)(a1 + 3732) = v18;
  *(_BYTE *)(a1 + 3735) = v19;
  if ( v18 && v19 )
  {
    sub_100EC3F0((_DWORD *)a1, (int)sub_10382670, 0.0, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 2268))(a1, 2);
  }
  else
  {
    sub_100EC3F0((_DWORD *)a1, (int)sub_103BFC00, 0.0, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 2268))(a1, 4);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2272))(a1) )
  {
    sub_100EC3F0((_DWORD *)a1, (int)sub_103BFC00, 0.0, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 2268))(a1, 4);
  }
  v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.1,
          0.30000001)
      + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)a1, v22, 0);
  v20 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 584);
  *(_WORD *)(a1 + 1060) |= 1u;
  *(_DWORD *)(a1 + 200) = sub_103C1C70;
  v20(a1);
  return sub_1002B660(a1, 1);
}
