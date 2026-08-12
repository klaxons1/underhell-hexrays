void __thiscall sub_1023C380(_DWORD *this, int a2, float a3, int a4)
{
  int v5; // esi
  int v6; // esi
  _DWORD v7[9]; // [esp+Ch] [ebp-64h] BYREF
  __int16 v8; // [esp+30h] [ebp-40h]
  char v9; // [esp+32h] [ebp-3Eh]
  int v10; // [esp+34h] [ebp-3Ch]
  int v11[5]; // [esp+38h] [ebp-38h] BYREF
  __int16 v12; // [esp+4Ch] [ebp-24h]
  _DWORD v13[8]; // [esp+50h] [ebp-20h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_10165630(v13, (int)this, a2);
  *(float *)&v7[2] = 1.0;
  v5 = this[6];
  *(float *)&v7[7] = a3;
  v12 = -1;
  v7[8] = a4;
  v7[0] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 100;
  v7[6] = 0;
  v8 = 1;
  v10 = -1;
  memset(v11, 0, sizeof(v11));
  v7[1] = a2;
  v9 = 1;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_1023BC60(&off_1064C3E8, v13, v6, (int)v7);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_102375F0(v11);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
