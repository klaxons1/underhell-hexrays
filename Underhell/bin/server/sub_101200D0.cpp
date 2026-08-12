int __thiscall sub_101200D0(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, float *, _DWORD); // edx
  int v4; // eax
  const char *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  float v10; // [esp+10h] [ebp-84h]
  int v11; // [esp+24h] [ebp-70h] BYREF
  const char *v12; // [esp+28h] [ebp-6Ch]
  float v13; // [esp+2Ch] [ebp-68h]
  int v14; // [esp+30h] [ebp-64h]
  int v15; // [esp+34h] [ebp-60h]
  int v16; // [esp+38h] [ebp-5Ch]
  int v17; // [esp+3Ch] [ebp-58h]
  float v18; // [esp+40h] [ebp-54h]
  int v19; // [esp+44h] [ebp-50h]
  __int16 v20; // [esp+48h] [ebp-4Ch]
  char v21; // [esp+4Ah] [ebp-4Ah]
  int v22; // [esp+4Ch] [ebp-48h]
  _DWORD v23[5]; // [esp+50h] [ebp-44h] BYREF
  __int16 v24; // [esp+64h] [ebp-30h]
  _DWORD v25[8]; // [esp+68h] [ebp-2Ch] BYREF
  float v26[3]; // [esp+88h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
  sub_10219BB0(v25);
  v25[0] = &CPASFilter::`vftable';
  sub_1021A370(v2);
  v3 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
  v25[0] = &CPASAttenuationFilter::`vftable';
  v4 = v3(this, v26, 0.80000001);
  sub_1021A0E0(v4, COERCE_FLOAT(v26));
  sub_10219A50(v25);
  v18 = 0.0;
  v24 = -1;
  v5 = (const char *)this[248];
  v15 = 0;
  v16 = 100;
  v17 = 0;
  v19 = 0;
  v20 = 1;
  v21 = 0;
  v22 = -1;
  memset(v23, 0, sizeof(v23));
  v11 = 6;
  if ( !v5 || (v6 = this[200], v6 == 3) || v6 == 1 )
  {
    v12 = (const char *)this[246];
    if ( !v12 )
      v12 = String;
  }
  else
  {
    v12 = v5;
  }
  v7 = this[6];
  v13 = 1.0;
  v14 = 75;
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v7);
  sub_1023BE40(v25, v8, &v11);
  if ( *((_BYTE *)this + 1224) )
  {
    v10 = ((double (__thiscall *)(int, const char *))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(dword_106B31E8, v12)
        + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0(this, (int)sub_101200D0, v10, (int)"MovingSound");
  }
  sub_102375F0(v23);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
}
