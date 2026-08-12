void __thiscall sub_10136D60(int this)
{
  char *v2; // eax
  float *v3; // edi
  char *v4; // eax
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // ecx
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // eax
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+4h] [ebp-14h]
  float v14; // [esp+4h] [ebp-14h]
  int v15; // [esp+14h] [ebp-4h] BYREF

  v2 = *(char **)(this + 976);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v4 = *(char **)(this + 980);
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
  v6 = (int)v5;
  if ( v3 && v5 )
  {
    v15 = 2;
    sub_100FA6F0((_DWORD *)(this + 816), &v15);
    v7 = *(_DWORD *)(this + 996);
    v15 = v7;
    v8 = 100.0;
    if ( (double)v7 <= 100.0 )
    {
      v15 = v7 < 0 ? 0 : v7;
      v8 = (double)v15;
    }
    *(_DWORD *)(this + 996) = (int)v8;
    if ( v6 == this && v3 != (float *)this )
      DevMsg("env_beams cannot have the end entity be the beam itself\nunless the start entity is also the beam itself!\n");
    *(_DWORD *)(this + 460) = *(_DWORD *)(this + 1004);
    sub_100D8500((_DWORD *)this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 32))(this, *(_DWORD *)(this + 972));
    sub_100FAA70(this, 1);
    if ( sub_100F98C0((int)v3) )
    {
      if ( ((_DWORD)v3[63] & 0x800) != 0 )
        sub_100DAE60((int)v3);
      sub_100F99F0((_DWORD *)this, v3 + 145);
    }
    else
    {
      sub_100FA570((void *)this, v3);
    }
    if ( sub_100F98C0(v6) )
    {
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      sub_100FAB60(this, (float *)(v6 + 580));
    }
    else
    {
      sub_100FA5F0((_DWORD *)this, (_DWORD *)v6);
    }
    sub_100F9B80(this);
    v9 = 102.3;
    if ( *(float *)(this + 988) <= 102.3 )
      v9 = *(float *)(this + 988);
    v12 = v9;
    sub_1005C3A0(this, v12);
    v10 = 64.0;
    if ( *(float *)(this + 992) <= 64.0 )
      v10 = *(float *)(this + 992);
    v13 = v10;
    sub_100FA790(this, v13);
    v14 = (float)*(int *)(this + 1008);
    sub_100FA7E0(this, v14);
    sub_100FA830(this, *(_DWORD *)(this + 996));
    v11 = *(_DWORD *)(this + 248);
    if ( (v11 & 0x80u) == 0 )
    {
      if ( (v11 & 0x100) != 0 )
        sub_100FAAC0(this, 128);
    }
    else
    {
      sub_100FAAC0(this, 64);
    }
  }
}
