int __thiscall sub_103BEAC0(int this)
{
  float *v2; // eax
  int v3; // edi
  void (__thiscall *v4)(int); // eax
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // ebx
  int *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  int *v12; // ecx
  bool v13; // al
  bool v14; // cl
  int v15; // eax
  int v16; // eax
  int result; // eax
  float v18; // [esp+1Ch] [ebp-20h]
  _BYTE v19[12]; // [esp+2Ch] [ebp-10h] BYREF
  int v20; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/combine_turrets/ceiling_turret.mdl");
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  *(float *)(this + 1688) = 0.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 12.75;
  v2 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)this + 1796))(this, v19, 1);
  sub_100DC4E0((float *)this, v2);
  *(float *)(this + 1684) = 0.0;
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_DWORD *)(this + 220) != 1000 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1000;
  }
  *(_DWORD *)(this + 1680) = 3;
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_103BDDC0((char *)this, 24.0);
  sub_100EA940((int *)this, 0x10000);
  *(_DWORD *)(this + 252) |= 0x8000000u;
  v3 = dword_10700AC8;
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v20 = *(_DWORD *)(this + 2184);
  v4(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  sub_100BE7D0((_DWORD *)this, (int)v5, v20, 0.0);
  v6 = dword_10700AC8;
  v7 = *(_DWORD *)dword_10700AC8;
  v20 = *(_DWORD *)(this + 2180);
  (*(void (__thiscall **)(int))(v7 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( !v8 || !*v8 )
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  sub_100BE7D0((_DWORD *)this, (int)v8, v20, 0.0);
  v9 = sub_102D9B20();
  *(_DWORD *)(this + 3620) = sub_100B9D10(v9, "AR2");
  v10 = sub_10243040("sprites/glow1.vmt", (float *)(this + 716), 0);
  *(_DWORD *)(this + 3656) = v10;
  sub_10128950((int)v10, 5, 255, 0, 0, 128, 14);
  v11 = *(_DWORD *)(this + 3656);
  sub_100C0E40((unsigned int *)(v11 + 800), this);
  if ( *(_DWORD *)(v11 + 804) != 2 )
  {
    if ( *(_BYTE *)(v11 + 84) )
    {
      *(_BYTE *)(v11 + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(v11 + 24);
      if ( v12 )
        sub_100194B0(v12, 804);
    }
    *(_DWORD *)(v11 + 804) = 2;
  }
  sub_100EACE0((unsigned __int16 *)v11, this, 1);
  v13 = (*(_DWORD *)(this + 248) & 0x20) != 0;
  v14 = (*(_DWORD *)(this + 248) & 0x40) == 0;
  *(_BYTE *)(this + 3628) = v13;
  *(_BYTE *)(this + 3631) = v14;
  if ( v13 && v14 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_103BE970, 0.0, 0);
    v15 = *(_DWORD *)(this + 3656);
    if ( v15 )
    {
      sub_1005C620((_BYTE *)(v15 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v15 + 116)));
      sub_102428B0(*(_DWORD *)(this + 3656), 0.1, 0.5);
      sub_10242820(*(_DWORD *)(this + 3656), 64, 0.5);
    }
  }
  else
  {
    v16 = *(_DWORD *)(this + 3656);
    if ( v16 )
    {
      sub_1005C620((_BYTE *)(v16 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v16 + 116)));
      sub_102428B0(*(_DWORD *)(this + 3656), 0.1, 1.0);
      sub_10242820(*(_DWORD *)(this + 3656), 0, 1.0);
    }
  }
  v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.1,
          0.30000001)
      + *(float *)(dword_106B31C8 + 12);
  result = sub_100EC4A0((int *)this, v18, 0);
  *(_WORD *)(this + 1060) |= 1u;
  return result;
}
