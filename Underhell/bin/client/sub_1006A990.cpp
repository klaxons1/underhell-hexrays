int __thiscall sub_1006A990(int *this, char *String1, char a3, float a4, int a5, int a6, float *a7)
{
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // edi
  float *v13; // edi
  bool v14; // zf
  int v15; // eax
  double v16; // st7
  float v18[11]; // [esp+1Ch] [ebp-6Ch] BYREF
  _BYTE v19[24]; // [esp+48h] [ebp-40h] BYREF
  _BYTE v20[32]; // [esp+60h] [ebp-28h] BYREF
  int v21; // [esp+80h] [ebp-8h]
  char v22; // [esp+87h] [ebp-1h]

  v8 = this[43] - 1;
  v22 = 0;
  if ( v8 >= 0 )
  {
    v9 = 40 * v8;
    v21 = 40 * v8;
    do
    {
      v10 = this[40];
      v11 = *(_DWORD *)(v10 + v9 + 32);
      v12 = v9 + v10;
      if ( v11 != this[51] && *(_DWORD *)(v12 + 28) == a6 )
      {
        if ( !sub_10227C40(String1, *(char **)(v12 + 12)) )
        {
          if ( a3 == 1 && *(_BYTE *)(v12 + 36) == 1 )
            goto LABEL_17;
          if ( a3 == *(_BYTE *)(v12 + 36) )
          {
            if ( !sub_10012310(a7, (float *)v12, 0.1) )
            {
              sub_10069240(v12);
              v22 = 1;
            }
LABEL_17:
            v13 = a7;
            goto LABEL_18;
          }
        }
        v9 = v21;
      }
      v9 -= 40;
      --v8;
      v21 = v9;
    }
    while ( v8 >= 0 );
  }
  v8 = sub_10069B20(this + 40);
  if ( a3 )
  {
    (*(void (__stdcall **)(char *, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)dword_10413194 + 44))(
      String1,
      0.0,
      a6,
      0,
      0.0);
    *(float *)(this[40] + 40 * v8 + 20) = 0.0;
    goto LABEL_17;
  }
  sub_1015BB00(v20);
  sub_10013E00(v18);
  v18[2] = 0.050000001;
  v13 = a7;
  LODWORD(v18[1]) = String1;
  LODWORD(v18[3]) = a5;
  LODWORD(v18[0]) = 6;
  LODWORD(v18[5]) = a6;
  LODWORD(v18[6]) = a7;
  sub_10121280(v20, 0, v18);
  *(float *)(this[40] + 40 * v8 + 20) = 0.050000001;
  sub_1011A810(v19);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
LABEL_18:
  v14 = v22 == 0;
  v15 = this[40] + 40 * v8;
  *(float *)(v15 + 16) = a4;
  *(_DWORD *)(v15 + 12) = String1;
  *(_DWORD *)(v15 + 28) = a6;
  *(_DWORD *)(v15 + 32) = this[51];
  *(_BYTE *)(v15 + 36) = a3;
  *(float *)v15 = *v13;
  *(float *)(v15 + 4) = v13[1];
  v16 = v13[2];
  *(_DWORD *)(v15 + 24) = a5;
  *(float *)(v15 + 8) = v16;
  if ( !v14 )
    sub_10069FA0(v15);
  return v8;
}
