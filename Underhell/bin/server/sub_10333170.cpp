int __thiscall sub_10333170(void *this, float *a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // [esp+14h] [ebp-ACh]
  _BYTE v9[12]; // [esp+28h] [ebp-98h] BYREF
  _BYTE v10[64]; // [esp+34h] [ebp-8Ch] BYREF
  int v11; // [esp+74h] [ebp-4Ch]
  int v12; // [esp+78h] [ebp-48h]
  _DWORD v13[8]; // [esp+7Ch] [ebp-44h] BYREF
  float v14[3]; // [esp+9Ch] [ebp-24h] BYREF
  float v15[3]; // [esp+A8h] [ebp-18h] BYREF
  float v16; // [esp+B4h] [ebp-Ch]
  float v17; // [esp+B8h] [ebp-8h]
  float v18; // [esp+BCh] [ebp-4h]
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  result = (**(int (__thiscall ***)(void *, int))off_106169EC)(off_106169EC, a3);
  v5 = result;
  if ( result >= 0 )
  {
    v16 = a2[3] - *a2;
    v17 = a2[4] - a2[1];
    v18 = a2[5] - a2[2];
    off_10689714();
    v15[0] = a2[3] - v16;
    v15[1] = a2[4] - v17;
    v15[2] = a2[5] - v18;
    v14[0] = v16 * 56755.84 + a2[3];
    v14[1] = v17 * 56755.84 + a2[4];
    v14[2] = v18 * 56755.84 + a2[5];
    sub_1002A5F0((int)&savedregs, (int)a2, v15, v14, 1174421507, (int)this, 0, (int)v9);
    sub_10219BB0(v13);
    v13[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v13);
    v6 = (int)*off_1065C5EC;
    v8 = v12;
    v7 = sub_1025FD10(v11);
    (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, _BYTE *, _BYTE *, int, int, int))(v6 + 68))(
      off_1065C5EC,
      v13,
      0.0,
      v10,
      v9,
      v7,
      v8,
      v5);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
  }
  return result;
}
