int __thiscall sub_1040C6E0(int this, float a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v5; // edx
  unsigned int v6; // eax
  int v7; // edi
  char v8; // al
  char v9; // al
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  _DWORD *v13; // eax
  char *v14; // ecx
  int v15; // ecx
  bool v16; // al
  long double v17; // st5
  double v18; // st7
  double v19; // st7
  double (__thiscall *v20)(int, _DWORD, _DWORD); // eax
  double v21; // st7
  double (__thiscall *v22)(int, _DWORD, _DWORD); // eax
  double v23; // st7
  double (__thiscall *v24)(int, _DWORD, _DWORD); // edx
  double v25; // st7
  int v27; // eax
  _DWORD *v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edx
  int v31; // ecx
  float *v32; // edi
  float *v33; // eax
  int v34; // eax
  float v35[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  float v36; // [esp+38h] [ebp-10h]
  double v37; // [esp+3Ch] [ebp-Ch]
  char v38; // [esp+47h] [ebp-1h]

  v2 = LODWORD(a2);
  v3 = *(_DWORD *)(LODWORD(a2) + 40);
  if ( v3 == -1 )
  {
    v5 = 0;
    HIDWORD(v37) = 0;
  }
  else if ( off_1061BE18[4 * (*(_DWORD *)(LODWORD(a2) + 40) & 0xFFF) + 2] == v3 >> 12 )
  {
    HIDWORD(v37) = off_1061BE18[4 * (*(_DWORD *)(LODWORD(a2) + 40) & 0xFFF) + 1];
    v5 = HIDWORD(v37);
  }
  else
  {
    HIDWORD(v37) = 0;
    v5 = 0;
  }
  v6 = *(_DWORD *)(LODWORD(a2) + 44);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(LODWORD(a2) + 44) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(LODWORD(a2) + 44) & 0xFFF) + 1];
  if ( !v5 || (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5), v38 = 1, !v8) )
    v38 = 0;
  if ( !v7 || (v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7), HIBYTE(a2) = 1, !v9) )
    HIBYTE(a2) = 0;
  v10 = *(_DWORD *)(this + 300);
  if ( v10 != -1 )
  {
    v11 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
    v12 = v10 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v12 )
    {
      if ( *v11 )
      {
        v13 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v12 ? (_DWORD *)*v11 : 0;
        v14 = (char *)dword_106F0938;
        if ( v13[23] == dword_106F0938 )
          return 0;
        if ( !dword_106F0938 )
          v14 = (char *)String;
        if ( sub_100D6240(v13, v14) )
          return 0;
      }
    }
  }
  if ( *(_DWORD *)(dword_106F0A34 + 48) || sub_1040B2F0((_DWORD *)this) && (HIBYTE(a2) || v38) )
  {
    sub_1040C4E0(this);
    return 0;
  }
  if ( v7
    && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 220))(v7) == 9
     || (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 220))(v7) == 25) )
  {
    v15 = *(_DWORD *)(this + 424);
    if ( v15 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 40))(v15) )
        return 0;
    }
  }
  if ( !*(_DWORD *)(dword_106E921C + 48) && !*(_DWORD *)(dword_106E9264 + 48) && !*(_DWORD *)(dword_106E92AC + 48)
    || *(int *)(this + 220) <= 0
    || !HIDWORD(v37)
    || *(char **)(HIDWORD(v37) + 92) != "hunter_flechette" && !sub_100D6240((_DWORD *)HIDWORD(v37), "hunter_flechette") )
  {
    if ( (*(_BYTE *)(v2 + 64) & 1) != 0 )
      return sub_1020FE70((int *)this, v7, v2);
    return 0;
  }
  if ( !sub_1040B2F0((_DWORD *)this) && (*(_DWORD *)(v2 + 64) & 0x1000) != 0 )
  {
    if ( *(float *)(v2 + 52) >= 5.0 )
      return 1;
    v16 = 45.0 == *(float *)(this + 1732) && 0.0 == *(float *)(this + 1736) && 0.0 == *(float *)(this + 1740);
    v17 = sin(*(float *)(dword_106B31C8 + 12));
    a2 = v17;
    if ( v16 )
    {
      if ( v17 >= 0.0 )
      {
LABEL_52:
        v18 = 1.0;
LABEL_53:
        v37 = v18;
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -2.5,
                2.5);
        v20 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        a2 = v19 + (fabs(a2) + 1.0) * 10.0;
        v21 = v20(dword_106B31E4, -2.5, 2.5);
        *(float *)(this + 1732) = (v21 + a2) * v37 + *(float *)(this + 1732);
        v22 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        a2 = sin(*(float *)(dword_106B31C8 + 12));
        v23 = v22(dword_106B31E4, -15.0, 15.0);
        *(float *)(this + 1736) = v23 + (cos(*(float *)(dword_106B31C8 + 12) * 0.5) + a2) * 15.0 * 0.5;
        v24 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        a2 = sin(*(float *)(dword_106B31C8 + 12));
        v25 = v24(dword_106B31E4, -7.5, 7.5);
        *(float *)(this + 1740) = v25
                                + (sin(*(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B31C8 + 12)) + a2)
                                * 7.5
                                * 0.5;
        return 1;
      }
    }
    else if ( *(float *)(this + 1732) >= 45.0 )
    {
      goto LABEL_52;
    }
    v18 = -1.0;
    goto LABEL_53;
  }
  if ( *(_DWORD *)(dword_106F0C2C + 48) && sub_1040B2F0((_DWORD *)this) )
  {
    a2 = 0.0;
    sub_100317D0((_BYTE *)(this + 225), (char *)&a2);
    v27 = sub_10019B00((_DWORD *)this);
    v28 = (_DWORD *)__RTDynamicCast(
                      v27,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CNPC_Strider `RTTI Type Descriptor',
                      0);
    sub_103B5FD0(v28, this);
    sub_1040AB70((_DWORD *)this);
    v29 = *(_DWORD *)(v2 + 8);
    v30 = *(_DWORD *)(v2 + 12);
    v36 = *(float *)(v2 + 4);
    v37 = COERCE_DOUBLE(__PAIR64__(v30, v29));
    v31 = *(_DWORD *)(this + 424);
    v35[0] = v36 * 5.0;
    v35[1] = 5.0 * *(float *)&v37;
    v35[2] = 0.0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v31 + 236))(v31, v35);
    sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_10687804);
    sub_100EC3F0((_DWORD *)this, (int)sub_1040C130, 0.0, 0);
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    *(_DWORD *)(this + 1744) |= 1u;
    return 0;
  }
  else
  {
    sub_1023C380((_DWORD *)this, (int)"Weapon_StriderBuster.Dud_Detonate", 0.0, 0);
    v32 = (float *)sub_1001F410((_DWORD *)this);
    v33 = (float *)sub_10019640((_DWORD *)this);
    sub_101AB000("striderbuster_break_flechette", *v33, v33[1], v33[2], *v32, v32[1], v32[2], 0);
    sub_10064870((_DWORD *)this, 0);
    v34 = sub_1001E870((_DWORD *)v2);
    sub_1040BF40(this, v34);
    return 0;
  }
}
