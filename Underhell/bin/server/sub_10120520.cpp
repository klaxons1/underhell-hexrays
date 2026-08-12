void __thiscall sub_10120520(_DWORD *this)
{
  int v2; // edi
  int (__thiscall *v3)(_DWORD *, float *, _DWORD); // edx
  int v4; // eax
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  double v9; // st7
  _DWORD *v10; // ecx
  __int64 v11; // [esp+8h] [ebp-84h]
  int v12; // [esp+1Ch] [ebp-70h] BYREF
  const char *v13; // [esp+20h] [ebp-6Ch]
  float v14; // [esp+24h] [ebp-68h]
  int v15; // [esp+28h] [ebp-64h]
  int v16; // [esp+2Ch] [ebp-60h]
  int v17; // [esp+30h] [ebp-5Ch]
  int v18; // [esp+34h] [ebp-58h]
  float v19; // [esp+38h] [ebp-54h]
  int v20; // [esp+3Ch] [ebp-50h]
  __int16 v21; // [esp+40h] [ebp-4Ch]
  char v22; // [esp+42h] [ebp-4Ah]
  int v23; // [esp+44h] [ebp-48h]
  _DWORD v24[5]; // [esp+48h] [ebp-44h] BYREF
  __int16 v25; // [esp+5Ch] [ebp-30h]
  _DWORD v26[8]; // [esp+60h] [ebp-2Ch] BYREF
  float v27[3]; // [esp+80h] [ebp-Ch] BYREF

  if ( (this[62] & 0x1000) == 0 )
  {
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
    sub_10219BB0(v26);
    v26[0] = &CPASFilter::`vftable';
    sub_1021A370(v2);
    v3 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
    v26[0] = &CPASAttenuationFilter::`vftable';
    v4 = v3(this, v27, 0.80000001);
    sub_1021A0E0(v4, COERCE_FLOAT(v27));
    sub_10219A50(v26);
    (*(void (__thiscall **)(_DWORD *))(*this + 732))(this);
    v19 = 0.0;
    v25 = -1;
    v5 = (const char *)this[247];
    v16 = 0;
    v17 = 100;
    v18 = 0;
    v20 = 0;
    v21 = 1;
    v22 = 0;
    v23 = -1;
    memset(v24, 0, sizeof(v24));
    v12 = 6;
    v13 = v5;
    if ( !v5 )
      v13 = String;
    v6 = this[6];
    v14 = 1.0;
    v15 = 75;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
    sub_1023BE40(v26, v7, &v12);
    sub_102375F0(v24);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
  }
  v8 = this[62] >> 5;
  this[200] = 0;
  if ( (v8 & 1) != 0 )
  {
    this[49] = sub_10120C40;
  }
  else
  {
    sub_100D8290((float *)this, *((float *)this + 202));
    v9 = *((float *)this + 202);
    this[1] = sub_10120480;
    if ( -1.0 == v9 )
      sub_100EC4A0(this, -1.0, 0);
  }
  HIDWORD(v11) = this;
  LODWORD(v11) = this;
  v10 = this + 276;
  if ( (this[62] & 1) == 0 )
    v10 = this + 282;
  sub_1010DD80(v10, v11, 0.0);
}
