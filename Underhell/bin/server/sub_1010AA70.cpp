int __thiscall sub_1010AA70(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+10h] [ebp-64h] BYREF
  const char *v10; // [esp+14h] [ebp-60h]
  float v11; // [esp+18h] [ebp-5Ch]
  int v12; // [esp+1Ch] [ebp-58h]
  _BYTE v13[24]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD v14[8]; // [esp+54h] [ebp-20h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    *(_DWORD *)(this + 880) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    result = sub_10108770(this);
    v4 = result;
    if ( result )
    {
      if ( !(unsigned __int8)sub_10260340(*(char **)(this + 912), a2) || *(_BYTE *)(this + 976) )
      {
        return sub_1011FE20(this, this + 932, 1, 1);
      }
      else
      {
        *(_DWORD *)(this + 196) = 0;
        if ( v4 == 2 )
        {
          if ( *(_DWORD *)(this + 992) )
          {
            sub_100D78A0(v14, this, 0.80000001);
            sub_100F8510((float *)&v9);
            v5 = *(const char **)(this + 992);
            v9 = 2;
            v10 = v5;
            if ( !v5 )
              v10 = String;
            v11 = 1.0;
            v12 = 75;
            v6 = sub_1001F3C0((_DWORD *)this);
            sub_1023BE40(v14, v6, &v9);
            sub_102375F0(v13);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
          }
          v7 = sub_1026A890(this + 880);
          sub_1010DD80(v7, this, 0.0);
          return sub_10108B40(this);
        }
        else
        {
          v8 = sub_1026A890(this + 880);
          sub_1010DD80(v8, this, 0.0);
          return sub_10109A40((const char **)this);
        }
      }
    }
  }
  return result;
}
