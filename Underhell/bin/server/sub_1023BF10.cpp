int __thiscall sub_1023BF10(void *this, int a2, int a3, char *Source, float a5, int a6, int a7, float a8, float *a9)
{
  int result; // eax
  char *v10; // eax
  double v11; // st7
  int v12; // [esp+50h] [ebp-DCh] BYREF
  float v13; // [esp+54h] [ebp-D8h]
  int v14; // [esp+58h] [ebp-D4h]
  int v15; // [esp+5Ch] [ebp-D0h]
  int v16; // [esp+60h] [ebp-CCh]
  int v17; // [esp+64h] [ebp-C8h]
  char v18; // [esp+68h] [ebp-C4h]
  int v19; // [esp+6Ch] [ebp-C0h]
  _BYTE v20[128]; // [esp+70h] [ebp-BCh] BYREF
  int v21; // [esp+F0h] [ebp-3Ch]
  int v22[8]; // [esp+F4h] [ebp-38h] BYREF
  int v23[5]; // [esp+114h] [ebp-18h] BYREF
  void *v24; // [esp+128h] [ebp-4h]
  int v25; // [esp+148h] [ebp+1Ch]

  v13 = 1.0;
  v24 = this;
  v14 = 100;
  v15 = 100;
  v16 = 100;
  v12 = 0;
  v17 = 75;
  v20[0] = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  result = (*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD))(*(_DWORD *)dword_106B3204 + 44))(
             dword_106B3204,
             Source,
             &v12,
             0,
             0);
  if ( (_BYTE)result )
  {
    if ( (a6 & 2) != 0 )
      v14 = a7;
    if ( *(_DWORD *)(dword_106984AC + 48) )
    {
      v10 = (char *)(*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)dword_106B3204 + 60))(
                      dword_106B3204,
                      Source,
                      0);
      if ( !sub_1023A630(v10, 35) )
        v14 = (int)((1.0 - *(float *)(dword_106984F4 + 44)) * (double)(v14 / 2)
                  + (double)v14 * *(float *)(dword_106984F4 + 44));
    }
    if ( (a6 & 1) != 0 )
      v13 = a5;
    (*(void (__stdcall **)(int, int, _BYTE *, float, int, int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 108))(
      a2,
      a3,
      v20,
      COERCE_FLOAT(LODWORD(v13)),
      v17,
      a6 | 0x80,
      v14,
      LODWORD(a8));
    *(float *)&v25 = 0.0;
    if ( a9 || (a6 & 7) == 0 )
    {
      v11 = ((double (__thiscall *)(int, _BYTE *))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(dword_106B31E8, v20);
      *(float *)&v25 = v11;
      if ( a9 )
        *a9 = v11;
    }
    result = (*(int (**)(void *, const char *, ...))(*(_DWORD *)v24 + 64))(
               v24,
               "EmitAmbientSound:  '%s' emitted as '%s' (ent %i)\n",
               Source,
               v20,
               a2);
    if ( (a6 & 7) == 0 )
    {
      sub_10219BB0(v22);
      sub_1021A200((int)v22);
      sub_10219A50(v22);
      memset(v23, 0, sizeof(v23));
      sub_1023B400(a2, v22, a2, 0, Source, (int)v23, *(float *)&v25, 0);
      sub_102375F0(v23);
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
    }
  }
  return result;
}
