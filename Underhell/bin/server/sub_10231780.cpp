void __thiscall sub_10231780(int this)
{
  int v2; // eax
  int v3; // edi
  const char *v4; // eax
  const char *v5; // ecx
  const char *v6; // eax
  int v7; // edi
  const char *v8; // ecx
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // [esp-4h] [ebp-14h]
  const char *v14; // [esp+0h] [ebp-10h]
  const char *v15; // [esp+0h] [ebp-10h]
  float v16; // [esp+0h] [ebp-10h]
  const char *v17; // [esp+4h] [ebp-Ch]
  const char *v18; // [esp+4h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 828) )
  {
    v2 = sub_10230400(this, (*(_DWORD *)(this + 248) & 0x400) != 0);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(const char **)(v2 + 260);
      if ( !v4 )
        v4 = String;
      v5 = *(const char **)(this + 808);
      if ( !v5 )
        v5 = String;
      v17 = v4;
      v14 = v5;
      v6 = sub_100D6390((_DWORD *)this);
      DevMsg(2, "scripted_schedule \"%s\" using NPC \"%s\"(%s)\n", v6, v14, v17);
      sub_10231160((_DWORD *)this, v3);
      *(_BYTE *)(this + 836) = 1;
      return;
    }
    goto LABEL_15;
  }
  *(_DWORD *)(this + 800) = -1;
  v7 = sub_10230400(this, 1);
  if ( !v7 )
  {
LABEL_15:
    v11 = *(const char **)(this + 808);
    if ( !v11 )
      v11 = String;
    v18 = v11;
    v12 = sub_100D6390((_DWORD *)this);
    DevMsg(2, "scripted_schedule \"%s\" can't find NPC \"%s\"\n", v12, v18);
    v16 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0((int *)this, v16, 0);
    return;
  }
  do
  {
    v8 = *(const char **)(this + 808);
    if ( !v8 )
      v8 = String;
    v9 = *(const char **)(v7 + 260);
    if ( !v9 )
      v9 = String;
    v15 = v8;
    v13 = v9;
    v10 = sub_100D6390((_DWORD *)this);
    DevMsg(2, "scripted_schedule \"%s\" using NPC \"%s\"(%s)\n", v10, v13, v15);
    sub_10231160((_DWORD *)this, v7);
    v7 = sub_10230400(this, 1);
  }
  while ( v7 );
  *(_BYTE *)(this + 836) = 1;
}
