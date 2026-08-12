char __thiscall sub_10119FB0(unsigned __int16 *this)
{
  const char *v2; // edi
  int v3; // eax
  int *v4; // ecx
  int *v5; // ecx
  float v7; // [esp+8h] [ebp-30h]
  float v8[3]; // [esp+18h] [ebp-20h] BYREF
  float v9[3]; // [esp+24h] [ebp-14h] BYREF
  _BYTE v10[4]; // [esp+30h] [ebp-8h] BYREF
  _BYTE v11[4]; // [esp+34h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v11);
  if ( !v2 || !*v2 )
  {
    v2 = "models/extras/info_speech.mdl";
    *((_DWORD *)this + 115) = *(_DWORD *)sub_10162BE0(v10, "models/extras/info_speech.mdl");
    sub_100D8500(this);
  }
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, v2);
  v9[0] = 16.0;
  v9[1] = 16.0;
  v9[2] = 16.0;
  v8[0] = -16.0;
  v8[1] = -16.0;
  v8[2] = -16.0;
  sub_1025F360(this, v8, v9);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 3);
  sub_100EAB80(this, 16);
  v3 = sub_100BDF40((int)this, "idle");
  sub_100C3330((int)this, v3);
  sub_100EC3F0(this, (int)sub_10118700, 0.0, 0);
  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v7, 0);
  if ( *((_DWORD *)this + 320) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 1280);
    }
    *((_DWORD *)this + 320) = 0;
  }
  if ( *((_DWORD *)this + 321) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
        sub_100194B0(v5, 1284);
    }
    *((_DWORD *)this + 321) = 0;
  }
  return sub_10119700((int)this, *((_BYTE *)this + 1205));
}
