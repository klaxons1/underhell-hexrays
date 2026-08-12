void __thiscall sub_1034B330(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  float v9; // ecx
  float v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int *v14; // edx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  void (__noreturn ***v20)(); // eax
  const char *v21; // esi
  __int64 v22; // [esp+4h] [ebp-34h]
  float v23[3]; // [esp+14h] [ebp-24h] BYREF
  float v24[3]; // [esp+20h] [ebp-18h] BYREF
  float v25; // [esp+2Ch] [ebp-Ch] BYREF
  float v26; // [esp+30h] [ebp-8h]
  float v27; // [esp+34h] [ebp-4h]

  v3 = *(_DWORD *)(this + 4016);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5)
    && *v4
    && (v4[1] != v5 ? (v6 = 0) : (v6 = *v4),
        *(char **)(v6 + 92) == "prop_vehicle_apc" || sub_100D6240((_DWORD *)v6, "prop_vehicle_apc")) )
  {
    v7 = *(_DWORD *)(this + 4016);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v8 + 140))(v8, 0, 0);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v9 = *(float *)(this + 476);
    v10 = *(float *)(this + 480);
    v27 = *(float *)(this + 484);
    v25 = v9;
    v26 = v10;
    if ( v27 > 0.0 )
      v27 = 0.0;
    v11 = *(_DWORD *)(this + 4016);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != *(_DWORD *)(this + 4016) >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    if ( *(int *)(v12 + 220) > 0 )
    {
      v25 = flt_106F1CA8;
      v26 = flt_106F1CAC;
      v27 = flt_106F1CB0;
    }
    if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
    sub_100DD660(v13, &v25);
    v15 = *(_DWORD *)(this + 4016);
    if ( v15 == -1 || (v14 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v15 >> 12) )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    sub_100E0970(v16, (int)v14, *(_DWORD *)(this + 4024), 0);
    v17 = *(_DWORD *)(this + 4016);
    if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v17 >> 12 )
      v18 = 0;
    else
      v18 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    v19 = *(_DWORD *)(v18 + 424);
    if ( v19 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 284))(v19);
    v24[0] = 40.0;
    v24[1] = 40.0;
    v24[2] = 40.0;
    v23[0] = -40.0;
    v23[1] = -40.0;
    v23[2] = 0.0;
    sub_1025F360((_DWORD *)this, (int)v23, (int)v24);
    HIDWORD(v22) = this;
    LODWORD(v22) = this;
    *(_DWORD *)(this + 4016) = -1;
    sub_1010DD80((_DWORD *)(this + 4168), v22, 0.0);
    if ( *(_DWORD *)(this + 3960) )
    {
      if ( *(_DWORD *)(this + 4160) )
      {
        v20 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v20)[12])(
          v20,
          *(_DWORD *)(this + 4160),
          0.0,
          0.0);
      }
      *(_DWORD *)(this + 3960) = 0;
    }
    *(_DWORD *)(this + 4032) = -1;
  }
  else
  {
    v21 = *(const char **)(this + 260);
    if ( !v21 )
      v21 = String;
    Warning("npc_combinedropship %s was told to drop APC, but isn't carrying one!\n", v21);
  }
}
