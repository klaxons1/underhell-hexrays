int __thiscall sub_10120230(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, float *, _DWORD); // edx
  int v5; // eax
  const char *v6; // eax
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  float v13; // [esp+Ch] [ebp-80h]
  int v14; // [esp+1Ch] [ebp-70h] BYREF
  const char *v15; // [esp+20h] [ebp-6Ch]
  float v16; // [esp+24h] [ebp-68h]
  int v17; // [esp+28h] [ebp-64h]
  int v18; // [esp+2Ch] [ebp-60h]
  int v19; // [esp+30h] [ebp-5Ch]
  int v20; // [esp+34h] [ebp-58h]
  float v21; // [esp+38h] [ebp-54h]
  int v22; // [esp+3Ch] [ebp-50h]
  __int16 v23; // [esp+40h] [ebp-4Ch]
  char v24; // [esp+42h] [ebp-4Ah]
  int v25; // [esp+44h] [ebp-48h]
  _DWORD v26[5]; // [esp+48h] [ebp-44h] BYREF
  __int16 v27; // [esp+5Ch] [ebp-30h]
  _DWORD v28[8]; // [esp+60h] [ebp-2Ch] BYREF
  float v29[3]; // [esp+80h] [ebp-Ch] BYREF

  v2 = 0;
  if ( (this[62] & 0x1000) == 0 )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 580))(this);
    sub_10219BB0(v28);
    v28[0] = &CPASFilter::`vftable';
    sub_1021A370(v3);
    v4 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 580);
    v28[0] = &CPASAttenuationFilter::`vftable';
    v5 = v4(this, v29, 0.80000001);
    sub_1021A0E0(v5, COERCE_FLOAT(v29));
    sub_10219A50(v28);
    (*(void (__thiscall **)(_DWORD *))(*this + 732))(this);
    v21 = 0.0;
    v18 = 0;
    v19 = 100;
    v20 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0;
    v25 = -1;
    memset(v26, 0, sizeof(v26));
    v27 = -1;
    v14 = 6;
    if ( this[249] )
      v6 = (const char *)this[249];
    else
      v6 = (const char *)this[247];
    v15 = v6;
    if ( !v6 )
      v15 = String;
    v7 = this[6];
    v16 = 1.0;
    v17 = 75;
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v7);
    sub_1023BE40(v28, v8, &v14);
    sub_102375F0(v26);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
  }
  v9 = (this[62] & 1) == 0;
  this[200] = 1;
  this[49] = sub_10120C40;
  v10 = this[220];
  if ( v9 )
  {
    if ( v10 != -1 && off_1061BE18[4 * (this[220] & 0xFFF) + 2] == v10 >> 12 )
      v2 = off_1061BE18[4 * (this[220] & 0xFFF) + 1];
    v11 = this + 276;
  }
  else
  {
    if ( v10 != -1 && off_1061BE18[4 * (this[220] & 0xFFF) + 2] == v10 >> 12 )
      v2 = off_1061BE18[4 * (this[220] & 0xFFF) + 1];
    v11 = this + 282;
  }
  sub_1010DD80(v11, __SPAIR64__((unsigned int)this, v2), 0.0);
  v13 = *(float *)(dword_106B31C8 + 12) + 0.5;
  return sub_100EC3F0(this, (int)sub_1011FB20, v13, (int)"CloseAreaportalThink");
}
