void __thiscall sub_10169880(int this)
{
  int v2; // esi
  int v3; // eax
  float v4; // [esp+1Ch] [ebp-44h]
  float v5; // [esp+20h] [ebp-40h]
  float v6; // [esp+20h] [ebp-40h]
  _DWORD v7[8]; // [esp+28h] [ebp-38h] BYREF
  float v8[3]; // [esp+48h] [ebp-18h] BYREF
  float v9[3]; // [esp+54h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.2;
  sub_100EC4A0((int *)this, v4, 0);
  if ( 0.0 == *(float *)(this + 3624) )
    goto LABEL_5;
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3624) )
  {
    sub_1025FAC0(this);
    return;
  }
  v5 = *(float *)(this + 3624) - *(float *)(this + 3620);
  if ( *(float *)(this + 3624) - *(float *)(dword_106B31C8 + 12) >= ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                                                      dword_106B31E4,
                                                                      0.0,
                                                                      LODWORD(v5)) )
  {
LABEL_5:
    v9[0] = 1.0;
    v9[1] = 1.0;
    v9[2] = 1.0;
    sub_10111860(this + 320, &flt_106F1CA8, v9, v8);
    sub_10219BB0(v7);
    v7[0] = &CPVSFilter::`vftable';
    sub_1021A300(v8);
    v2 = (int)*off_1065C5EC;
    v3 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3);
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           4.9000001,
           v3 + 8)
       + 5.0;
    (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, _DWORD, _DWORD))(v2 + 120))(
      off_1065C5EC,
      v7,
      0.0,
      v8,
      word_10696BA0,
      LODWORD(v6));
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
  }
}
