int __thiscall sub_1018A0E0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  unsigned __int8 (__thiscall *v9)(_DWORD *); // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  float *v14; // ebx
  float *v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  _BYTE v19[64]; // [esp+4h] [ebp-78h] BYREF
  _BYTE v20[32]; // [esp+44h] [ebp-38h] BYREF
  float v21[3]; // [esp+64h] [ebp-18h] BYREF
  Concurrency::details::VirtualProcessorRoot *v22; // [esp+70h] [ebp-Ch]
  int v23; // [esp+74h] [ebp-8h]
  int v24; // [esp+78h] [ebp-4h]
  int v25; // [esp+84h] [ebp+8h]

  if ( !a2 || a3 < 0 || a3 >= this[12] )
    return 0;
  v6 = a4;
  if ( a4 < 0 )
    return 0;
  v7 = (_DWORD *)(this[9] + 20 * a3);
  if ( a4 >= v7[3] )
    return 0;
  v8 = *v7 + 72 * a4;
  v9 = *(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 1656);
  v24 = v8;
  if ( !v9(a2) )
    return 0;
  v22 = (Concurrency::details::VirtualProcessorRoot *)(*(int (__thiscall **)(_DWORD *))(*a2 + 1672))(a2);
  Concurrency::details::VirtualProcessorRoot::MarkRootRemoved(v22);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD, _BYTE *, int, _DWORD))(*a2 + 1652))(
         a2,
         *(_DWORD *)v8,
         0,
         v19,
         64,
         0) )
  {
    if ( *(_BYTE *)(v8 + 4) )
    {
      sub_10219BB0(v20);
      if ( *(_BYTE *)(v8 + 5) )
      {
        v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 576))(a2);
        sub_1021A370(v10);
        v11 = sub_1042A300(v20) - 1;
        v25 = v11;
        if ( v11 >= 0 )
        {
          do
          {
            v23 = sub_10219B80(v11);
            v12 = (_DWORD *)sub_1025FB50(v23);
            v13 = v12;
            if ( v12 )
            {
              if ( v12 != a2 )
              {
                v14 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 576))(a2);
                v15 = (float *)(*(int (__thiscall **)(_DWORD *))(*v13 + 576))(v13);
                v21[0] = *v15 - *v14;
                v21[1] = v15[1] - v14[1];
                v16 = v15[2] - v14[2];
                v21[2] = v16;
                sub_10018D40(v21);
                if ( v16 > 1900.0 )
                  sub_10219DF0(v23);
              }
            }
            v11 = --v25;
          }
          while ( v25 >= 0 );
          v6 = a4;
        }
      }
      else
      {
        sub_1021A200(v20);
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 1660))(a2) )
      {
        v17 = sub_100D87F0(a2);
        sub_10219E10(v17);
      }
      sub_10154B40((int)v20, "VoiceSubtitle");
      v18 = sub_1001F3C0(a2);
      sub_10154BB0(v18);
      sub_10154BB0(a3);
      sub_10154BB0(v6);
      sub_10154B90();
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
    }
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 1664))(a2, v19);
    sub_10167D40(v22);
    return v24;
  }
  else
  {
    v24 = 0;
    sub_10167D40(v22);
    return v24;
  }
}
