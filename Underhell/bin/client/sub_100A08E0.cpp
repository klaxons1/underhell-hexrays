int __thiscall sub_100A08E0(int this)
{
  int result; // eax
  int v3; // [esp-4h] [ebp-30h]
  float v4; // [esp+0h] [ebp-2Ch]
  int v5[8]; // [esp+Ch] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 32) & 4) == 0 )
  {
    sub_1015BB00(v5);
    sub_101213E0((int)v5, 0, (int)"Physics.WaterSplash", this + 52, 0.0, 0);
    v4 = 0.0;
    v3 = this + 4;
    if ( *(float *)(this + 64) <= 128.0 )
      sub_101213E0((int)v5, 0, (int)"BaseExplosionEffect.Sound", v3, v4, 0);
    else
      sub_101213E0((int)v5, 0, (int)"WaterExplosionEffect.Sound", v3, v4, 0);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
  }
  return result;
}
