void __cdecl sub_101215A0(int *a1)
{
  char *v1; // esi
  const char *v2; // eax
  double v3; // st7
  int (__thiscall *v4)(char *); // eax
  int v5; // esi
  const char *v6; // edi
  const char *v7; // edi
  float v8[11]; // [esp+10h] [ebp-7Ch] BYREF
  int v9[6]; // [esp+3Ch] [ebp-50h] BYREF
  _DWORD v10[8]; // [esp+54h] [ebp-38h] BYREF
  float v11[3]; // [esp+74h] [ebp-18h] BYREF
  float v12; // [esp+80h] [ebp-Ch] BYREF
  float v13; // [esp+84h] [ebp-8h]
  float v14; // [esp+88h] [ebp-4h]

  v1 = (char *)sub_100422D0();
  if ( v1 )
  {
    if ( *a1 <= 2 )
    {
      if ( *a1 > 1 )
        v7 = (const char *)a1[259];
      else
        v7 = Locale;
      sub_101212D0(v1, (int)v7, 0.0, 0);
    }
    else
    {
      (*(void (__thiscall **)(char *, float *))(*(_DWORD *)v1 + 532))(v1, &v12);
      sub_100392A0(v1, (int)v11, 0, 0);
      v2 = Locale;
      if ( *a1 > 2 )
        v2 = (const char *)a1[260];
      v3 = atof(v2);
      v4 = *(int (__thiscall **)(char *))(*(_DWORD *)v1 + 36);
      v12 = v11[0] * v3 + v12;
      v13 = v11[1] * v3 + v13;
      v14 = v3 * v11[2] + v14;
      v5 = v4(v1);
      sub_1015B880(v10);
      v10[0] = &CPASFilter::`vftable';
      sub_1015BB70(v5);
      v10[0] = &CPASAttenuationFilter::`vftable';
      sub_10013E00(v8);
      if ( *a1 > 1 )
        v6 = (const char *)a1[259];
      else
        v6 = Locale;
      v8[2] = 0.0;
      LODWORD(v8[6]) = &v12;
      LODWORD(v8[1]) = v6;
      v8[5] = 0.0;
      sub_10121100(&off_103E56F0, (int)v10, 0, (int)v8);
      sub_1011A810(v9);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
    }
  }
  else
  {
    Msg("Can't play until a game is started.\n");
  }
}
