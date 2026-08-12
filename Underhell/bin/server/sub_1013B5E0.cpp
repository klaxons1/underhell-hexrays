void __thiscall sub_1013B5E0(int this)
{
  bool v2; // zf
  int (__thiscall *v3)(int); // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // [esp+24h] [ebp-44h]
  float v8; // [esp+28h] [ebp-40h]
  _DWORD v9[8]; // [esp+38h] [ebp-30h] BYREF
  _DWORD v10[3]; // [esp+58h] [ebp-10h] BYREF
  int v11; // [esp+64h] [ebp-4h]

  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         *(float *)(this + 800))
     + *(float *)(dword_106B31C8 + 12)
     + 0.1;
  sub_100EC4A0((int *)this, v8, 0);
  v2 = (*(_DWORD *)(this + 248) & 0x200) == 0;
  *(float *)v10 = flt_106F1CA8;
  *(float *)&v10[1] = flt_106F1CAC;
  *(float *)&v10[2] = flt_106F1CB0;
  if ( !v2 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10422220(this + 704, v10);
  }
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)this + 576);
  v4 = *(_DWORD *)(this + 812);
  v5 = *(_DWORD *)(this + 248);
  v11 = *(_DWORD *)(this + 808);
  v6 = v3(this);
  ((void (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD *))(*off_1061B7A0)[3])(
    off_1061B7A0,
    v6,
    v11,
    v4,
    v10);
  if ( (v5 & 0x100) == 0 )
    sub_1023C380((int)"DoSpark", 0.0, 0);
  HIDWORD(v7) = this;
  LODWORD(v7) = this;
  sub_1010DD80((_DWORD *)(this + 816), v7, 0.0);
  if ( *(char *)(this + 248) < 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10219BB0(v9);
    v9[0] = &CPVSFilter::`vftable';
    sub_1021A300(this + 580);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*off_1065C5EC)[21])(
      v9,
      0.0,
      this + 580,
      *(_DWORD *)(this + 804),
      0.2,
      1.5,
      25);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
  }
}
