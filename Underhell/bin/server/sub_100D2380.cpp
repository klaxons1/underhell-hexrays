_BYTE *__thiscall sub_100D2380(_DWORD *this, int a2, float a3)
{
  _BYTE *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp+4h] [ebp-E4h]
  int v17; // [esp+4h] [ebp-E4h]
  int v18; // [esp+Ch] [ebp-DCh]
  int v19; // [esp+14h] [ebp-D4h]
  _DWORD v20[5]; // [esp+24h] [ebp-C4h] BYREF
  int v21; // [esp+38h] [ebp-B0h]
  char v22; // [esp+3Ch] [ebp-ACh]
  int v23; // [esp+40h] [ebp-A8h]
  char v24; // [esp+44h] [ebp-A4h]
  int v25; // [esp+C4h] [ebp-24h]
  int v26[8]; // [esp+C8h] [ebp-20h] BYREF

  result = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1264))(this, a2);
  v5 = (int)result;
  if ( result )
  {
    if ( *result )
    {
      v20[2] = 100;
      *(float *)&v20[1] = 1.0;
      v20[3] = 100;
      v20[4] = 100;
      v20[0] = 0;
      v21 = 75;
      v24 = 0;
      v22 = 0;
      v23 = 0;
      v25 = 0;
      result = (_BYTE *)sub_1023A760(result, v20, 0);
      if ( (_BYTE)result )
      {
        if ( !v22 )
        {
          v10 = sub_100D1940(this);
          v19 = v21;
          if ( v10 )
          {
            v11 = sub_100D1940(this);
            sub_1001F4E0(v26, v11, v19);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 836))(this) && dword_10697280 )
              sub_1021A070(v26);
            v12 = sub_100D1940(this);
            v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                    dword_106B31D0,
                    *(_DWORD *)(v12 + 24));
            sub_1023C580((int)v26, v13, v5, 0, a3, 0);
            if ( !a2 )
            {
              v18 = sub_100D1940(this);
              v14 = (_DWORD *)sub_100D1940(this);
              v15 = sub_10019640(v14);
              sub_1023D4B0(1, (int)v15, 196, 0.2, v18, 0, 0);
              return (_BYTE *)std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
            }
          }
          else
          {
            sub_1001F4E0(v26, (int)this, v21);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 836))(this) && dword_10697280 )
              sub_1021A070(v26);
            v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
            sub_1023C580((int)v26, v17, v5, 0, a3, 0);
          }
          return (_BYTE *)std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
        }
        result = (_BYTE *)sub_100D1940(this);
        if ( result )
        {
          v6 = sub_100D1940(this);
          result = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6);
          if ( (_BYTE)result )
          {
            v7 = sub_100D1940(this);
            v8 = sub_1001F4B0(v7);
            sub_100D13A0(v26, v8);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 836))(this) )
            {
              if ( dword_10697280 )
                sub_1021A070(v26);
            }
            v9 = (_DWORD *)sub_100D1940(this);
            v16 = sub_1001F3C0(v9);
            sub_1023C580((int)v26, v16, v5, 0, a3, 0);
            return (_BYTE *)std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
          }
        }
      }
    }
  }
  return result;
}
