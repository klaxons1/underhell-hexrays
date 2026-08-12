int __thiscall sub_101643A0(unsigned __int16 *this)
{
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  char *v6; // eax
  const char *v7; // eax
  int v8; // edx
  char *v9; // eax
  char *v11; // [esp-4h] [ebp-Ch]
  _BYTE v12[4]; // [esp+4h] [ebp-4h] BYREF

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v12);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, v2);
  v3 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v12);
  if ( !v3 )
    v3 = String;
  if ( v3 == "models/player.mdl" || !_stricmp(v3, "models/player.mdl") )
    goto LABEL_16;
  v4 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v12);
  if ( !v4 )
    v4 = String;
  if ( v4 == "models/holo.mdl" || !_stricmp(v4, "models/holo.mdl") )
    goto LABEL_16;
  v5 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v12);
  if ( !v5 )
    v5 = String;
  if ( v5 == "models/blackout.mdl" || !_stricmp(v5, "models/blackout.mdl") )
  {
LABEL_16:
    v11 = (char *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
    v6 = (char *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 12);
  }
  else
  {
    v11 = sub_10073730(0);
    v6 = sub_10073710(0);
  }
  sub_1025F360(this, v6, v11);
  v7 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v12);
  if ( !v7 )
    v7 = String;
  if ( v7 == "models/blackout.mdl" || !_stricmp(v7, "models/blackout.mdl") )
  {
    sub_10112C00((int)(this + 160), 0);
  }
  else
  {
    sub_10112C00((int)(this + 160), 2);
    sub_101129A0(this + 160, this[178] | 0x10);
  }
  sub_100E0970((int)this, v8, 3, 0);
  sub_100CF450(this, 0);
  if ( *((_DWORD *)this + 55) != 8 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 464))(this, this + 110);
    *((_DWORD *)this + 55) = 8;
  }
  *((float *)this + 421) = 0.5;
  *((_DWORD *)this + 581) = 0;
  sub_10020460(this, 2049);
  if ( sub_100BEF30((int)this, "eyes") > 0 && sub_100BEF30((int)this, "forward") > 0 )
    sub_10020460(this, 8392704);
  if ( *((_DWORD *)this + 1043) )
  {
    v9 = (char *)*((_DWORD *)this + 1043);
    if ( !v9 )
      v9 = (char *)String;
    *((_DWORD *)this + 419) = sub_10073810(v9);
  }
  else
  {
    *((_DWORD *)this + 419) = 0;
  }
  sub_10027A90((int)this, 0);
  return (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1164))(this);
}
