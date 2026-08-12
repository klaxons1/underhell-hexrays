char *__thiscall sub_10299D40(int this, int a2, float a3, char a4)
{
  int v5; // edi
  double v6; // st7
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  const char *v10; // edi
  const char *v11; // eax
  unsigned int v12; // ecx
  int *v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax

  sub_10296DE0(this);
  v5 = a2;
  if ( a2 )
    *(_DWORD *)(this + 60) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  *(_BYTE *)(this + 16) = 1;
  *(_WORD *)(this + 36) = 0;
  *(_BYTE *)(this + 38) = 0;
  *(_BYTE *)(this + 26) = 0;
  v6 = *(float *)(dword_106DB094 + 44) + *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 27) = a4;
  *(float *)(this + 40) = v6;
  *(float *)(this + 44) = 0.0;
  v7 = *(_DWORD *)(this + 60);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
  *(_BYTE *)(this + 52) = __RTDynamicCast(
                            v8,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&CAI_ActBusyGoal `RTTI Type Descriptor',
                            (int)&CAI_ActBusyQueueGoal `RTTI Type Descriptor',
                            0) != 0;
  *(_DWORD *)(this + 20) = -1;
  *(_DWORD *)(this + 68) = -1;
  *(float *)(this + 48) = a3;
  *(_WORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
  {
    v9 = *(_DWORD **)(this + 4);
    v10 = (const char *)v9[23];
    if ( !v10 )
      v10 = String;
    v11 = sub_100D6390(v9);
    Msg("ACTBUSY: behavior enabled on NPC %s (%s)\n", v10, v11);
    v5 = a2;
  }
  v12 = *(_DWORD *)(this + 60);
  if ( v12 != -1 )
  {
    v13 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
    v14 = v12 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v14 )
    {
      if ( *v13 )
      {
        v15 = off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v14 ? *v13 : 0;
        if ( *(_DWORD *)(v15 + 860) == 1 )
          sub_102995D0((_DWORD *)this, v5);
      }
    }
  }
  if ( sub_10295EF0((_DWORD *)this) )
  {
    v16 = *(_DWORD *)(this + 4);
    *(float *)(this + 40) = *(float *)(dword_106B31C8 + 12);
    sub_10044510(v16, (int)"Enabling act busy");
  }
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v18 = sub_1007DB30((_DWORD *)(v17 + 52), 100001);
  return sub_10023E00(*(char **)(this + 4), v18);
}
