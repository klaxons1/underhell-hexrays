int __stdcall sub_100E1AE0(int a1, int a2, int a3, float a4, int a5, int a6, int a7)
{
  int result; // eax
  _DWORD v8[9]; // [esp+8h] [ebp-64h] BYREF
  __int16 v9; // [esp+2Ch] [ebp-40h]
  char v10; // [esp+2Eh] [ebp-3Eh]
  int v11; // [esp+30h] [ebp-3Ch]
  _DWORD v12[5]; // [esp+34h] [ebp-38h] BYREF
  __int16 v13; // [esp+48h] [ebp-24h]
  _BYTE v14[32]; // [esp+4Ch] [ebp-20h] BYREF

  if ( a3 )
  {
    sub_10120780(a3);
    sub_1015BB00(v14);
    sub_1015BAA0(v14);
    *(float *)&v8[7] = 0.0;
    *(float *)&v8[2] = a4;
    v13 = -1;
    v8[3] = a5;
    v8[5] = a7;
    v8[0] = a2;
    v8[4] = 0;
    v8[8] = 0;
    v9 = 1;
    v10 = 0;
    v11 = -1;
    memset(v12, 0, sizeof(v12));
    v8[1] = a3;
    v8[6] = a1;
    sub_10121280(v14, -1, v8);
    sub_1011A810(v12);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
  }
  return result;
}
