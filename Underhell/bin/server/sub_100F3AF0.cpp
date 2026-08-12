int __thiscall sub_100F3AF0(int this)
{
  float v2; // edx
  float v3; // eax
  float v5; // [esp+20h] [ebp-50h]
  _DWORD v6[8]; // [esp+2Ch] [ebp-44h] BYREF
  float v7[3]; // [esp+4Ch] [ebp-24h] BYREF
  float v8[3]; // [esp+58h] [ebp-18h] BYREF
  float v9; // [esp+64h] [ebp-Ch] BYREF
  float v10; // [esp+68h] [ebp-8h]
  float v11; // [esp+6Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584);
  v3 = *(float *)(this + 588);
  v9 = *(float *)(this + 580);
  v10 = v2;
  v11 = v3;
  if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, &v9, 0) & 0x4030) != 0 )
  {
    v8[0] = v9 + 64.0;
    v8[1] = v10 + 64.0;
    v8[2] = v11 + 64.0;
    v7[0] = v9 - 64.0;
    v7[1] = v10 - 64.0;
    v7[2] = v11 - 64.0;
    sub_102605C0(v7, v8, 100);
  }
  else
  {
    sub_10219BB0(v6);
    v6[0] = &CPVSFilter::`vftable';
    sub_1021A300(&v9);
    v5 = *(float *)(this + 2112) * 0.03;
    ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, int))(*off_1065C5EC)[30])(
      v6,
      0.0,
      &v9,
      word_10696BA0,
      LODWORD(v5),
      24);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
  }
  sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
