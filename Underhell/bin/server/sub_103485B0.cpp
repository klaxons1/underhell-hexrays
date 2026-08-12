int __thiscall sub_103485B0(int this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int *v4; // ecx
  int v5; // ebx
  float *v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // edi
  _DWORD *v10; // ebx
  int *v11; // eax
  _DWORD *v12; // eax
  int v13; // edi
  int *v14; // ecx
  bool v15; // cc
  int v16; // ecx
  int v17; // eax
  _BYTE *v18; // ecx
  int result; // eax
  float v20; // [esp+1Ch] [ebp-20h]
  int v21; // [esp+20h] [ebp-1Ch]
  _BYTE v22[12]; // [esp+30h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/combine_camera/combine_camera.mdl");
  v2 = sub_10243040("sprites/light_glow03.vmt", (float *)(this + 716), 0);
  *(_DWORD *)(this + 3688) = v2;
  sub_10128950((int)v2, 3, 255, 255, 255, 0, 14);
  v3 = *(_DWORD *)(this + 3688);
  sub_100C0E40((unsigned int *)(v3 + 800), this);
  if ( *(_DWORD *)(v3 + 804) != 2 )
  {
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(v3 + 24);
      if ( v4 )
        sub_100194B0(v4, 804);
    }
    *(_DWORD *)(v3 + 804) = 2;
  }
  sub_100EACE0((unsigned __int16 *)v3, this, 1);
  v5 = 0;
  sub_10242820(*(_DWORD *)(this + 3688), 0, 0.0);
  sub_102428B0(*(_DWORD *)(this + 3688), 1.0, 0.0);
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  *(float *)(this + 1688) = 0.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 12.75;
  v6 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)this + 1796))(this, v22, 1);
  sub_100DC4E0((float *)this, v6);
  *(float *)(this + 1684) = 0.5;
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_DWORD *)(this + 220) != 50 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 50;
  }
  *(_DWORD *)(this + 1680) = 3;
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_10346E20((_DWORD *)this, 24.0);
  sub_100EA940((int *)this, 0x10000);
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( v8 && *v8 )
    v5 = *(_DWORD *)(this + 1100);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  sub_100C1460((_DWORD *)this, v5, "aim_yaw", 0.0);
  v9 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v10 = *(_DWORD **)(this + 1100);
  if ( !v10 || !*v10 )
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  sub_100C1460((_DWORD *)this, (int)v10, "aim_pitch", 0.0);
  v11 = sub_102D9B20();
  *(_DWORD *)(this + 3620) = sub_100B9D10(v11, "Pistol");
  v12 = sub_10243040("sprites/glow1.vmt", (float *)(this + 716), 0);
  *(_DWORD *)(this + 3684) = v12;
  sub_10128950((int)v12, 9, 255, 0, 0, 128, 14);
  v13 = *(_DWORD *)(this + 3684);
  sub_100C0E40((unsigned int *)(v13 + 800), this);
  if ( *(_DWORD *)(v13 + 804) != 2 )
  {
    if ( *(_BYTE *)(v13 + 84) )
    {
      *(_BYTE *)(v13 + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(v13 + 24);
      if ( v14 )
        sub_100194B0(v14, 804);
    }
    *(_DWORD *)(v13 + 804) = 2;
  }
  sub_100EACE0((unsigned __int16 *)v13, this, 1);
  v15 = *(_DWORD *)(this + 3632) <= 0;
  *(_BYTE *)(this + 3639) = (*(_DWORD *)(this + 248) & 0x80) == 0;
  if ( v15 )
    *(_DWORD *)(this + 3632) = 300;
  if ( *(int *)(this + 3628) <= 0 )
    *(_DWORD *)(this + 3628) = 450;
  v16 = *(_DWORD *)(this + 3632);
  if ( v16 < *(_DWORD *)(this + 3628) )
  {
    *(_DWORD *)(this + 3632) = *(_DWORD *)(this + 3628);
    *(_DWORD *)(this + 3628) = v16;
  }
  if ( *(_BYTE *)(this + 3639) )
  {
    sub_10348190(this);
  }
  else
  {
    v17 = *(_DWORD *)(this + 3684);
    if ( v17 )
    {
      v18 = (_BYTE *)(v17 + 116);
      v21 = HIBYTE(*(_DWORD *)(v17 + 116));
      if ( *(_BYTE *)(this + 3637) )
      {
        sub_1005C620(v18, 255, 0, 0, v21);
        sub_10242820(*(_DWORD *)(this + 3684), 164, 0.1);
        sub_102428B0(*(_DWORD *)(this + 3684), 0.40000001, 0.1);
      }
      else
      {
        sub_1005C620(v18, 0, 255, 0, v21);
        sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 1.0);
        sub_10242820(*(_DWORD *)(this + 3684), 0, 1.0);
      }
    }
  }
  sub_100EAB80((_DWORD *)this, 16);
  v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.1,
          0.30000001)
      + *(float *)(dword_106B31C8 + 12);
  result = sub_100EC4A0((int *)this, v20, 0);
  *(_WORD *)(this + 1060) |= 1u;
  return result;
}
