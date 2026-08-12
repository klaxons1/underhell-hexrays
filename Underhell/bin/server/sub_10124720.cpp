int __thiscall sub_10124720(int *this)
{
  _DWORD *v2; // eax
  double v3; // st7
  float v5; // [esp+18h] [ebp-44h]
  _DWORD v6[8]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD v7[3]; // [esp+4Ch] [ebp-10h] BYREF
  int v8; // [esp+58h] [ebp-4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 576))(this);
  v7[0] = *v2;
  v7[1] = v2[1];
  v7[2] = v2[2];
  sub_10219BB0(v6);
  v6[0] = &CPASFilter::`vftable';
  sub_1021A370(v7);
  ((void (__thiscall *)(int (__stdcall ***)(char), _DWORD *, _DWORD, int *, int, int, int))(*off_1065C5EC)[23])(
    off_1065C5EC,
    v6,
    0.0,
    this,
    this[202],
    this[200],
    (int)*((float *)this + 27));
  v8 = this[201];
  if ( v8 <= 19 )
    v3 = *(float *)(dword_106B31C8 + 12) + 2.5 - (double)v8 * 0.1;
  else
    v3 = *(float *)(dword_106B31C8 + 12) + 0.5;
  v5 = v3;
  sub_100EC4A0(this, v5, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
}
