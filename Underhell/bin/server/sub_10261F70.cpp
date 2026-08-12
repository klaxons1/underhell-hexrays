void __cdecl sub_10261F70(float *a1, float *a2, int a3)
{
  float *v4; // edi
  double v5; // st7
  double v6; // st6
  double v7; // st4
  bool v8; // c3
  double v9; // st7
  int v10; // esi
  double v11; // st7
  float v12; // [esp+18h] [ebp-3Ch]
  float v13; // [esp+18h] [ebp-3Ch]
  float v14; // [esp+18h] [ebp-3Ch]
  _DWORD v15[8]; // [esp+24h] [ebp-30h] BYREF
  float v16[3]; // [esp+44h] [ebp-10h] BYREF
  float *v17; // [esp+50h] [ebp-4h]
  int savedregs; // [esp+54h] [ebp+0h] BYREF
  int v19; // [esp+5Ch] [ebp+8h]
  int v20; // [esp+60h] [ebp+Ch]

  v12 = a1[2] + 256.0;
  v4 = a2;
  *(float *)&v19 = sub_10261EE0((int)&savedregs, a1, a1[2], v12) - a1[2];
  v13 = a2[2] + 256.0;
  v5 = sub_10261EE0((int)&savedregs, a2, a2[2], v13) - a2[2];
  v6 = *(float *)&v19;
  if ( 0.0 != *(float *)&v19 || 0.0 != v5 )
  {
    v17 = a1;
    v7 = v6 + a1[2];
    *(float *)&v20 = v7;
    if ( 0.0 == v6 )
    {
      v9 = v5 + v4[2];
      *(float *)&v20 = v9;
    }
    else
    {
      v8 = 0.0 == v5;
      v9 = v7;
      if ( !v8 )
      {
        v10 = a3;
LABEL_6:
        sub_10219BB0(v15);
        v15[0] = &CBroadcastRecipientFilter::`vftable';
        sub_1021A200((int)v15);
        ((void (__stdcall *)(_DWORD *, _DWORD, float *, float *, int, _DWORD, int, _DWORD))(*off_1065C5EC)[16])(
          v15,
          0.0,
          v17,
          v4,
          v20,
          word_10696B98,
          v10,
          8.0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
        return;
      }
    }
    v14 = v9;
    v11 = sub_10113880((int)a1, (int)v4, 2, 1.0, v14);
    v16[0] = (*v4 - *a1) * v11 + *a1;
    v16[1] = (v4[1] - a1[1]) * v11 + a1[1];
    v16[2] = (v4[2] - a1[2]) * v11 + a1[2];
    if ( 0.0 == *(float *)&v19 )
    {
      v17 = v16;
      v10 = (int)((1.0 - v11) * (double)a3);
    }
    else
    {
      v4 = v16;
      v10 = (int)(v11 * (double)a3);
    }
    goto LABEL_6;
  }
}
