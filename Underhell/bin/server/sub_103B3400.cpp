int __thiscall sub_103B3400(_DWORD *this, int a2, int a3)
{
  float *v4; // esi
  int v5; // ecx
  _BYTE v7[84]; // [esp+54h] [ebp-98h] BYREF
  _DWORD v8[8]; // [esp+A8h] [ebp-44h] BYREF
  float v9[3]; // [esp+C8h] [ebp-24h] BYREF
  float v10; // [esp+D4h] [ebp-18h] BYREF
  float v11; // [esp+D8h] [ebp-14h]
  float v12; // [esp+DCh] [ebp-10h]
  float v13; // [esp+E0h] [ebp-Ch]
  float v14; // [esp+E4h] [ebp-8h]
  float v15; // [esp+E8h] [ebp-4h]
  int savedregs; // [esp+ECh] [ebp+0h] BYREF

  sub_101E3630(this, a2, a3);
  sub_10219BB0(v8);
  v8[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v8);
  v4 = (float *)(a2 + 12);
  ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, int))(*off_1065C5EC)[8])(
    v8,
    0.0,
    a2 + 12,
    0.0,
    64.0,
    dword_10679D88,
    0,
    0,
    0,
    0.2,
    10.0,
    0,
    0.0,
    255,
    255,
    255,
    50,
    0,
    8);
  ((void (__thiscall *)(int (__stdcall ***)(char), int, int, _DWORD))(*off_1061B7A0)[7])(
    off_1061B7A0,
    a2 + 12,
    a2 + 24,
    0);
  v5 = *(_DWORD *)(a2 + 76);
  if ( v5 )
  {
    if ( !sub_100D7680(v5) )
    {
      v13 = *v4 - *(float *)a2;
      v14 = *(float *)(a2 + 16) - *(float *)(a2 + 4);
      v15 = *(float *)(a2 + 20) - *(float *)(a2 + 8);
      off_10689714();
      v10 = v13 * 12.0 + *v4;
      v11 = v14 * 12.0 + *(float *)(a2 + 16);
      v12 = 12.0 * v15 + *(float *)(a2 + 20);
      if ( !(**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, &v10, 0) )
      {
        v9[0] = v10 - v13 * 24.0;
        v9[1] = v11 - v14 * 24.0;
        v9[2] = v12 - 24.0 * v15;
        sub_1002A5F0((int)&savedregs, (int)v4, &v10, v9, 1174421507, 0, 0, (int)v7);
        sub_101E3630(this, (int)v7, a3);
      }
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
}
