int __cdecl sub_1015F850(float *a1)
{
  float *v1; // eax
  float *v2; // esi
  int v4[8]; // [esp+10h] [ebp-20h] BYREF

  sub_1015BB00(v4);
  sub_101213E0((int)v4, 0, (int)"Missile.ShotDown", (int)a1, 0.0, 0);
  v1 = (float *)sub_100DDA40(216);
  v2 = v1;
  if ( v1 )
  {
    sub_100AFB90(v1);
    *(_DWORD *)v2 = &CExplosionOverlay::`vftable';
    v2[41] = 0.0;
    v2[1] = *a1;
    v2[2] = a1[1];
    v2[3] = a1[2];
    *((_DWORD *)v2 + 34) = 1;
    v2[42] = 1.0;
    v2[43] = 0.89999998;
    v2[44] = 0.69999999;
    v2[13] = 0.0099999998;
    v2[14] = 0.0049999999;
    sub_100B0E30(v2);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
