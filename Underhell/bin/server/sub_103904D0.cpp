int __thiscall sub_103904D0(int this)
{
  const char *v2; // eax
  int v3; // edx
  bool v4; // dl
  int v5; // eax
  int v6; // ebx
  int *v7; // ecx
  int *v8; // ebx
  int v9; // ecx
  void (__thiscall *v10)(int); // eax
  int v11; // eax
  _DWORD *v12; // eax
  float *v13; // eax
  int v14; // ebx
  int v15; // eax
  int result; // eax
  unsigned int v17; // ebx
  int *v18; // ecx
  bool v19; // zf
  int v20; // [esp+1Ch] [ebp-8h] BYREF
  int v21; // [esp+20h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v21);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v3, 3, 0);
  sub_100CF450((_DWORD *)this, 0);
  v4 = (*(_DWORD *)(this + 248) & 0x20000) != 0;
  v5 = *(_DWORD *)(this + 248) >> 20;
  *(_DWORD *)(this + 4336) = 1;
  *(_BYTE *)(this + 4181) = v4;
  if ( (v5 & 1) != 0 )
  {
    v6 = *(_DWORD *)(this + 248) | 2;
    if ( *(_DWORD *)(this + 248) != v6 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 248);
      }
      *(_DWORD *)(this + 248) = v6;
    }
  }
  v8 = (int *)(this + 220);
  if ( *(_BYTE *)(this + 4181) )
  {
    v21 = (int)*(float *)(dword_106E9F24 + 44);
    if ( *v8 == v21 )
      goto LABEL_15;
  }
  else
  {
    v21 = (int)*(float *)(dword_106E9EDC + 44);
    if ( *v8 == v21 )
      goto LABEL_15;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
  *v8 = v21;
LABEL_15:
  v9 = *(_DWORD *)(this + 248);
  *(float *)(this + 1684) = -0.2;
  *(_DWORD *)(this + 2324) = 0;
  if ( (v9 & 0x10) == 0 )
  {
    sub_10020460((_DWORD *)this, 8392704);
    sub_10020460((_DWORD *)this, 536870976);
  }
  sub_10020460((_DWORD *)this, 1);
  sub_10020460((_DWORD *)this, 1075838976);
  sub_10020460((_DWORD *)this, 0x4000000);
  sub_10020460((_DWORD *)this, 134220800);
  sub_10020460((_DWORD *)this, 0x1000000);
  *(_DWORD *)(this + 4232) = 0;
  *(float *)(this + 1688) = 0.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 55.0;
  v10 = *(void (__thiscall **)(int))(*(_DWORD *)this + 1164);
  *(_DWORD *)(this + 4172) = 5;
  v10(this);
  if ( (*(_DWORD *)(this + 248) & 0x2000000) != 0 )
  {
    *(float *)(this + 2896) = 3500.0;
    sub_1001FBB0((_DWORD *)this, 3500.0);
  }
  *(_DWORD *)(this + 4420) = -1;
  if ( sub_100CF460((_DWORD *)this) )
  {
    v11 = sub_100CF460((_DWORD *)this);
    if ( *(char **)(v11 + 92) != "weapon_pistol" && !sub_100D6240((_DWORD *)v11, "weapon_pistol") )
      *(_BYTE *)(this + 4180) = 1;
    if ( !*(_BYTE *)(this + 4180) )
    {
      v12 = (_DWORD *)sub_100CF460((_DWORD *)this);
      sub_100EAB80(v12, 32);
    }
  }
  *(float *)(this + 4192) = 2.0;
  *(float *)(this + 4196) = 6.0;
  *(float *)(this + 4188) = -1.0;
  v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  sub_100756C0(v13, 6.0);
  *(float *)(this + 4300) = -1.0;
  *(_BYTE *)(this + 4312) = 0;
  v14 = *(_DWORD *)(this + 4268);
  *(float *)(this + 4304) = -1.0;
  *(_DWORD *)(this + 4240) = 20;
  *(_DWORD *)(this + 4272) = 0;
  *(float *)(this + 4280) = *(float *)(dword_106B31C8 + 12) - 1.0;
  sub_100CF460((_DWORD *)this);
  *(_DWORD *)(this + 4268) = 0;
  if ( v14 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1900))(this);
    if ( !*(_DWORD *)(this + 4268) )
    {
      sub_100B8C40((unsigned __int16 *)(this + 2760), &v20, &v21);
      v15 = sub_100B8D70((unsigned __int16 *)(this + 2760));
      if ( v15 > v21 )
        sub_100B8D80((_WORD *)(this + 2760), v21);
    }
  }
  result = *(_DWORD *)(this + 248) >> 19;
  if ( (*(_DWORD *)(this + 248) & 0x80000) != 0 )
  {
    result = sub_100CF660((_DWORD *)this, (int)"weapon_smg1", 0);
    if ( !result )
    {
      result = Warning("Warning! Metrocop is trying to use the stitch behavior but he has no smg1!\n");
      v17 = *(_DWORD *)(this + 248) & 0xFFF7FFFF;
      if ( *(_DWORD *)(this + 248) != v17 )
      {
        result = this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v18 = *(int **)(this + 24);
          if ( v18 )
            result = sub_100194B0(v18, 248);
        }
        *(_DWORD *)(this + 248) = v17;
      }
    }
  }
  *(_DWORD *)(this + 4364) = 0;
  *(float *)(this + 4344) = 0.0;
  *(_WORD *)(this + 4341) = 0;
  *(float *)(this + 4348) = flt_106F1CA8;
  *(float *)(this + 4352) = flt_106F1CAC;
  *(float *)(this + 4356) = flt_106F1CB0;
  v19 = *(_DWORD *)(this + 4176) == 0;
  *(_DWORD *)(this + 200) = sub_1038B680;
  *(float *)(this + 4360) = 0.0;
  if ( !v19 )
    return sub_100C1600(this, 1, 1);
  return result;
}
