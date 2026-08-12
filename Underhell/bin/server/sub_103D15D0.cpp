void __thiscall sub_103D15D0(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, float *, _DWORD); // edx
  float *v4; // eax
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int (__thiscall *v9)(_DWORD *, float *, _DWORD); // edx
  float *v10; // eax
  const char *v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // [esp+20h] [ebp-70h] BYREF
  const char *v15; // [esp+24h] [ebp-6Ch]
  float v16; // [esp+28h] [ebp-68h]
  int v17; // [esp+2Ch] [ebp-64h]
  int v18; // [esp+30h] [ebp-60h]
  int v19; // [esp+34h] [ebp-5Ch]
  int v20; // [esp+38h] [ebp-58h]
  float v21; // [esp+3Ch] [ebp-54h]
  int v22; // [esp+40h] [ebp-50h]
  __int16 v23; // [esp+44h] [ebp-4Ch]
  char v24; // [esp+46h] [ebp-4Ah]
  int v25; // [esp+48h] [ebp-48h]
  int v26; // [esp+4Ch] [ebp-44h] BYREF
  int v27; // [esp+50h] [ebp-40h]
  int v28; // [esp+54h] [ebp-3Ch]
  int v29; // [esp+58h] [ebp-38h]
  int v30; // [esp+5Ch] [ebp-34h]
  __int16 v31; // [esp+60h] [ebp-30h]
  _DWORD v32[8]; // [esp+64h] [ebp-2Ch] BYREF
  float v33[3]; // [esp+84h] [ebp-Ch] BYREF

  if ( this[216] )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
    sub_10219BB0(v32);
    v32[0] = &CPASFilter::`vftable';
    sub_1021A370(v32, v2);
    v3 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
    v32[0] = &CPASAttenuationFilter::`vftable';
    v4 = (float *)v3(this, v33, 0.80000001);
    sub_1021A0E0(v32, v4, COERCE_FLOAT(v33));
    sub_10219A50(v32);
    v21 = 0.0;
    v31 = -1;
    v5 = (const char *)this[216];
    v18 = 0;
    v19 = 100;
    v20 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v14 = 6;
    v15 = v5;
    if ( !v5 )
      v15 = String;
    v6 = this[6];
    v16 = 0.85000002;
    v17 = 75;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
    sub_1023BE40(v32, v7, (int)&v14);
    sub_102375F0(&v26);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
  }
  if ( this[214] )
  {
    v8 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
    sub_10219BB0(v32);
    v32[0] = &CPASFilter::`vftable';
    sub_1021A370(v32, v8);
    v9 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
    v32[0] = &CPASAttenuationFilter::`vftable';
    v10 = (float *)v9(this, v33, 0.80000001);
    sub_1021A0E0(v32, v10, COERCE_FLOAT(v33));
    v21 = 0.0;
    v31 = -1;
    v11 = (const char *)this[214];
    v18 = 0;
    v19 = 100;
    v20 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v14 = 4;
    v15 = v11;
    if ( !v11 )
      v15 = String;
    v12 = this[6];
    v16 = 1.0;
    v17 = 75;
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v12);
    sub_1023BE40(v32, v13, (int)&v14);
    sub_102375F0(&v26);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
  }
}
