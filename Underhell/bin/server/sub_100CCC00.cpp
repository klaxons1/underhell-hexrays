char __thiscall sub_100CCC00(float *this, int a2)
{
  _BYTE *v3; // edi
  int v4; // ebx
  float *v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  double v8; // st7
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  char result; // al
  BOOL v18; // edi
  char v19; // bl
  float v20[3]; // [esp+44h] [ebp-1Ch] BYREF
  float v21; // [esp+50h] [ebp-10h] BYREF
  float v22; // [esp+54h] [ebp-Ch]
  float v23; // [esp+58h] [ebp-8h]
  float *v24; // [esp+5Ch] [ebp-4h]

  v3 = this + 56;
  if ( *((_BYTE *)this + 224) != 1 )
  {
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 472))(this, this + 56);
    *v3 = 1;
  }
  v4 = a2;
  sub_100C90A0((int)this, &v21, a2);
  if ( sub_1011B550(this) )
  {
    v5 = (float *)sub_1011B5F0(v20, this);
    v21 = v21 + *v5;
    v22 = v5[1] + v22;
    v23 = v5[2] + v23;
  }
  v6 = *((_DWORD *)this + 525);
  if ( v6 == -1 || off_1061BE18[4 * ((_DWORD)this[525] & 0xFFF) + 2] != *((_DWORD *)this + 525) >> 12 )
    v24 = 0;
  else
    v24 = (float *)off_1061BE18[4 * ((_DWORD)this[525] & 0xFFF) + 1];
  v7 = *((_DWORD *)this + 106);
  if ( v7 )
  {
    v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 120))(v7);
    v9 = *((_DWORD *)this + 525);
    v20[0] = v21 * v8;
    v20[1] = v22 * v8;
    v20[2] = v8 * v23;
    if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
      (*(void (__thiscall **)(float *, _DWORD, _DWORD, float *))(*(_DWORD *)this + 960))(this, 0, 0, v20);
    else
      (*(void (__thiscall **)(float *, int, _DWORD, float *))(*(_DWORD *)this + 960))(
        this,
        off_1061BE18[4 * (v9 & 0xFFF) + 1],
        0,
        v20);
  }
  else
  {
    if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (v6 & 0xFFF) + 1];
    (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 960))(this, v10, 0, 0);
  }
  if ( ((_DWORD)this[62] & 8) != 0 )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100E3960("item_healthvial", this + 145, this + 176, 0);
  }
  sub_1023C380((int)"BaseCombatCharacter.StopWeaponSounds", 0.0, 0);
  v11 = *(_DWORD *)(a2 + 44);
  if ( v11 != -1 )
  {
    v12 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    v13 = v11 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v13 )
    {
      if ( *v12 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v13 )
          v14 = *v12;
        else
          v14 = 0;
        (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v14 + 272))(v14, this, a2);
        v15 = *(_DWORD *)(a2 + 44);
        if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v15 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
        sub_1010C7F0(v16, (int)"KilledNPC", 0.30000001, (int)this, (int)this, 0);
      }
    }
  }
  sub_100DA010(a2);
  result = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1040))(this, a2);
  if ( !result )
  {
    if ( (*(_DWORD *)(a2 + 64) & 0x4000000) == 0
      || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 764))(this) )
    {
      result = sub_103FA550();
      if ( result && v24 )
        result = sub_100C3210(
                   v24,
                   0,
                   *(float *)(dword_106B31C8 + 12),
                   0,
                   0,
                   SLODWORD(flt_106F1CA8),
                   SLODWORD(flt_106F1CAC),
                   SLODWORD(flt_106F1CB0),
                   0);
      goto LABEL_43;
    }
    v18 = (*(_DWORD *)(a2 + 64) & 0x100) != 0;
    result = sub_100C3210(
               this,
               0,
               *(float *)(dword_106B31C8 + 12),
               0,
               v18,
               SLODWORD(flt_106F1CA8),
               SLODWORD(flt_106F1CAC),
               SLODWORD(flt_106F1CB0),
               0);
    v19 = result;
    if ( v24 )
      result = sub_100C3210(
                 v24,
                 0,
                 *(float *)(dword_106B31C8 + 12),
                 0,
                 v18,
                 SLODWORD(flt_106F1CA8),
                 SLODWORD(flt_106F1CAC),
                 SLODWORD(flt_106F1CB0),
                 0);
    if ( !v19 )
    {
      v4 = a2;
LABEL_43:
      if ( (*(_DWORD *)(v4 + 64) & 0x400000) == 0 )
      {
        result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 320))(this);
        if ( !result )
          return (*(int (__thiscall **)(float *, int, float *))(*(_DWORD *)this + 1056))(this, v4, &v21);
      }
    }
  }
  return result;
}
