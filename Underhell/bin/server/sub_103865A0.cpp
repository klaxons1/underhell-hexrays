int __thiscall sub_103865A0(int this, int a2)
{
  int v3; // ebx
  float v4; // edx
  float v5; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st7
  _DWORD v10[8]; // [esp+68h] [ebp-2Ch] BYREF
  float v11; // [esp+88h] [ebp-Ch] BYREF
  float v12; // [esp+8Ch] [ebp-8h]
  float v13; // [esp+90h] [ebp-4h]

  sub_100C1600(this, 2, 0);
  v3 = 3;
  do
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(float *)(this + 584);
    v5 = *(float *)(this + 588);
    v11 = *(float *)(this + 580);
    v13 = v5;
    v12 = v4;
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -12.0,
           12.0);
    v11 = v6 + v11;
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -12.0,
           12.0);
    v12 = v7 + v12;
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -12.0,
           12.0);
    v13 = v8 + v13;
    ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
      off_1061B7A0,
      &v11,
      2,
      1,
      0);
    --v3;
  }
  while ( v3 );
  sub_10219BB0(v10);
  v10[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v10);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  ((void (__stdcall *)(_DWORD *, _DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[18])(
    v10,
    0.0,
    this + 580,
    255,
    180,
    100,
    0,
    100.0,
    0.1,
    0.0);
  if ( *(int *)(this + 3916) < 0 )
    sub_10385ED0(this);
  if ( (*(_BYTE *)(a2 + 64) & 0xC1) != 0
    || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
  {
    *(_BYTE *)(this + 3893) = 1;
  }
  else
  {
    *(_BYTE *)(this + 3893) = 0;
    sub_103823F0((_DWORD *)this, 0.0);
  }
  sub_10035690(this, 0, this, a2);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
}
