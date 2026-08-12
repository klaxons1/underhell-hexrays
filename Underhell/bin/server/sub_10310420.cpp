float *__thiscall sub_10310420(int this)
{
  int *v2; // ecx
  int v3; // edx
  int *v4; // edi
  int v5; // edi
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int (__thiscall *v9)(int); // eax
  float *v10; // eax
  float *v11; // eax
  float v13[3]; // [esp+20h] [ebp-1Ch] BYREF
  float v14[3]; // [esp+2Ch] [ebp-10h] BYREF
  int v15; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/antlion_guard.mdl");
  if ( *(_BYTE *)(this + 3674) )
  {
    if ( *(_DWORD *)(this + 848) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 848);
      }
      *(_DWORD *)(this + 848) = 1;
    }
    sub_10310320((float *)this, (int *)(this + 3812), "attach_glow1");
    sub_10310320((float *)this, (int *)(this + 3816), "attach_glow2");
  }
  else
  {
    *(_DWORD *)(this + 3812) = 0;
    *(_DWORD *)(this + 3816) = 0;
  }
  *(_DWORD *)(this + 1676) = 7;
  sub_10027A90(this, 0);
  sub_10020F00((char *)this);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v3, 3, 0);
  sub_100223F0(0);
  sub_100CF450((_DWORD *)this, 1);
  v4 = (int *)(this + 220);
  v15 = (int)*(float *)(dword_106E3194 + 44);
  if ( *(_DWORD *)(this + 220) != v15 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v4 = v15;
  }
  if ( *(_DWORD *)(this + 216) != *v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = *v4;
  }
  *(float *)(this + 1684) = -0.40000001;
  *(float *)(this + 3656) = 0.0;
  *(float *)(this + 3652) = 0.0;
  *(_DWORD *)(this + 3636) = 0;
  *(float *)(this + 3664) = 0.0;
  *(_DWORD *)(this + 3668) = 0;
  *(float *)(this + 3632) = 0.0;
  *(_BYTE *)(this + 3672) = 0;
  *(float *)(this + 3660) = 0.0;
  sub_100211D0((_DWORD *)this, 0, 0);
  *(_BYTE *)(this + 3628) = 0;
  *(_DWORD *)(this + 3700) = -1;
  *(_DWORD *)(this + 3704) = -1;
  *(_DWORD *)(this + 3708) = -1;
  *(_DWORD *)(this + 3716) = -1;
  *(float *)(this + 1688) = 10.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 30.0;
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 67633153);
  sub_10020460((_DWORD *)this, 128);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  if ( *(_BYTE *)(this + 3629) )
  {
    sub_100EAB80((_DWORD *)this, 32);
    sub_100EA940((int *)this, 0x8000);
    v5 = *(_DWORD *)(this + 248) | 2;
    if ( *(_DWORD *)(this + 248) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      *(_DWORD *)(this + 248) = v5;
    }
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    if ( *(_BYTE *)(this + 225) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 0;
    }
    v7 = *(int **)(this + 3812);
    if ( v7 )
      sub_10242060(v7);
    v8 = *(int **)(this + 3816);
    if ( v8 )
      sub_10242060(v8);
  }
  v9 = *(int (__thiscall **)(int))(*(_DWORD *)this + 1868);
  *(_DWORD *)(this + 252) |= 0x8000000u;
  v10 = (float *)v9(this);
  sub_100756F0(v10, 120.0);
  v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  sub_100756C0(v11, 60.0);
  v13[0] = -100.0;
  v13[1] = -100.0;
  v13[2] = 0.0;
  v14[0] = 100.0;
  v14[1] = 100.0;
  v14[2] = 128.0;
  return sub_10112B00((_BYTE *)(this + 320), 3, v13, v14);
}
