void __thiscall sub_1023C480(_DWORD *this, int a2, int a3, float a4, int a5)
{
  int v6; // esi
  int v7; // esi
  _DWORD v8[9]; // [esp+Ch] [ebp-64h] BYREF
  __int16 v9; // [esp+30h] [ebp-40h]
  char v10; // [esp+32h] [ebp-3Eh]
  int v11; // [esp+34h] [ebp-3Ch]
  int v12[5]; // [esp+38h] [ebp-38h] BYREF
  __int16 v13; // [esp+4Ch] [ebp-24h]
  _DWORD v14[8]; // [esp+50h] [ebp-20h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_1023A850(v14, (int)this, a2, a3);
  *(float *)&v8[2] = 1.0;
  v6 = this[6];
  *(float *)&v8[7] = a4;
  v13 = -1;
  v8[8] = a5;
  v10 = 1;
  v8[0] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 100;
  v8[6] = 0;
  v9 = 1;
  v11 = -1;
  memset(v12, 0, sizeof(v12));
  v8[1] = a2;
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_1023B9A0(&off_1064C3E8, a3, v7, v14, v7, (int)v8, a3);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_102375F0(v12);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
