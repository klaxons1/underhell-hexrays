void __thiscall sub_100670F0(int this, int a2, float a3, float a4, float a5)
{
  int *v6; // ebx
  int v7; // esi
  Concurrency::details::SchedulerProxy *v8; // esi
  int v9; // eax
  double v10; // st7
  double v11; // st7
  char String[256]; // [esp+18h] [ebp-1A4h] BYREF
  char Source[64]; // [esp+118h] [ebp-A4h] BYREF
  float v14[9]; // [esp+158h] [ebp-64h] BYREF
  char v15; // [esp+17Ch] [ebp-40h]
  _BYTE v16[24]; // [esp+184h] [ebp-38h] BYREF
  _DWORD v17[8]; // [esp+19Ch] [ebp-20h] BYREF

  if ( *(_BYTE *)(this + 1212) )
  {
    v6 = (int *)LODWORD(a3);
    if ( a3 != 0.0 )
    {
      v7 = sub_100422D0();
      sub_1015B880(v17);
      v17[0] = &CSingleUserRecipientFilter::`vftable';
      sub_1015B9D0(v7);
      v8 = (Concurrency::details::SchedulerProxy *)LODWORD(a4);
      a3 = *((float *)off_103DC81C + 3) - (*(float *)(this + 1200) - sub_10103A90(LODWORD(a4)));
      sub_10013E00(v14);
      v14[2] = 1.0;
      v14[3] = a5;
      v14[7] = a3;
      LODWORD(v14[0]) = 2;
      v15 = 0;
      LODWORD(v14[1]) = sub_101E1B90(v8);
      v9 = (*(int (__thiscall **)(int *))(v6[2] + 36))(v6 + 2);
      sub_10121280(v17, v9, v14);
      sub_100407E0(v6, a2, v8, 0, *(_BYTE *)(this + 1212));
      if ( !sub_101E21C0(v8) && (unsigned __int8)sub_101E2640(Source, 0x40u) )
      {
        sub_1022FAE0(&a3);
        sub_102282F0(String, Source, 0x100u);
        _strlwr(String);
        sub_1022FB00(&a3, String, strlen(String));
        sub_1022FAF0(&a3);
        a4 = sub_101E2250(v8);
        a5 = ((double (__thiscall *)(Concurrency::details::SchedulerProxy *))**(_DWORD **)v8)(v8);
        v10 = sub_10103A90(v8);
        v11 = a4 - v10;
        if ( a5 > v11 )
          v11 = a5;
        a4 = v11;
        if ( sub_100B4090("CHudCloseCaption") )
          sub_100C5840(String, a4, 0, 0);
      }
      sub_1011A810(v16);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
    }
  }
}
