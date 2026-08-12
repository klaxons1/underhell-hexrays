int __thiscall sub_1006A0C0(void *this, float a2)
{
  int v2; // edx
  int result; // eax
  int v4; // ecx
  int v5; // edi
  float v6; // ebx
  int v7; // edi
  double v8; // st7
  bool v9; // zf
  float *v10; // eax
  float v11; // [esp+8h] [ebp-90h]
  int v12; // [esp+Ch] [ebp-8Ch]
  float v13[11]; // [esp+24h] [ebp-74h] BYREF
  _BYTE v14[24]; // [esp+50h] [ebp-48h] BYREF
  _BYTE v15[32]; // [esp+68h] [ebp-30h] BYREF
  float v16[4]; // [esp+88h] [ebp-10h] BYREF

  v2 = *(_DWORD *)(LODWORD(a2) + 52);
  LODWORD(v16[3]) = this;
  result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, v2 - 1);
  v4 = *(_DWORD *)(LODWORD(a2) + 60);
  v5 = result;
  if ( result <= 0 )
  {
LABEL_4:
    if ( v4 )
    {
      result = sub_1022B4C0(0, (int)Locale);
      v6 = *(float *)&result;
      if ( result )
      {
        if ( *(_BYTE *)(LODWORD(a2) + 56) )
        {
          v7 = *(_DWORD *)dword_10413194;
          v12 = (int)sub_100DA430(LODWORD(a2) + 32);
          v11 = sub_100DA430(LODWORD(a2) + 24) * *(float *)(LODWORD(a2) + 48);
          return (*(int (__thiscall **)(int, float, _DWORD, int, _DWORD, _DWORD))(v7 + 44))(
                   dword_10413194,
                   COERCE_FLOAT(LODWORD(v6)),
                   LODWORD(v11),
                   v12,
                   0,
                   0.0);
        }
        else
        {
          sub_1015BB00(v15);
          sub_10013E00(v13);
          LODWORD(v13[0]) = 6;
          v13[1] = v6;
          v13[2] = sub_100DA430(LODWORD(a2) + 24) * *(float *)(LODWORD(a2) + 48);
          LODWORD(v13[3]) = (int)sub_100DA430(LODWORD(a2) + 40);
          v8 = sub_100DA430(LODWORD(a2) + 32);
          v9 = *(_BYTE *)(LODWORD(a2) + 57) == 0;
          LODWORD(v13[5]) = (int)v8;
          if ( !v9 )
          {
            v10 = sub_10069400(v16);
            *(float *)LODWORD(a2) = *v10;
            *(float *)(LODWORD(a2) + 4) = v10[1];
            *(float *)(LODWORD(a2) + 8) = v10[2];
          }
          v13[6] = a2;
          sub_10121280(v15, 0, v13);
          sub_1011A810(v14);
          return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
        }
      }
    }
  }
  else
  {
    while ( v4 )
    {
      result = sub_1021F0F0(v4);
      --v5;
      v4 = result;
      if ( v5 <= 0 )
        goto LABEL_4;
    }
  }
  return result;
}
