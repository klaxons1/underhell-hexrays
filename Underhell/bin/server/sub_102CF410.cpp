void __thiscall sub_102CF410(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, float *, _DWORD); // edx
  float *v4; // eax
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+14h] [ebp-70h] BYREF
  const char *v9; // [esp+18h] [ebp-6Ch]
  float v10; // [esp+1Ch] [ebp-68h]
  int v11; // [esp+20h] [ebp-64h]
  int v12; // [esp+24h] [ebp-60h]
  int v13; // [esp+28h] [ebp-5Ch]
  int v14; // [esp+2Ch] [ebp-58h]
  float v15; // [esp+30h] [ebp-54h]
  int v16; // [esp+34h] [ebp-50h]
  __int16 v17; // [esp+38h] [ebp-4Ch]
  char v18; // [esp+3Ah] [ebp-4Ah]
  int v19; // [esp+3Ch] [ebp-48h]
  int v20[5]; // [esp+40h] [ebp-44h] BYREF
  __int16 v21; // [esp+54h] [ebp-30h]
  _DWORD v22[8]; // [esp+58h] [ebp-2Ch] BYREF
  float v23[3]; // [esp+78h] [ebp-Ch] BYREF

  if ( this[204] )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
    sub_10219BB0(v22);
    v22[0] = &CPASFilter::`vftable';
    sub_1021A370(v22, v2);
    v3 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
    v22[0] = &CPASAttenuationFilter::`vftable';
    v4 = (float *)v3(this, v23, 0.80000001);
    sub_1021A0E0(v22, v4, COERCE_FLOAT(v23));
    v15 = 0.0;
    v21 = -1;
    v5 = (const char *)this[204];
    v12 = 0;
    v13 = 100;
    v14 = 0;
    v16 = 0;
    v17 = 1;
    v18 = 0;
    v19 = -1;
    memset(v20, 0, sizeof(v20));
    v8 = 1;
    v9 = v5;
    if ( !v5 )
      v9 = String;
    v6 = this[6];
    v10 = 1.0;
    v11 = 0;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
    sub_1023BE40(v22, v7, (int)&v8);
    sub_102375F0(v20);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
  }
  *((_BYTE *)this + 824) = 1;
}
