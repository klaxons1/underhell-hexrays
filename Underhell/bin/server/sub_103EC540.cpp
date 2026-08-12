void __thiscall sub_103EC540(int this)
{
  int v2; // edi
  int *v3; // ecx
  int v4; // ebx
  unsigned int *v5; // edi
  unsigned int v6; // ebx
  int *v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  double v12; // st7
  bool v13; // zf
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  double v17; // st7
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // eax
  bool v22; // bl
  int v23; // eax
  int v24; // edi
  int v25; // ebx
  int *v26; // ecx
  int v27; // ecx
  int *v28; // ecx
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // eax
  char v34[44]; // [esp+24h] [ebp-A0h] BYREF
  float v35; // [esp+50h] [ebp-74h]
  float v36[2]; // [esp+78h] [ebp-4Ch] BYREF
  int v37[8]; // [esp+80h] [ebp-44h] BYREF
  float v38; // [esp+A0h] [ebp-24h] BYREF
  float v39; // [esp+A4h] [ebp-20h]
  float v40; // [esp+A8h] [ebp-1Ch]
  float v41; // [esp+ACh] [ebp-18h] BYREF
  float v42; // [esp+B0h] [ebp-14h]
  float v43; // [esp+B4h] [ebp-10h]
  float v44; // [esp+B8h] [ebp-Ch] BYREF
  double v45; // [esp+BCh] [ebp-8h] BYREF
  int savedregs; // [esp+C4h] [ebp+0h] BYREF

  sub_10267690(this);
  v2 = sub_10261B20();
  if ( *(_BYTE *)(this + 1704) )
  {
    if ( *(_BYTE *)(this + 1688) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 1688);
      }
      *(_BYTE *)(this + 1688) = 1;
    }
    if ( v2 )
    {
      v4 = *(_DWORD *)(v2 + 2252);
      v5 = (unsigned int *)(v2 + 2252);
      v6 = v4 | 0x200;
      goto LABEL_19;
    }
  }
  else if ( *(_BYTE *)(this + 1689) )
  {
    if ( *(_BYTE *)(this + 1688) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 1688);
      }
      *(_BYTE *)(this + 1688) = 0;
    }
    if ( v2 )
    {
      v8 = *(_DWORD *)(v2 + 2252);
      v5 = (unsigned int *)(v2 + 2252);
      v6 = v8 & 0xFFFFFDFF;
LABEL_19:
      if ( *v5 != v6 )
      {
        (*(void (__thiscall **)(unsigned int *, unsigned int *))*(v5 - 15))(v5 - 15, v5);
        *v5 = v6;
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 892))(this);
  v9 = *(_DWORD *)(this + 128);
  *((float *)&v45 + 1) = *(float *)(dword_106B31C8 + 12);
  if ( v9 != HIDWORD(v45) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 128);
    }
    *(float *)(this + 128) = *((float *)&v45 + 1);
  }
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( *(_BYTE *)(this + 606) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 606);
    }
    *(_BYTE *)(this + 606) = 1;
  }
  if ( !*(_BYTE *)(this + 1788) )
  {
    *(_BYTE *)(this + 1788) = 1;
    sub_10144FA0((_BYTE *)(this + 1124), 1);
    sub_10147220(this + 1124);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 868))(this) )
    v12 = *(float *)(dword_106B31C8 + 16) + *(float *)(this + 1792);
  else
    v12 = 0.0;
  v13 = *(_BYTE *)(this + 1689) == 0;
  *(float *)(this + 1792) = v12;
  if ( !v13 )
  {
    v14 = *(_DWORD *)(this + 1640);
    if ( v14 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == v14 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 1]
      && !*(_BYTE *)(this + 1713)
      && !*(_BYTE *)(this + 1712) )
    {
      v15 = sub_1026A890((unsigned int *)(this + 1640));
      sub_100F5AA0(v15, &v38, (int)&v44, 0, 0);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2 )
      {
        v37[4] = -1;
        v37[6] = *(int *)(dword_106CEF94 + 44);
        v37[7] = *(int *)(dword_106BB52C + 44);
        v16 = sub_1026A890((unsigned int *)(this + 1640));
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v16 + 1496))(v16, v36);
        v44 = v36[0];
        *(float *)&v45 = v36[1];
        *((float *)&v45 + 1) = *(float *)v37;
      }
      v41 = v44 * 56755.84 + v38;
      v42 = *(float *)&v45 * 56755.84 + v39;
      v43 = 56755.84 * *((float *)&v45 + 1) + v40;
      sub_1002A5F0((int)&savedregs, this, &v38, &v41, 1174421507, this, 0, (int)v34);
      v17 = v35;
      if ( v35 < 1.0 )
      {
        v41 = v44 * 56755.84 * v17 + v38;
        v42 = *(float *)&v45 * 56755.84 * v17 + v39;
        v43 = v17 * (56755.84 * *((float *)&v45 + 1)) + v40;
      }
      sub_103EBB80(this, &v41, COERCE_INT(0.1));
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( *(_BYTE *)(this + 896) && (*(_BYTE *)(this + 1713) || *(_BYTE *)(this + 1712)) )
  {
    if ( *(_BYTE *)(this + 1712) )
    {
      sub_10144F90((_BYTE *)(this + 1124));
      sub_102660C0((_BYTE *)this);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1160) + 56))(*(_DWORD *)(this + 1160)) )
      {
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 340))(this);
        v19 = __RTDynamicCast(
                v18,
                0,
                (struct _s_RTTICompleteObjectLocator *)&IServerVehicle `RTTI Type Descriptor',
                (int)&CBaseServerVehicle `RTTI Type Descriptor',
                0);
        if ( v19 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 260))(v19);
      }
      if ( *(_DWORD *)(this + 1920) < *(_DWORD *)(dword_106EE73C + 48) && !*(_BYTE *)(this + 1690) )
        sub_1010C7F0((float *)dword_10614CA8, this, "ShowHudHint", 1.5, this, this, 0);
    }
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      if ( *(_BYTE *)(this + 1712) )
      {
        v20 = sub_100BDCE0(this, 78);
        if ( v20 > -1 )
        {
          sub_10031B50(this, 0.0);
          sub_100BC090((float *)(this + 124), (float *)(dword_106B31C8 + 12));
          sub_100C3330(this, v20);
          sub_100C1A10(this);
        }
      }
    }
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 340))(this);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v21 + 88))(
        v21,
        *(unsigned __int8 *)(this + 1713),
        *(unsigned __int8 *)(this + 1713));
    }
    else
    {
      v22 = !*(_BYTE *)(this + 1713) || !*(_BYTE *)(this + 1725);
      v23 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 340))(this);
      (*(void (__thiscall **)(int, _DWORD, bool))(*(_DWORD *)v23 + 88))(v23, *(unsigned __int8 *)(this + 1713), v22);
    }
  }
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1780)
    && (v24 = *(_DWORD *)(this + 908), v24 == sub_100BDF40(this, "ammo_open")) )
  {
    v25 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v26 = *(int **)(this + 24);
        if ( v26 )
          sub_100194B0(v26, 124);
      }
      *(float *)(this + 124) = *(float *)(v25 + 12);
    }
    v45 = 0.0;
    sub_10045730((float *)(this + 864), &v45);
    v27 = *(_DWORD *)(this + 904);
    *((float *)&v45 + 1) = 0.0;
    if ( v27 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(this + 24);
        if ( v28 )
          sub_100194B0(v28, 904);
      }
      *(float *)(this + 904) = 0.0;
    }
    v29 = sub_100BDF40(this, "ammo_close");
    sub_100C3330(this, v29);
  }
  else
  {
    v30 = *(_DWORD *)(this + 908);
    if ( v30 == sub_100BDF40(this, "ammo_close") && *(_BYTE *)(this + 896) )
    {
      sub_100BC090((float *)(this + 124), (float *)(dword_106B31C8 + 12));
      v45 = 0.0;
      sub_10045730((float *)(this + 864), &v45);
      sub_10031B50(this, 0.0);
      v31 = sub_100BDCE0(this, 1);
      sub_100C3330(this, v31);
      sub_10165630(v37, this, (int)"PropJeep.AmmoClose");
      v32 = *(_DWORD *)(this + 24);
      v33 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v32);
      sub_1023C580(v30, v32, v37, v33, (int)"PropJeep.AmmoClose", 0, 0.0, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v37);
    }
  }
}
