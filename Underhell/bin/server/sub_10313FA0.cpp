char __thiscall sub_10313FA0(float *this, int a2)
{
  char *v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  const char *v11; // edi
  _DWORD v12[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (char *)*((_DWORD *)this + 1066);
  if ( !v3 )
    v3 = (char *)String;
  v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
  if ( v4 )
  {
    if ( (v4[63] & 0x800) != 0 )
      sub_100DAE60((int)v4);
    v5 = v4[146];
    v6 = v4[147];
    v12[0] = v4[145];
    v7 = v4[63] >> 11;
    v12[1] = v5;
    v12[2] = v6;
    if ( (v7 & 1) != 0 )
      sub_100DAE60((int)v4);
    v8 = v4[178];
    v9 = v4[176];
    v13[1] = v4[177];
    v13[2] = v8;
    v13[0] = v9;
    (*(void (__thiscall **)(float *, _DWORD *, _DWORD *, float *))(*(_DWORD *)this + 416))(
      this,
      v12,
      v13,
      &flt_106F1CA8);
    return sub_100B8200(this);
  }
  else
  {
    v11 = (const char *)*((_DWORD *)this + 65);
    if ( !v11 )
      v11 = String;
    return DevMsg(2, "NPC \"%s\" failed to find a suitable transition a point\n", v11);
  }
}
