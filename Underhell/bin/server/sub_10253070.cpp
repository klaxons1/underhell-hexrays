int __thiscall sub_10253070(int this)
{
  bool v2; // zf
  const char *v3; // eax
  const char *v4; // eax
  int v5; // edx
  float *v6; // eax
  int v7; // edx
  double v8; // st7
  int (__thiscall *v9)(int); // eax
  float *v10; // eax
  _BYTE v12[4]; // [esp+18h] [ebp-4h] BYREF

  if ( 0.0 == *(float *)(this + 868) )
  {
    if ( *(float *)(this + 108) == 0.0 )
      *(float *)(this + 868) = 100.0;
    else
      *(float *)(this + 868) = *(float *)(this + 108);
  }
  if ( !*(_DWORD *)(this + 904) )
    *(_DWORD *)(this + 904) = 60;
  if ( !*(_DWORD *)(this + 908) )
    *(_DWORD *)(this + 908) = 200;
  sub_100DD790((float *)this, &flt_106F1CA8);
  sub_100D7260((float *)this, &flt_106F1CB4);
  v2 = *(_DWORD *)(this + 212) == 0;
  *(float *)(this + 872) = 1.0;
  if ( v2 )
  {
    v3 = sub_100D6390((_DWORD *)this);
    Msg("FuncTrackTrain '%s' has no target.\n", v3);
  }
  v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v12);
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v4);
  sub_100E0970(this, v5, 7, 0);
  sub_10112C00(this + 320, (*(_DWORD *)(this + 248) & 0x80) != 0 ? 1 : 6);
  if ( (*(_DWORD *)(this + 248) & 0x200) != 0 )
    sub_100EA940((int *)this, 0x40000000);
  if ( (*(_BYTE *)(this + 248) & 8) != 0 )
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  v7 = *(_DWORD *)(this + 320);
  *(float *)(this + 808) = *v6;
  *(float *)(this + 812) = v6[1];
  v8 = v6[2];
  v9 = *(int (__thiscall **)(int))(v7 + 8);
  *(float *)(this + 816) = v8;
  v10 = (float *)v9(this + 320);
  *(float *)(this + 820) = *v10;
  *(float *)(this + 824) = v10[1];
  *(float *)(this + 828) = v10[2];
  *(float *)(this + 828) = *(float *)(this + 828) + 72.0;
  sub_100EC3F0((_DWORD *)this, (int)sub_10252C30, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
}
