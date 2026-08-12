char *__thiscall sub_10248EA0(int this)
{
  char *result; // eax
  _DWORD *v3; // ebx
  char *v4; // eax
  char *v5; // esi
  char *v6; // ebx
  int v7; // eax
  int v8; // eax
  float v9; // [esp+18h] [ebp-38h]
  _DWORD v10[8]; // [esp+2Ch] [ebp-24h] BYREF
  const char *v11; // [esp+4Ch] [ebp-4h]

  result = sub_100E38F0((float *)this);
  v3 = 0;
  if ( *(_DWORD *)(this + 212) )
  {
    while ( 1 )
    {
      v4 = *(char **)(this + 212);
      if ( !v4 )
        v4 = (char *)String;
      v3 = sub_1012BF20(&dword_1069E3E0, (int)v3, v4, 0, 0, 0, 0);
      result = (char *)__RTDynamicCast(
                         (int)v3,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CFuncTrackTrain `RTTI Type Descriptor',
                         0);
      v5 = result;
      if ( result )
        break;
      if ( !v3 )
        goto LABEL_16;
    }
    *(_DWORD *)(this + 800) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
    v9 = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_100EC4A0((int *)this, v9, 0);
    result = (char *)sub_1023DBA0();
    v6 = result;
    if ( *(_DWORD *)(this + 828) )
    {
      sub_100D78A0(v10, this, 0.40000001);
      v11 = *(const char **)(this + 828);
      if ( !v11 )
        v11 = String;
      v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)v5 + 6));
      *(_DWORD *)(this + 812) = (*(int (__thiscall **)(char *, _DWORD *, int, int, const char *, _DWORD))(*(_DWORD *)v6 + 32))(
                                  v6,
                                  v10,
                                  v7,
                                  6,
                                  v11,
                                  0.40000001);
      result = (char *)std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
    }
    if ( *(_DWORD *)(this + 824) )
    {
      sub_100D78A0(v10, this, 0.80000001);
      v11 = *(const char **)(this + 824);
      if ( !v11 )
        v11 = String;
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)v5 + 6));
      *(_DWORD *)(this + 816) = (*(int (__thiscall **)(char *, _DWORD *, int, int, const char *, _DWORD))(*(_DWORD *)v6 + 32))(
                                  v6,
                                  v10,
                                  v8,
                                  6,
                                  v11,
                                  0.80000001);
      return (char *)std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
    }
  }
  else
  {
LABEL_16:
    *(_DWORD *)(this + 800) = -1;
  }
  return result;
}
