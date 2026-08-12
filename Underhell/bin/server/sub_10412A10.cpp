int __thiscall sub_10412A10(_DWORD *this)
{
  int v2; // esi
  int v3; // ebx
  float v4; // edx
  float v5; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st7
  float v10; // [esp+64h] [ebp-44h]
  _DWORD v11[8]; // [esp+78h] [ebp-30h] BYREF
  float v12; // [esp+98h] [ebp-10h] BYREF
  float v13; // [esp+9Ch] [ebp-Ch]
  float v14; // [esp+A0h] [ebp-8h]
  int v15; // [esp+A4h] [ebp-4h]

  v2 = (int)(this + 145);
  v3 = 4;
  do
  {
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v4 = *(float *)(v2 + 4);
    v5 = *(float *)(v2 + 8);
    v12 = *(float *)v2;
    v14 = v5;
    v13 = v4;
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -12.0,
           12.0);
    v12 = v6 + v12;
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -12.0,
           12.0);
    v13 = v7 + v13;
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -12.0,
           12.0);
    v14 = v8 + v14;
    ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
      off_1061B7A0,
      &v12,
      1,
      1,
      0);
    --v3;
  }
  while ( v3 );
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 10, 15);
  v10 = (float)v15;
  sub_1025F3A0(v2, v10, 10.0);
  sub_10219BB0(v11);
  v11[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v11);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  ((void (__stdcall *)(_DWORD *, _DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[18])(
    v11,
    0.0,
    v2,
    255,
    180,
    100,
    0,
    100.0,
    0.1,
    0.0);
  sub_100C1600((int)this, 1, 0);
  sub_100C1600((int)this, 2, 0);
  sub_100C1600((int)this, 3, 0);
  sub_100C1600((int)this, 4, 0);
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  sub_100EC3F0(this, 0, 0.0, 0);
  sub_101674F0((const char *)this, this, 4, 300.0, 500.0, (int)"models/gibs/missile_defense_gibs.mdl", 25.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
