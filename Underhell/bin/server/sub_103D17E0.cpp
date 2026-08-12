int __thiscall sub_103D17E0(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int (__thiscall *v5)(_DWORD *, float *, _DWORD); // edx
  float *v6; // eax
  const char *v7; // eax
  int v8; // esi
  int v9; // eax
  _BYTE *v10; // [esp+Ch] [ebp-7Ch]
  int v11; // [esp+18h] [ebp-70h] BYREF
  const char *v12; // [esp+1Ch] [ebp-6Ch]
  float v13; // [esp+20h] [ebp-68h]
  int v14; // [esp+24h] [ebp-64h]
  int v15; // [esp+28h] [ebp-60h]
  int v16; // [esp+2Ch] [ebp-5Ch]
  int v17; // [esp+30h] [ebp-58h]
  float v18; // [esp+34h] [ebp-54h]
  int v19; // [esp+38h] [ebp-50h]
  __int16 v20; // [esp+3Ch] [ebp-4Ch]
  char v21; // [esp+3Eh] [ebp-4Ah]
  int v22; // [esp+40h] [ebp-48h]
  int v23[5]; // [esp+44h] [ebp-44h] BYREF
  __int16 v24; // [esp+58h] [ebp-30h]
  _DWORD v25[8]; // [esp+5Ch] [ebp-2Ch] BYREF
  float v26[3]; // [esp+7Ch] [ebp-Ch] BYREF

  result = this[216];
  if ( result )
  {
    v10 = (_BYTE *)this[216];
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    result = sub_1023AF30(v3, 6, v10);
  }
  if ( this[215] )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
    sub_10219BB0(v25);
    v25[0] = &CPASFilter::`vftable';
    sub_1021A370(v25, v4);
    v5 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
    v25[0] = &CPASAttenuationFilter::`vftable';
    v6 = (float *)v5(this, v26, 0.80000001);
    sub_1021A0E0(v25, v6, COERCE_FLOAT(v26));
    v13 = 1.0;
    v24 = -1;
    v7 = (const char *)this[215];
    v18 = 0.0;
    v15 = 0;
    v16 = 100;
    v17 = 0;
    v19 = 0;
    v20 = 1;
    v21 = 0;
    v22 = -1;
    memset(v23, 0, sizeof(v23));
    v11 = 4;
    v12 = v7;
    if ( !v7 )
      v12 = String;
    v8 = this[6];
    v14 = 75;
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v8);
    sub_1023BE40(v25, v9, (int)&v11);
    sub_102375F0(v23);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
  }
  return result;
}
