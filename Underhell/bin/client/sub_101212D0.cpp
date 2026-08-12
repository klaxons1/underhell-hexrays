void __thiscall sub_101212D0(_DWORD *this, int a2, float a3, int a4)
{
  int v5; // edi
  int v6; // edx
  int (__thiscall *v7)(_DWORD *); // eax
  int v8; // esi
  _DWORD v9[9]; // [esp+Ch] [ebp-64h] BYREF
  __int16 v10; // [esp+30h] [ebp-40h]
  char v11; // [esp+32h] [ebp-3Eh]
  int v12; // [esp+34h] [ebp-3Ch]
  int v13[5]; // [esp+38h] [ebp-38h] BYREF
  __int16 v14; // [esp+4Ch] [ebp-24h]
  _DWORD v15[8]; // [esp+50h] [ebp-20h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  sub_1015B880(v15);
  v15[0] = &CPASFilter::`vftable';
  sub_1015BB70(v5);
  *(float *)&v9[2] = 1.0;
  v14 = -1;
  *(float *)&v9[7] = a3;
  v9[8] = a4;
  v9[1] = a2;
  v6 = this[2];
  v11 = 1;
  v7 = *(int (__thiscall **)(_DWORD *))(v6 + 36);
  v15[0] = &CPASAttenuationFilter::`vftable';
  v9[0] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 100;
  v9[6] = 0;
  v10 = 1;
  v12 = -1;
  memset(v13, 0, sizeof(v13));
  v8 = v7(this + 2);
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_10121100(&off_103E56F0, (int)v15, v8, (int)v9);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_1011A810(v13);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
