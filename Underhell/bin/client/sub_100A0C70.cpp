int __thiscall sub_100A0C70(_BYTE *this)
{
  int result; // eax
  int v3[8]; // [esp+Ch] [ebp-20h] BYREF

  if ( (this[32] & 4) == 0 )
  {
    sub_1015BB00(v3);
    sub_101213E0((int)v3, 0, (int)"BaseExplosionEffect.Sound", (int)(this + 4), 0.0, 0);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
  }
  return result;
}
