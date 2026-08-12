_BYTE *__thiscall sub_1000C430(_DWORD *this, int a2, float a3)
{
  _BYTE *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // [esp+8h] [ebp-D4h]
  _DWORD v14[5]; // [esp+18h] [ebp-C4h] BYREF
  int v15; // [esp+2Ch] [ebp-B0h]
  char v16; // [esp+30h] [ebp-ACh]
  int v17; // [esp+34h] [ebp-A8h]
  char v18; // [esp+38h] [ebp-A4h]
  int v19; // [esp+B8h] [ebp-24h]
  int v20[8]; // [esp+BCh] [ebp-20h] BYREF

  result = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1176))(this, a2);
  v5 = (int)result;
  if ( result )
  {
    if ( *result )
    {
      v14[2] = 100;
      *(float *)&v14[1] = 1.0;
      v14[3] = 100;
      v14[4] = 100;
      v14[0] = 0;
      v15 = 75;
      v18 = 0;
      v16 = 0;
      v17 = 0;
      v19 = 0;
      result = (_BYTE *)sub_10120700(result, v14, 0);
      if ( (_BYTE)result )
      {
        if ( !v16 )
        {
          v10 = sub_1000BAC0(this);
          v13 = (float)v15;
          if ( !v10 )
          {
            sub_10025C70(this, LODWORD(v13));
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 744))(this) && dword_10404B5C )
              sub_1015BAA0(v20);
            v9 = (int)(this + 2);
            goto LABEL_18;
          }
          v11 = sub_1000BAC0(this);
          sub_10025C70(v11, LODWORD(v13));
LABEL_8:
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 744))(this) )
          {
            if ( dword_10404B5C )
              sub_1015BAA0(v20);
          }
          v9 = sub_1000BAC0(this) + 8;
LABEL_18:
          v12 = (*(int (**)(void))(*(_DWORD *)v9 + 36))();
          sub_101213E0((int)v20, v12, v5, 0, a3, 0);
          return (_BYTE *)std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
        }
        result = (_BYTE *)sub_1000BAC0(this);
        if ( result )
        {
          v6 = sub_1000BAC0(this);
          result = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6);
          if ( (_BYTE)result )
          {
            v7 = sub_1000BAC0(this);
            v8 = sub_10008FC0(v7);
            sub_1000B5D0(v20, v8);
            goto LABEL_8;
          }
        }
      }
    }
  }
  return result;
}
