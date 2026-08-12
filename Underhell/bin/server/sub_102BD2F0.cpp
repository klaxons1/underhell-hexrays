int __thiscall sub_102BD2F0(_DWORD *this)
{
  char *v2; // eax
  int v3; // ebx
  _DWORD *v4; // edi
  const char *v5; // eax
  const char *v6; // edi
  const char *v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // eax
  float v13; // [esp+24h] [ebp-50h]
  const char *v14; // [esp+28h] [ebp-4Ch]
  int v15; // [esp+28h] [ebp-4Ch]
  int v16; // [esp+28h] [ebp-4Ch]
  int v17[3]; // [esp+38h] [ebp-3Ch] BYREF
  int v18[3]; // [esp+44h] [ebp-30h] BYREF
  int v19[3]; // [esp+50h] [ebp-24h] BYREF
  int v20[3]; // [esp+5Ch] [ebp-18h] BYREF
  int v21; // [esp+68h] [ebp-Ch] BYREF
  float v22; // [esp+6Ch] [ebp-8h]
  float v23; // [esp+70h] [ebp-4h]
  int savedregs; // [esp+74h] [ebp+0h] BYREF

  v2 = (char *)this[322];
  v3 = 0;
  if ( !v2 )
  {
    if ( sub_100DAA70(this) )
    {
      v3 = sub_100D8530(this);
      (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(
        this,
        "models/props_combine/headcrabcannister01a_skybox.mdl");
      sub_10112C00((int)(this + 80), 0);
      (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD))(*this + 528))(this, &v21, 0, 0);
      v10 = this[63] >> 11;
      *(float *)&v21 = *(float *)&v21 * -1.0;
      v22 = v22 * -1.0;
      v23 = -1.0 * v23;
      if ( (v10 & 1) != 0 )
        sub_100DAE60((int)this);
      *(float *)&v15 = (float)*(int *)(v3 + 804);
      sub_102BEC70(
        *(float *)(dword_106B31C8 + 12),
        (int)(this + 315),
        (int)(this + 176),
        (int)&v21,
        (int)(this + 315),
        v3 + 808,
        v15);
      this[63] |= 0x20000u;
      sub_100D8500(this);
      sub_100EC3F0(this, (int)sub_102BB9A0, 0.0, 0);
      v9 = sub_102BE0B0(this + 281) + *(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B31C8 + 28);
      goto LABEL_22;
    }
    sub_102BB510((float *)this, (int)&savedregs, (int)this, (float *)v19, (float *)&v21, (float *)v20);
    v11 = sub_10236A30();
    v3 = v11;
    if ( v11 )
    {
      *(float *)&v16 = (float)*(int *)(v11 + 804);
      sub_102BEC70(*(float *)(dword_106B31C8 + 12), (int)v19, (int)&v21, (int)v20, (int)(this + 315), v11 + 808, v16);
      if ( (unsigned __int8)sub_102BE2C0(this + 281) )
      {
        (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(
          this,
          "models/props_combine/headcrabcannister01a_skybox.mdl");
        sub_10112C00((int)(this + 80), 0);
        this[63] |= 0x20000u;
        sub_100D8500(this);
        sub_100EC3F0(this, (int)sub_102BCFC0, 0.0, 0);
        v9 = sub_102BE0B0(this + 281) + *(float *)(dword_106B31C8 + 12);
LABEL_22:
        v13 = v9;
        sub_100EC4A0(this, v13, 0);
        goto LABEL_23;
      }
    }
    else
    {
      sub_102BE9B0(COERCE_INT(*(float *)(dword_106B31C8 + 12)), (int)v19, (int)&v21, (int)v20, (int)(this + 315), 0.0);
    }
    sub_100EC3F0(this, (int)sub_102BCE00, 0.0, 0);
    v9 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_22;
  }
  v4 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v4 )
  {
    sub_102BB3B0((float *)this);
    (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD))(*this + 528))(this, &v21, 0, 0);
    v8 = this[63] >> 11;
    *(float *)v20 = *(float *)&v21 * -1.0;
    *(float *)&v20[1] = v22 * -1.0;
    *(float *)&v20[2] = -1.0 * v23;
    if ( (v8 & 1) != 0 )
      sub_100DAE60((int)this);
    if ( (v4[63] & 0x800) != 0 )
      sub_100DAE60((int)v4);
    sub_102BE9B0(
      COERCE_INT(*(float *)(dword_106B31C8 + 12)),
      (int)(v4 + 145),
      (int)(this + 176),
      (int)v20,
      (int)(this + 315),
      COERCE_FLOAT(1));
    sub_100EC3F0(this, (int)sub_102BCE00, 0.0, 0);
    v9 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_22;
  }
  v5 = (const char *)this[322];
  if ( !v5 )
    v5 = String;
  v6 = (const char *)this[65];
  if ( !v6 )
    v6 = String;
  v14 = v5;
  v7 = sub_100D6390(this);
  Warning("%s (%s) could not find an entity matching LaunchPositionName of '%s'\n", v6, v7, v14);
  sub_10246D70(this);
LABEL_23:
  sub_102BE0F0(*(float *)(dword_106B31C8 + 12), (int)v18, (int)v17);
  sub_100E0D20((int)this, (float *)v18);
  sub_100E0EA0((int)this, (float *)v17);
  return v3;
}
