int __cdecl sub_10175E70(int *a1)
{
  int v1; // edx
  int v2; // eax
  int v4[8]; // [esp+8h] [ebp-2Ch] BYREF
  int v5[3]; // [esp+28h] [ebp-Ch] BYREF

  v1 = a1[1];
  v2 = a1[2];
  v5[0] = *a1;
  v5[1] = v1;
  v5[2] = v2;
  sub_1015BB00(v4);
  sub_101213E0((int)v4, 0, (int)"FX_RicochetSound.Ricochet", (int)v5, 0.0, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
