void __thiscall sub_101E41C0(int this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  int v5; // esi
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  char v10; // cl
  int v11; // eax
  int v12; // esi
  float v13; // [esp+0h] [ebp-2Ch]
  _DWORD v14[8]; // [esp+Ch] [ebp-20h] BYREF
  float v15; // [esp+34h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 40);
  v15 = *(float *)(a2 + 52);
  if ( v2 == -1 )
    goto LABEL_10;
  v4 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  if ( off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    goto LABEL_10;
  v5 = *v4;
  if ( !*v4 )
    goto LABEL_10;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(*v4);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(float *)(this + 580) - *(float *)(v5 + 580);
  v7 = v6 * v6;
  v8 = *(float *)(this + 584) - *(float *)(v5 + 584);
  v9 = *(float *)(this + 588) - *(float *)(v5 + 588);
  v13 = v9 * v9 + v8 * v8 + v7;
  if ( off_10689708(v13) < 240.0 )
    v10 = 1;
  else
LABEL_10:
    v10 = 0;
  if ( v15 >= 30.0 )
  {
    v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 35, 37);
  }
  else
  {
    if ( !v10 )
      return;
    v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 32, 34);
  }
  v12 = v11;
  sub_10219BB0(v14);
  v14[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(this);
  (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)dword_106B31E8 + 40))(dword_106B31E8, v14, v12, 0);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
}
