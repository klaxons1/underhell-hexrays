int __thiscall sub_1003A200(int this)
{
  int v2; // eax
  int result; // eax
  int v4; // ebx
  const char *v5; // edi
  const char *v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // eax
  const char *v11; // edi
  const char *v12; // eax
  const char *v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // edx
  char *v17; // eax
  int v18; // eax
  char v19; // bl
  int *v20; // ecx
  int *v21; // ecx
  int *v22; // ecx
  float v23; // [esp+14h] [ebp-18h]
  const char *v24; // [esp+18h] [ebp-14h]
  _BYTE v25[4]; // [esp+28h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 768) )
    sub_100EAB80(this, 16);
  if ( *(_DWORD *)(this + 808) >= 8u )
  {
    if ( *(_DWORD *)(this + 2552) )
      sub_10021C00((_DWORD *)this);
    if ( *(_DWORD *)(this + 808) == 8 )
    {
      v2 = sub_100BF520("helmet");
      if ( sub_100BF4B0(v2) == 3 )
        sub_100C1A60("VisorDown");
    }
  }
  if ( -1.0 != *(float *)(this + 2332) )
    *(float *)(this + 1684) = cos(*(float *)(this + 2332) * 0.00872664625997);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 452))(dword_106B3CDC) )
    return sub_1025FAC0(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2032))(this) )
    sub_100EA940(1024);
  sub_100EA940(73728);
  sub_101129A0(*(unsigned __int16 *)(this + 356) | 0x10);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 2676) = *(float *)(this + 708);
  sub_100E88A0(0);
  *(float *)(this + 552) = 1.0;
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  *(float *)(*(_DWORD *)(this + 2604) + 20) = *(float *)(this + 732);
  if ( *(_DWORD *)(this + 216) != *(_DWORD *)(this + 220) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = *(_DWORD *)(this + 220);
  }
  if ( *(_BYTE *)(this + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 0;
  }
  if ( *(_DWORD *)(this + 2336) != 1 )
    *(_DWORD *)(this + 2336) = 1;
  if ( *(_DWORD *)(dword_10695FE4 + 48) && (*(_DWORD *)(this + 236) & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(this + 2372);
    v5 = *(const char **)(this + 92);
    if ( !v5 )
      v5 = String;
    v24 = sub_10008F90(1);
    v6 = sub_10008F90(v4);
    DevMsg("SetIdealActivity : %s: %s -> %s\n", v5, v6, v24);
  }
  *(_DWORD *)(this + 2380) = 1;
  if ( sub_10001430((_DWORD *)this) )
    sub_10039D10(
      (_DWORD *)this,
      *(_DWORD *)(this + 2380),
      (int *)(this + 2384),
      (int *)(this + 2388),
      (int *)(this + 2392));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1548))(this);
  sub_10044510("Initializing NPC");
  sub_10081C10(*(_DWORD *)(this + 2588));
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 800))(this);
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750(this);
  v8 = *(_DWORD **)(this + 1100);
  if ( v8 && *v8 )
    v9 = *(_DWORD *)(this + 1100);
  else
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  if ( v9 )
  {
    sub_100BDDC0(this);
    sub_100BDE20(this);
  }
  sub_100448D0(0);
  *(_DWORD *)(this + 2716) = 0;
  sub_100285C0((_DWORD *)this, 0, 1);
  *(float *)(this + 2896) = 1024.0;
  if ( -1.0 == *(float *)(this + 2556) )
    *(float *)(*(_DWORD *)(this + 2404) + 8) = 2048.0;
  else
    *(float *)(*(_DWORD *)(this + 2404) + 8) = *(float *)(this + 2556);
  if ( (*(_DWORD *)(this + 248) & 0x100) != 0 )
  {
    v10 = *(_DWORD *)(this + 2404);
    *(float *)(this + 2896) = 1000000000.0;
    *(float *)(v10 + 8) = 6000.0;
  }
  if ( this != -2192 )
  {
    *(_DWORD *)(this + 2192) = 0;
    *(_DWORD *)(this + 2196) = 0;
    *(_DWORD *)(this + 2200) = 0;
    *(_DWORD *)(this + 2204) = 0;
    *(_DWORD *)(this + 2208) = 0;
    *(_DWORD *)(this + 2212) = 0;
    *(_DWORD *)(this + 2216) = 0;
    *(_DWORD *)(this + 2220) = 0;
  }
  sub_10020F00((char *)this);
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)this + 1672))(this) & 0x200000) != 0 && *(_DWORD *)(this + 2900) )
  {
    v11 = *(const char **)(this + 2900);
    v12 = v11;
    if ( !v11 )
      v12 = String;
    if ( strcmp(v12, "0") )
    {
      v13 = *(const char **)(this + 2900);
      if ( !v11 )
        v13 = String;
      v14 = sub_100C9780(v13);
      if ( v14 )
      {
        if ( *(_DWORD *)(this + 260) )
        {
          v15 = sub_1025F440("%s_weapon", *(_DWORD *)(this + 260));
          *(_DWORD *)(v14 + 260) = *(_DWORD *)sub_10162BE0(v25, v15);
        }
        if ( (*(_BYTE *)(this + 192) & 0x10) != 0 )
          sub_100EAB80(v14, 16);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 952))(this, v14);
      }
    }
  }
  *(_DWORD *)(this + 200) = nullsub_3;
  sub_100EC3F0((int)sub_10027BD0, 0.0, 0);
  v23 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  sub_100EC4A0(v23, 0);
  v16 = *(_DWORD *)(this + 248) >> 7;
  *(_BYTE *)(this + 2320) = 1;
  *(_DWORD *)(this + 2340) = 0;
  if ( (v16 & 1) != 0 )
  {
    v17 = (char *)sub_10231680(this);
    if ( v17 )
    {
      v18 = sub_100BDF40(v17);
      sub_100C1170(v18);
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  if ( (*(_DWORD *)(this + 248) & 0x10) != 0 )
    *(_DWORD *)(this + 2340) = 1;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1960))(this);
  v19 = result;
  if ( (_BYTE)result != *(_BYTE *)(this + 3598) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v20 = *(int **)(this + 24);
      if ( v20 )
        result = sub_100194B0(v20, 3598);
    }
    *(_BYTE *)(this + 3598) = v19;
  }
  *(float *)(this + 2432) = 0.75;
  *(float *)(this + 2436) = 2.0;
  *(float *)(this + 2612) = 3.4028235e38;
  *(float *)(this + 3592) = 0.0;
  if ( *(_DWORD *)(this + 2396) != -1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v21 = *(int **)(this + 24);
      if ( v21 )
        result = sub_100194B0(v21, 2396);
    }
    *(_DWORD *)(this + 2396) = -1;
  }
  if ( *(_DWORD *)(this + 2400) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v22 = *(int **)(this + 24);
      if ( v22 )
        result = sub_100194B0(v22, 2400);
    }
    *(_DWORD *)(this + 2400) = 0;
  }
  *(_DWORD *)(this + 2444) = -1;
  return result;
}
