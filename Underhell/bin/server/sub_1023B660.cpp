int __thiscall sub_1023B660(void *this, _BYTE *a2, int a3, int a4, int a5)
{
  int result; // eax
  float *v7; // eax
  double v8; // st7
  _DWORD *v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  _DWORD v12[9]; // [esp+18h] [ebp-24h] BYREF
  char v13; // [esp+4Ch] [ebp+10h]
  float v14; // [esp+50h] [ebp+14h]

  result = *(_DWORD *)(dword_106B31C8 + 20);
  v12[8] = this;
  if ( result <= 1 && (result != 1 || *(_DWORD *)(*(_DWORD *)(dword_106C4E90 + 28) + 48)) && *(_BYTE *)(a5 + 36) )
  {
    sub_10219BB0(v12);
    sub_10219C30((int)v12, a2);
    sub_100D76A0((int)v12);
    if ( sub_1042A300(v12) > 0 )
    {
      v7 = *(float **)(a5 + 32);
      if ( v7 )
        v8 = *v7;
      else
        v8 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(dword_106B31E8, a4 + 32);
      v13 = 0;
      v9 = (_DWORD *)sub_100D60A0(a3);
      if ( v9 )
      {
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 320))(v9) )
        {
          v10 = v9[103];
          if ( v10 == -1 || off_1061BE18[4 * (v9[103] & 0xFFF) + 2] != v10 >> 12 )
            v11 = 0;
          else
            v11 = off_1061BE18[4 * (v9[103] & 0xFFF) + 1];
          v9 = (_DWORD *)v11;
          if ( !v11 )
            goto LABEL_19;
        }
        v13 = 1;
      }
LABEL_19:
      v14 = v8;
      sub_1023B400((int)v9, a2, a3, v13, *(char **)(a5 + 4), a5 + 44, v14, *(_BYTE *)(a5 + 37));
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
    }
    else
    {
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
    }
  }
  return result;
}
