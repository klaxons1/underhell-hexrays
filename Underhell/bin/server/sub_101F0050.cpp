void __thiscall sub_101F0050(void *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float *v6; // edi
  _BYTE v7[4]; // [esp+20h] [ebp-C8h] BYREF
  float v8; // [esp+24h] [ebp-C4h]
  float v9; // [esp+28h] [ebp-C0h]
  float v10; // [esp+2Ch] [ebp-BCh]
  float v11; // [esp+30h] [ebp-B8h]
  int v12; // [esp+34h] [ebp-B4h]
  int v13; // [esp+38h] [ebp-B0h]
  int v14[3]; // [esp+70h] [ebp-78h] BYREF
  float v15[8]; // [esp+7Ch] [ebp-6Ch] BYREF
  float v16; // [esp+9Ch] [ebp-4Ch]
  int v17; // [esp+BCh] [ebp-2Ch]
  float v18; // [esp+C4h] [ebp-24h] BYREF
  float v19; // [esp+C8h] [ebp-20h]
  float v20; // [esp+CCh] [ebp-1Ch]
  float v21; // [esp+D0h] [ebp-18h] BYREF
  float v22; // [esp+D4h] [ebp-14h]
  float v23; // [esp+D8h] [ebp-10h]
  float v24; // [esp+DCh] [ebp-Ch] BYREF
  float v25; // [esp+E0h] [ebp-8h]
  float v26; // [esp+E4h] [ebp-4h]
  int savedregs; // [esp+E8h] [ebp+0h] BYREF

  if ( this && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 320))(this) )
  {
    sub_101E3110(this, 9u, 0, 4u);
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 968))(this, &v18);
    v2 = (float *)(*(int (__thiscall **)(void *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 1508))(
                    this,
                    &v24,
                    1.0,
                    72.0);
    v3 = *v2;
    v21 = *v2;
    v4 = v2[1];
    v22 = v2[1];
    v5 = v2[2];
    v23 = v2[2];
    v24 = v3 * 72.0 + v18;
    v25 = v4 * 72.0 + v19;
    v26 = v5 * 72.0 + v20;
    sub_1002A5F0((int)&savedregs, (int)this, &v18, &v24, 100679691, (int)this, 0, (int)v14);
    sub_10248110((int)this, (int)this, *(float *)(dword_106BB8D4 + 44), 128, 0);
    v11 = *(float *)v14;
    v12 = v14[1];
    v13 = v14[2];
    v8 = v21;
    v9 = v22;
    v10 = v23;
    sub_10023860((int)&savedregs, (int)v7, (float *)v14, v15, (int *)&v21);
    if ( 1.0 == v16 )
    {
      v24 = v24 - v21 * 55.424;
      v25 = v25 - v22 * 55.424;
      v26 = v26 - 55.424 * v23;
      sub_100231A0(
        (int)&savedregs,
        (int)this,
        &v18,
        &v24,
        flt_1063C5AC,
        flt_1063C5B8,
        100679691,
        (int)this,
        0,
        (int)v14);
      if ( v16 < 1.0 )
      {
        if ( v17 )
        {
          v6 = (float *)v17;
          if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
            sub_100DAE60(v17);
          v24 = v6[145] - v18;
          v25 = v6[146] - v19;
          v26 = v6[147] - v20;
          off_10689714();
          if ( v25 * v22 + v24 * v21 + v26 * v23 >= 0.70721 )
            sub_101EBCC0((int)&savedregs, (int)v6, (int)this, (int)v14, (int)flt_1063C5AC, (int)flt_1063C5B8, (int)this);
          else
            v16 = 1.0;
        }
      }
    }
    (*(void (__thiscall **)(int, void *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
      off_10627F88,
      this,
      1,
      "weapon_kick");
    if ( 1.0 != v16 )
      sub_101E5A60((float *)this, (int)v14);
  }
}
