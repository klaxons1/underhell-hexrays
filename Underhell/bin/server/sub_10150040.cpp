char __thiscall sub_10150040(int this)
{
  float v2; // edx
  float v3; // eax
  char *v4; // eax
  int v5; // eax
  float *v6; // esi
  const char *v7; // edi
  _DWORD *v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  float v13[3]; // [esp+Ch] [ebp-1Ch] BYREF
  float v14[3]; // [esp+18h] [ebp-10h] BYREF
  int v15; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584);
  v3 = *(float *)(this + 588);
  v13[0] = *(float *)(this + 580);
  v13[1] = v2;
  v13[2] = v3;
  v4 = sub_100D8070((_DWORD *)this);
  v5 = __RTDynamicCast(
         (int)v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CFuncLadderEndPoint `RTTI Type Descriptor',
         0);
  v6 = (float *)v5;
  v15 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v14[0] = v6[145];
    v14[1] = v6[146];
    v14[2] = v6[147];
    v9 = (_DWORD *)sub_101811E0("func_useableladder", -1);
    if ( v9 )
    {
      sub_1014F3A0((int)v9, (int)&savedregs, this, (int)v9, v13, v14);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_100E0D20((int)v9, (float *)(this + 580));
      v10 = *(_DWORD *)(this + 300);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
      (*(void (__thiscall **)(_DWORD *, int, int))(*v9 + 140))(v9, v11, -1);
      v12 = *v9;
      v9[65] = *(_DWORD *)(this + 260);
      (*(void (__thiscall **)(_DWORD *))(v12 + 96))(v9);
    }
    sub_1025FAC0(v15);
    sub_1025FAC0(this);
    return 1;
  }
  else
  {
    v7 = *(const char **)(this + 260);
    if ( !v7 )
      v7 = String;
    DevMsg(1, "func_ladderendpoint(%s) without matching target\n", v7);
    return 0;
  }
}
