int __thiscall sub_10120C40(void *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  float *v7; // eax
  double v8; // st7
  _DWORD *v9; // esi
  unsigned int v10; // eax
  _DWORD *v11; // eax
  _BYTE v12[32]; // [esp+18h] [ebp-24h] BYREF
  void *v13; // [esp+38h] [ebp-4h]
  char v14; // [esp+4Ch] [ebp+10h]
  float v15; // [esp+50h] [ebp+14h]

  result = *((_DWORD *)off_103DC81C + 5);
  v13 = this;
  if ( result <= 1 && (result != 1 || *(_DWORD *)(*(_DWORD *)(dword_10437840 + 28) + 48)) && *(_BYTE *)(a5 + 36) )
  {
    sub_1015B880(v12);
    sub_1015B900(a2);
    sub_10038830((int)v12);
    if ( sub_1021F0F0(v12) > 0 )
    {
      v7 = *(float **)(a5 + 32);
      if ( v7 )
        v8 = *v7;
      else
        v8 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)dword_10413194 + 12))(dword_10413194, a4 + 32);
      v14 = 0;
      v9 = (_DWORD *)sub_10036480(a3);
      if ( v9 )
      {
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 504))(v9) )
        {
          v10 = v9[281];
          if ( v10 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v9[281] & 0xFFF) + 2) != v10 >> 12 )
            v11 = 0;
          else
            v11 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v9[281] & 0xFFF) + 1);
          v9 = v11;
          if ( !v11 )
            goto LABEL_19;
        }
        v14 = 1;
      }
LABEL_19:
      v15 = v8;
      sub_10120B20(a2, a3, v14, *(char **)(a5 + 4), a5 + 44, v15, *(unsigned __int8 *)(a5 + 37));
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
    }
    else
    {
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
    }
  }
  return result;
}
