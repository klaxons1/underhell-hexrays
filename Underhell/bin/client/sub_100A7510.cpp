void __cdecl sub_100A7510(_DWORD *a1, int a2, float a3)
{
  const char *v3; // [esp-20h] [ebp-98h]
  int v4; // [esp-10h] [ebp-88h]
  int v5; // [esp-Ch] [ebp-84h]
  int v6; // [esp-8h] [ebp-80h]
  _DWORD v7[9]; // [esp+8h] [ebp-70h] BYREF
  __int16 v8; // [esp+2Ch] [ebp-4Ch]
  char v9; // [esp+2Eh] [ebp-4Ah]
  int v10; // [esp+30h] [ebp-48h]
  _DWORD v11[5]; // [esp+34h] [ebp-44h] BYREF
  __int16 v12; // [esp+48h] [ebp-30h]
  _BYTE v13[32]; // [esp+4Ch] [ebp-2Ch] BYREF
  int v14; // [esp+6Ch] [ebp-Ch] BYREF
  int v15; // [esp+70h] [ebp-8h]
  int v16; // [esp+74h] [ebp-4h]

  if ( *(_DWORD *)(dword_1042E1AC + 48) )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "FX_GunshotSlimeSplash", 0, "Particle/Effect_Rendering", 0, 4);
    sub_101EE190(a2, &v14);
    if ( a3 >= 2.0 )
    {
      v4 = v14;
      v5 = v15;
      v6 = v16;
      if ( a3 >= 4.0 )
        v3 = "slime_splash_03";
      else
        v3 = "slime_splash_02";
    }
    else
    {
      v4 = v14;
      v5 = v15;
      v6 = v16;
      v3 = "slime_splash_01";
    }
    sub_100E92B0(v3, *a1, a1[1], a1[2], v4, v5, v6, 0);
    sub_1015BB00(v13);
    *(float *)&v7[7] = 0.0;
    *(float *)&v7[2] = 1.0;
    v7[4] = 0;
    v7[5] = 100;
    v7[8] = 0;
    v8 = 1;
    v9 = 0;
    v10 = -1;
    memset(v11, 0, sizeof(v11));
    v12 = -1;
    v7[0] = 2;
    v7[1] = "Physics.WaterSplash";
    v7[3] = 75;
    v7[6] = a1;
    sub_10121280(v13, 0, v7);
    sub_1011A810(v11);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
