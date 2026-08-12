void __thiscall sub_10399F00(int this)
{
  const char *v2; // eax
  int v3; // edx
  int v4; // ebx
  const char *v5; // eax
  unsigned int v6; // ebx
  int *v7; // ecx
  _BYTE v8[4]; // [esp+28h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2360))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100CF450((_DWORD *)this, 0);
  *(float *)(this + 1684) = 0.02;
  *(_DWORD *)(this + 2324) = 0;
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 0x4000000);
  if ( (*(_DWORD *)(this + 248) & 0x10) == 0 )
  {
    sub_10020460((_DWORD *)this, 8392704);
    sub_10020460((_DWORD *)this, 538968128);
    sub_10020460((_DWORD *)this, 134220800);
    sub_10020460((_DWORD *)this, 0x1000000);
  }
  sub_10020460((_DWORD *)this, 1375731712);
  sub_10020460((_DWORD *)this, 1);
  sub_100E0970(this, v3, 3, 0);
  *(float *)(this + 1688) = 0.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 55.0;
  *(_DWORD *)(this + 5632) = -1;
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 932))(this, *(_DWORD *)(this + 2372));
  if ( sub_100BDCE0(this, v4) != -1 && v4 != *(_DWORD *)(this + 2372) )
    sub_10039F40((int *)this, v4);
  *(_BYTE *)(this + 5600) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2400))(this);
  sub_103957D0((float *)this, 0.0);
  *(float *)(this + 5596) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              0.69999999,
                              1.3);
  *(float *)(this + 5604) = 0.0;
  *(float *)(this + 5628) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              10.0,
                              30.0)
                          + *(float *)(dword_106B31C8 + 12);
  if ( (*(_DWORD *)(this + 248) & 0x1000) != 0 )
  {
    v5 = *(const char **)(this + 260);
    if ( !v5 )
      v5 = String;
    Warning("NPC %s using alternate collision! -- DISABLED\n", v5);
    v6 = *(_DWORD *)(this + 248) & 0xFFFFEFFF;
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
  *(_DWORD *)(this + 5636) = -1;
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
}
