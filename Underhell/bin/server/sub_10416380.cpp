void __thiscall sub_10416380(int this)
{
  bool v2; // zf
  double v3; // st7
  void (__noreturn ***v4)(); // eax
  void (__noreturn ***v5)(); // eax
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int *i; // edx
  int v12; // ebx
  int v13; // ecx
  double v14; // st7
  float v15; // [esp+20h] [ebp-50h]
  _BYTE v16[8]; // [esp+30h] [ebp-40h] BYREF
  int v17; // [esp+38h] [ebp-38h]
  int v18; // [esp+44h] [ebp-2Ch]
  int v19; // [esp+48h] [ebp-28h]
  float v20[3]; // [esp+50h] [ebp-20h] BYREF
  float v21[3]; // [esp+5Ch] [ebp-14h] BYREF
  float v22; // [esp+68h] [ebp-8h] BYREF
  char v23; // [esp+6Fh] [ebp-1h] BYREF

  v2 = *(_BYTE *)(this + 2144) == 0;
  v3 = *(float *)(this + 2112) - *(float *)(dword_106B31C8 + 12);
  v22 = v3;
  if ( v2 && (v3 > 6.0 || -1.0 == *(float *)(this + 2112)) )
  {
    *(_DWORD *)(this + 2148) = dword_106F13A8;
    dword_106F13A8 = this;
    *(_BYTE *)(this + 2144) = 1;
  }
  if ( *(float *)(this + 2112) == -1.0 )
    goto LABEL_33;
  if ( v3 <= 10.0 && !*(_BYTE *)(this + 2132) )
  {
    v2 = *(_BYTE *)(this + 2136) == 0;
    *(_BYTE *)(this + 2132) = 1;
    if ( v2 )
    {
      v4 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, float))(*v4)[11])(
        v4,
        *(_DWORD *)(this + 2128),
        60.0,
        COERCE_FLOAT(LODWORD(v22)));
      v5 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, float, _DWORD))(*v5)[13])(
        v5,
        *(_DWORD *)(this + 2128),
        COERCE_FLOAT(LODWORD(v22)),
        0);
      v3 = v22;
    }
  }
  if ( *(_BYTE *)(this + 2144) && v3 <= 6.0 )
    sub_10415990(this);
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 2112) )
  {
    if ( *(_BYTE *)(this + 2136) )
    {
LABEL_40:
      v15 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)this, v15, 0);
      return;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1023D4B0(1, (float *)(this + 580), 256, 0.1, this, 2, 0);
LABEL_33:
    if ( !*(_BYTE *)(this + 2136) && *(_BYTE *)(this + 447) > 1u )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v13 = *(_DWORD *)(this + 252) >> 11;
      v14 = 2.0;
      v21[0] = *(float *)(this + 580) + 2.0;
      v21[1] = *(float *)(this + 584) + 2.0;
      v21[2] = *(float *)(this + 588) + 2.0;
      if ( (v13 & 1) != 0 )
      {
        sub_100DAE60(this);
        v14 = 2.0;
      }
      v20[0] = *(float *)(this + 580) - v14;
      v20[1] = *(float *)(this + 584) - v14;
      v20[2] = *(float *)(this + 588) - v14;
      sub_102605C0(v20, v21, 1);
      v23 = 0;
      sub_10415EE0((_BYTE *)(this + 2134), &v23);
    }
    goto LABEL_40;
  }
  v6 = sub_10261B20();
  v7 = (_DWORD *)v6;
  if ( !*(_BYTE *)(this + 2136) )
  {
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 2122) )
      {
        v12 = sub_101E7EA0((_DWORD *)v6, 1);
        if ( sub_10019AD0((_DWORD *)this) == v12 )
        {
          v17 = 0;
          v18 = -1;
          v19 = 0;
          sub_101EED50((int)v7, (int)v16);
        }
      }
    }
    goto LABEL_28;
  }
  v8 = sub_10019AD0((_DWORD *)this);
  LODWORD(v22) = *(_DWORD *)(v8 + 848) - 1;
  sub_10031670((_DWORD *)(v8 + 848), &v22);
  if ( !v7 || !sub_10019AD0((_DWORD *)this) || (v9 = sub_10174000(v7), sub_10019AD0((_DWORD *)this) != v9) )
  {
LABEL_28:
    sub_1025FAC0(this);
    return;
  }
  sub_1016AF10(this);
  sub_1025FAC0(this);
  v7[541] = -1;
  v10 = 0;
  for ( i = v7 + 1232; *i < 19 || *i > 23; ++i )
  {
    if ( ++v10 >= 28 )
    {
      sub_1025FAC0(this);
      return;
    }
  }
  v22 = 0.0;
  sub_10174030(v7 + 1232, v10, (int *)&v22);
  (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
    dword_106B31D0,
    v7[6],
    "UpdateInventory");
  sub_1025FAC0(this);
}
