int *__thiscall sub_10165AA0(int this)
{
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  char *v5; // eax
  int v6; // edx
  int *result; // eax
  const char *v8; // eax
  char *v9; // [esp-4h] [ebp-68h]
  _BYTE v10[84]; // [esp+Ch] [ebp-58h] BYREF
  int v11; // [esp+60h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v11);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  v3 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v11);
  if ( !v3 )
    v3 = String;
  if ( v3 == "models/player.mdl" || !_stricmp(v3, "models/player.mdl") )
    goto LABEL_12;
  v4 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v11);
  if ( !v4 )
    v4 = String;
  if ( v4 == "models/holo.mdl" || !_stricmp(v4, "models/holo.mdl") )
  {
LABEL_12:
    v9 = (char *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
    v5 = (char *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 12);
  }
  else
  {
    v9 = sub_10073730(0);
    v5 = sub_10073710(0);
  }
  sub_1025F360(this, v5, v9);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v6, 3, 0);
  *(_DWORD *)(this + 1680) = 0;
  if ( *(_DWORD *)(this + 220) != 8 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 8;
  }
  *(float *)(this + 1684) = 0.5;
  *(_DWORD *)(this + 2324) = 0;
  sub_10020460((_DWORD *)this, 2049);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  if ( (*(_BYTE *)(this + 250) & 1) != 0 )
    goto LABEL_25;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = (int *)sub_102659D0(this, this + 580, this + 580, 33570827, v10);
  if ( v10[55] )
  {
    v8 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v11);
    if ( !v8 )
      v8 = String;
    Msg("Placed npc_generic in solid!!! (%s)\n", v8);
    v11 = 0x10000;
    result = sub_100332A0((int *)(this + 248), &v11);
  }
  if ( (*(_BYTE *)(this + 250) & 1) != 0 )
  {
LABEL_25:
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    if ( *(_BYTE *)(this + 225) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 0;
    }
    return (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 592))(this);
  }
  return result;
}
