int __thiscall sub_103A9930(unsigned int this)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // [esp+20h] [ebp-3Ch]
  __int64 v8; // [esp+20h] [ebp-3Ch]
  _DWORD v9[8]; // [esp+30h] [ebp-2Ch] BYREF
  _DWORD v10[3]; // [esp+50h] [ebp-Ch] BYREF

  sub_10328900((_BYTE *)this, (int)"AttackFlash");
  sub_102428B0(*(_DWORD *)(this + 3888), 1.8, 0.0);
  sub_10242820(*(_DWORD *)(this + 3888), 255, 0.0);
  sub_1005C620(
    (_BYTE *)(*(_DWORD *)(this + 3888) + 116),
    255,
    255,
    255,
    HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3888) + 116)));
  result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v3 = (_DWORD *)sub_100217F0((void *)this);
    v10[0] = *v3;
    v10[1] = v3[1];
    v10[2] = v3[2];
    sub_10219BB0(v9);
    v9[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v9);
    ((void (__stdcall *)(_DWORD *, _DWORD, _DWORD *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[18])(
      v9,
      0.0,
      v10,
      200,
      200,
      255,
      0,
      300.0,
      0.2,
      50.0);
    v4 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    {
      v5 = *(_DWORD *)(this + 2420);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v5 >> 12 )
      {
        HIDWORD(v7) = this;
        LODWORD(v7) = 0;
        sub_1010DD80((_DWORD *)(this + 3972), v7, 0.0);
        return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
      }
      else
      {
        sub_1010DD80(
          (_DWORD *)(this + 3972),
          __SPAIR64__(this, off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1]),
          0.0);
        return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
      }
    }
    else
    {
      v6 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 368))(this);
      if ( sub_100D7680(v6) )
      {
        v8 = __PAIR64__(this, sub_10022C40((_DWORD *)this));
        sub_1010DD80((_DWORD *)(this + 3996), v8, 0.0);
      }
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
    }
  }
  return result;
}
