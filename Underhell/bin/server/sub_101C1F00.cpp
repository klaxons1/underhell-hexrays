void __thiscall sub_101C1F00(_DWORD *this, void (__thiscall *a2)(_DWORD *))
{
  const char *v3; // eax
  int v4; // eax
  const char *v5; // edx
  const char *v6; // esi
  const char *v7; // eax
  int v8; // esi
  double v9; // st7
  _DWORD *v10; // eax
  const char *v11; // edi
  const char *v12; // eax
  double v13; // [esp+18h] [ebp-1Ch]
  float v14; // [esp+2Ch] [ebp-8h]
  float v15; // [esp+30h] [ebp-4h]
  float v16; // [esp+3Ch] [ebp+8h]

  if ( *(_DWORD *)(dword_106BA534 + 48) )
  {
    v4 = sub_10264CF0();
    v5 = (const char *)this[23];
    if ( !v5 )
      v5 = String;
    v3 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 16))(v4, v5);
  }
  else
  {
    v3 = "CBaseEntity::PhysicsDispatchThink";
  }
  CVProfile::EnterScope(g_VProfCurrentProfile, v3, 1, "Unaccounted", 0, 0);
  v15 = *(float *)(dword_106BA71C + 44);
  if ( (*(int (**)(void))(g_pVCR + 12))() )
    v15 = 0.0;
  v14 = 0.0;
  if ( sub_100D62D0(this) )
  {
    v6 = (const char *)this[23];
    if ( !v6 )
      v6 = String;
    v7 = sub_100D6390(this);
    Warning("Dormant entity %s (%s) is thinking!!\n", v6, v7);
  }
  if ( 0.0 != v15 )
    v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
  if ( a2 )
  {
    v8 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    a2(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  }
  if ( 0.0 != v15 )
  {
    v9 = (((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0) - v14) * 1000.0;
    v16 = v9;
    if ( v9 > v15 )
    {
      v10 = (_DWORD *)sub_100D7680((int)this);
      if ( v10 && v10[531] )
      {
        (*(void (__thiscall **)(_DWORD *, float))(*v10 + 2200))(v10, COERCE_FLOAT(LODWORD(v16)));
      }
      else
      {
        v11 = (const char *)this[23];
        if ( !v11 )
          v11 = String;
        v12 = (const char *)sub_1043394E(
                              &CBaseEntity * `RTTI Type Descriptor',
                              COERCE_UNSIGNED_INT64(v16),
                              HIDWORD(COERCE_UNSIGNED_INT64(v16)));
        Msg("%s(%s) thinking for %.02f ms!!!\n", v11, v12, v13);
      }
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
