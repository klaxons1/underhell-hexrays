int __thiscall sub_1006AEB0(int *this, int a2, int a3)
{
  int *v3; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  int v7; // ebx
  char *v8; // eax
  int v9; // ebx
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  const char *v15; // eax
  const char *v16; // [esp-8h] [ebp-34h]
  _BYTE v17[32]; // [esp+8h] [ebp-24h] BYREF
  int *v18; // [esp+28h] [ebp-4h]

  v3 = this;
  v18 = this;
  result = sub_10229C90(a2);
  for ( i = result; result; i = result )
  {
    v6 = (char *)sub_10229A00(i);
    if ( sub_10227C40(v6, "dsp") )
    {
      v8 = (char *)sub_10229A00(i);
      if ( sub_10227C40(v8, "dsp_player") )
      {
        v10 = (char *)sub_10229A00(i);
        if ( sub_10227C40(v10, "playlooping") )
        {
          v11 = (char *)sub_10229A00(i);
          if ( sub_10227C40(v11, "playrandom") )
          {
            v12 = (char *)sub_10229A00(i);
            if ( sub_10227C40(v12, "playsoundscape") )
            {
              v13 = (char *)sub_10229A00(i);
              if ( sub_10227C40(v13, "Soundmixer") )
              {
                v14 = (char *)sub_10229A00(i);
                if ( sub_10227C40(v14, "dsp_volume") )
                {
                  v16 = (const char *)sub_10229A00(i);
                  v15 = (const char *)sub_10229A00(a2);
                  DevMsg(1, "Soundscape %s:Unknown command %s\n", v15, v16);
                }
                else if ( *(_BYTE *)(a3 + 20) )
                {
                  sub_10069090(i, a3);
                }
              }
              else if ( *(_BYTE *)(a3 + 20) )
              {
                sub_10069040(i, a3);
              }
            }
            else
            {
              sub_1006B090(i, a3);
            }
          }
          else
          {
            sub_1006A5B0(v3, i, a3);
          }
        }
        else
        {
          sub_1006AB60(v3, i, a3);
        }
      }
      else if ( *(_BYTE *)(a3 + 20) )
      {
        v9 = sub_1022A800(0, 0);
        sub_1015BB00(v17);
        (*(void (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)dword_10413194 + 40))(dword_10413194, v17, v9, 0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
        v3 = v18;
      }
    }
    else if ( *(_BYTE *)(a3 + 20) )
    {
      v7 = sub_1022A800(0, 0);
      sub_1015BB00(v17);
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_10413194 + 36))(dword_10413194, v17, v7);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
      v3 = v18;
    }
    result = sub_1021F0F0(i);
  }
  return result;
}
