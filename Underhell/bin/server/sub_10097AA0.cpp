void __thiscall sub_10097AA0(float *this, int a2)
{
  int v3; // eax
  bool v4; // zf
  float *v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  float *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  bool v12; // cc
  int v13; // ecx

  if ( sub_100296A0(this) )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v3 = sub_10261B20();
      if ( v3 )
        (*(void (__thiscall **)(int, const char *, float *, float *, _DWORD))(*(_DWORD *)v3 + 148))(
          v3,
          "OnSquadMemberKilled",
          this,
          this,
          0);
    }
  }
  v4 = (*(unsigned __int8 (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 1528))(this, 0) == 0;
  v5 = &flt_1060B428;
  if ( v4 )
    v5 = &flt_1060B430;
  v6 = *((_DWORD *)v5 + 1);
  if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (v6 & 0xFFF) + 1];
  if ( (float *)v7 == this )
  {
    v4 = (*(unsigned __int8 (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 1528))(this, 0) == 0;
    v8 = &flt_1060B428;
    if ( v4 )
      v8 = &flt_1060B430;
    *v8 = 0.0;
    v8[1] = NAN;
  }
  v9 = sub_10093460(this, 2);
  v10 = __RTDynamicCast(
          v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CAI_PlayerAlly `RTTI Type Descriptor',
          0);
  if ( v10 )
    (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 2344))(
      v10,
      "TLK_ALLY_KILLED",
      0,
      0,
      0,
      0);
  sub_100218B0(this, 0);
  sub_1023C380((int)"AI_BaseNPC.SentenceStop", 0.0, 0);
  v11 = 0;
  v12 = *((_DWORD *)this + 910) <= 0;
  this[50] = 0.0;
  if ( !v12 )
  {
    do
    {
      v13 = *(_DWORD *)(*((_DWORD *)this + 907) + 4 * v11);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 80))(v13, a2);
      ++v11;
    }
    while ( v11 < *((_DWORD *)this + 910) );
  }
  sub_10035690((int)this, a2, v11, a2);
  sub_10097860(this);
}
