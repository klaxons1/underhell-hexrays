unsigned int __thiscall sub_101F77C0(unsigned int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  unsigned int v10; // eax
  int *v11; // ecx
  int v12; // edx
  int *v13; // ecx
  unsigned int v14; // eax
  int *v15; // ecx
  double v16; // st7
  int *v17; // ecx
  unsigned int result; // eax
  int *v19; // ecx
  float v20; // [esp+Ch] [ebp-4h]
  int v21; // [esp+Ch] [ebp-4h]

  sub_100CC980((char *)this);
  *(_DWORD *)this = &CBasePlayer::`vftable';
  *(_DWORD *)(this + 2164) = -1;
  *(_DWORD *)(this + 2168) = -1;
  *(_DWORD *)(this + 2180) = -1;
  sub_101FD070(this + 2192);
  v2 = 0.0;
  *(_DWORD *)(this + 2192) = &CBasePlayer::NetworkVar_m_Local::`vftable';
  *(_DWORD *)(this + 3188) = -1;
  *(_DWORD *)(this + 3192) = -1;
  *(_DWORD *)(this + 3196) = -1;
  *(_DWORD *)(this + 3200) = -1;
  *(_DWORD *)(this + 3204) = -1;
  *(_DWORD *)(this + 3208) = -1;
  *(_DWORD *)(this + 3212) = -1;
  *(_DWORD *)(this + 3216) = -1;
  memset((void *)(this + 2676), 0, 0x200u);
  *(_DWORD *)(this + 3220) = 0;
  *(_DWORD *)(this + 3224) = 0;
  *(_DWORD *)(this + 3228) = 0;
  *(_DWORD *)(this + 3232) = 0;
  *(_DWORD *)(this + 3236) = 0;
  *(_DWORD *)(this + 3240) = &CBasePlayer::NetworkVar_pl::`vftable';
  *(_DWORD *)(this + 3404) = -1;
  *(_DWORD *)(this + 3420) = -1;
  *(_DWORD *)(this + 3504) = -1;
  *(_DWORD *)(this + 3512) = -1;
  *(_DWORD *)(this + 3568) = 0;
  *(_DWORD *)(this + 3572) = 0;
  *(_DWORD *)(this + 3576) = 0;
  *(_DWORD *)(this + 3580) = 0;
  *(_DWORD *)(this + 3584) = 0;
  *(_DWORD *)(this + 4024) = -1;
  *(_DWORD *)(this + 4028) = -1;
  *(_DWORD *)(this + 4032) = -1;
  *(_DWORD *)(this + 4036) = &CUserCmd::`vftable';
  *(_DWORD *)(this + 4100) = 0;
  *(_DWORD *)(this + 4104) = 0;
  *(_DWORD *)(this + 4108) = 0;
  *(_DWORD *)(this + 4116) = 0;
  *(_DWORD *)(this + 4040) = 0;
  *(_DWORD *)(this + 4044) = 0;
  *(float *)(this + 4048) = 0.0;
  *(float *)(this + 4052) = 0.0;
  *(float *)(this + 4056) = 0.0;
  *(_DWORD *)(this + 4072) = 0;
  *(float *)(this + 4060) = 0.0;
  *(_BYTE *)(this + 4076) = 0;
  *(float *)(this + 4064) = 0.0;
  *(_DWORD *)(this + 4080) = 0;
  *(float *)(this + 4068) = 0.0;
  *(_DWORD *)(this + 4084) = 0;
  *(_DWORD *)(this + 4088) = 0;
  *(_DWORD *)(this + 4092) = 0;
  *(_BYTE *)(this + 4096) = 0;
  *(_DWORD *)(this + 4112) = 0;
  *(_DWORD *)(this + 4228) = -1;
  *(_DWORD *)(this + 4232) = 0;
  *(_DWORD *)(this + 4236) = 0;
  *(_DWORD *)(this + 4240) = 0;
  *(_DWORD *)(this + 4244) = 0;
  *(_DWORD *)(this + 4248) = 0;
  *(_DWORD *)(this + 4264) = -1;
  *(_DWORD *)(this + 4268) = -1;
  *(_DWORD *)(this + 4496) = &IPlayerInfo::`vftable';
  *(_DWORD *)(this + 4492) = &CPlayerInfo::`vftable';
  *(_DWORD *)(this + 4496) = &CPlayerInfo::`vftable';
  *(_DWORD *)(this + 4500) = 0;
  *(_DWORD *)(this + 4528) = 0;
  *(float *)(this + 4532) = 1.0;
  *(_BYTE *)(this + 4560) = 0;
  *(float *)(this + 4700) = 1.0;
  *(_BYTE *)(this + 4552) = 0;
  *(_DWORD *)(this + 4556) = 0;
  *(_DWORD *)(this + 4688) = 0;
  *(_DWORD *)(this + 4696) = 0;
  *(_BYTE *)(this + 4728) = 0;
  *(_BYTE *)(this + 4720) = 0;
  *(_DWORD *)(this + 4724) = 0;
  *(_DWORD *)(this + 4856) = 0;
  *(_DWORD *)(this + 4536) = 100;
  *(_DWORD *)(this + 4540) = 100;
  *(_DWORD *)(this + 4544) = 100;
  *(_DWORD *)(this + 4704) = 100;
  *(_DWORD *)(this + 4708) = 100;
  *(_DWORD *)(this + 4712) = 100;
  *(_DWORD *)(this + 4548) = 75;
  *(_DWORD *)(this + 4716) = 75;
  *(_WORD *)(this + 4860) = 0;
  *(_WORD *)(this + 4692) = 0;
  *(_DWORD *)(this + 4864) = 0;
  *(_DWORD *)(this + 4868) = 0;
  *(_DWORD *)(this + 4872) = 0;
  *(_WORD *)(this + 4884) = -1;
  v3 = *(_DWORD *)(this + 4864);
  *(_DWORD *)(this + 4876) = -1;
  *(_DWORD *)(this + 4880) = 0xFFFF;
  *(_DWORD *)(this + 4888) = v3;
  *(_DWORD *)(this + 4892) = 0;
  *(_DWORD *)(this + 4896) = 0;
  *(_DWORD *)(this + 4900) = 0;
  *(_WORD *)(this + 4912) = -1;
  v4 = *(_DWORD *)(this + 4892);
  *(_DWORD *)(this + 4904) = -1;
  *(_DWORD *)(this + 4908) = 0xFFFF;
  *(_DWORD *)(this + 4916) = v4;
  *(_BYTE *)(this + 3368) = 0;
  *(_WORD *)(this + 2138) = 0;
  *(_BYTE *)(this + 2141) = 1;
  if ( *(_BYTE *)(this + 3370) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 3370);
        v2 = 0.0;
      }
    }
    *(_BYTE *)(this + 3370) = 0;
  }
  if ( *(_BYTE *)(this + 3369) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 3369);
        v2 = 0.0;
      }
    }
    *(_BYTE *)(this + 3369) = 0;
  }
  *(_BYTE *)(this + 2140) = 1;
  *(_DWORD *)(this + 2164) = -1;
  *(_DWORD *)(this + 2168) = -1;
  *(_WORD *)(this + 2123) = 0;
  if ( *(_BYTE *)(this + 2121) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 2121);
        v2 = 0.0;
      }
    }
    *(_BYTE *)(this + 2121) = 0;
  }
  if ( *(_BYTE *)(this + 2122) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 2122);
        v2 = 0.0;
      }
    }
    *(_BYTE *)(this + 2122) = 0;
  }
  *(_BYTE *)(this + 2172) = 1;
  v20 = v2;
  if ( *(_DWORD *)(this + 2116) != LODWORD(v20) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
      {
        sub_100194B0(v9, 2116);
        v2 = 0.0;
      }
    }
    *(float *)(this + 2116) = v2;
  }
  *(_DWORD *)(this + 252) |= 0x400u;
  *(float *)(this + 2152) = v2;
  *(float *)(this + 2156) = v2;
  *(_BYTE *)(this + 2125) = 0;
  *(float *)(this + 2144) = v2;
  *(_WORD *)(this + 4185) = 0;
  *(float *)(this + 2148) = v2;
  *(_BYTE *)(this + 2120) = 1;
  *(_BYTE *)(this + 2136) = 0;
  if ( dword_106BB4D8 )
  {
    sub_10235710(dword_106BB4D8);
    dword_106BB4D8 = 0;
  }
  *(float *)(this + 4172) = -1.0;
  *(_DWORD *)(this + 3264) = 1;
  *(_BYTE *)(this + 3280) = 0;
  *(_DWORD *)(this + 3284) = 0;
  *(_DWORD *)(this + 3288) = 0;
  *(_BYTE *)(this + 4296) = 0;
  if ( *(_DWORD *)(this + 220) )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 0;
  }
  sub_100F7C60((int *)this, 0);
  *(_DWORD *)(this + 3464) = 0;
  *(_BYTE *)(this + 4212) = 0;
  v10 = *(_DWORD *)(this + 3420);
  if ( v10 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3420) & 0xFFF) + 2] == v10 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3420) & 0xFFF) + 1] )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 3420);
    }
    *(_DWORD *)(this + 3420) = -1;
  }
  *(_DWORD *)(this + 4120) = 0;
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 116))(dword_106B3CDC);
  v21 = v12;
  if ( *(_DWORD *)(this + 3488) != v12 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(this + 24);
      if ( v13 )
      {
        sub_100194B0(v13, 3488);
        v12 = v21;
      }
    }
    *(_DWORD *)(this + 3488) = v12;
  }
  v14 = *(_DWORD *)(this + 3512);
  if ( v14 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 2] == v14 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 1] )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v15 = *(int **)(this + 24);
      if ( v15 )
        sub_100194B0(v15, 3512);
    }
    *(_DWORD *)(this + 3512) = -1;
  }
  *(_DWORD *)(this + 3352) = 20;
  *(float *)(this + 3356) = 0.1;
  *(_WORD *)(this + 3360) = 256;
  v16 = 1.0;
  if ( *(_DWORD *)(this + 4328) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v17 = *(int **)(this + 24);
      if ( v17 )
      {
        sub_100194B0(v17, 4328);
        v16 = 1.0;
      }
    }
    *(float *)(this + 4328) = v16;
  }
  *(float *)(this + 1704) = v16;
  *(_DWORD *)(this + 2176) = 0;
  *(float *)(this + 4224) = 0.0;
  *(_DWORD *)(this + 4500) = this;
  sub_100F7F20(this);
  *(float *)(this + 4512) = 1.0;
  *(_DWORD *)(this + 4504) = 0;
  *(_DWORD *)(this + 4508) = 0;
  *(_WORD *)(this + 4516) = 0;
  *(float *)(this + 3556) = 0.0;
  *(_DWORD *)(this + 3552) = 0;
  *(_DWORD *)(this + 3564) = 0;
  *(float *)(this + 3560) = -1.0;
  *(_BYTE *)(this + 4524) = 0;
  *(_DWORD *)(this + 4180) = 0;
  *(_BYTE *)(this + 4184) = 0;
  *(_BYTE *)(this + 3625) = 0;
  *(float *)(this + 4188) = 0.0;
  *(_DWORD *)(this + 3308) = 0;
  *(float *)(this + 4192) = 0.0;
  *(_DWORD *)(this + 3312) = 0;
  *(_DWORD *)(this + 4400) = -1;
  *(_DWORD *)(this + 2160) = 0;
  result = this;
  if ( *(_DWORD *)(this + 2188) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 2188) = 0;
    }
    else
    {
      v19 = *(int **)(this + 24);
      if ( v19 )
        sub_100194B0(v19, 2188);
      *(_DWORD *)(this + 2188) = 0;
      return this;
    }
  }
  return result;
}
