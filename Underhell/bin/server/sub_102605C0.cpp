int __cdecl sub_102605C0(float *a1, float *a2, int a3)
{
  double v4; // st6
  double v5; // st5
  float v7; // [esp+18h] [ebp-38h]
  _DWORD v8[8]; // [esp+24h] [ebp-2Ch] BYREF
  int v9[2]; // [esp+44h] [ebp-Ch] BYREF
  float v10; // [esp+4Ch] [ebp-4h]
  float v11; // [esp+58h] [ebp+8h]

  v4 = a1[1] + a2[1];
  v5 = a2[2] + a1[2];
  *(float *)v9 = (*a1 + *a2) * 0.5;
  *(float *)&v9[1] = v4 * 0.5;
  v10 = 0.5 * v5;
  v7 = 0.5 * v5 + 1024.0;
  v11 = sub_102604A0(v9, v10, v7) - a1[2];
  sub_10219BB0(v8);
  v8[0] = &CPASFilter::`vftable';
  sub_1021A370(v8, (int)v9);
  ((void (__stdcall *)(_DWORD *, _DWORD, float *, float *, _DWORD, _DWORD, int, _DWORD))(*off_1065C5EC)[15])(
    v8,
    0.0,
    a1,
    a2,
    LODWORD(v11),
    word_10696B98,
    a3,
    8.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
