int __thiscall sub_10109A40(const char **this)
{
  int v2; // edi
  int (__thiscall *v3)(const char **, float *, _DWORD); // edx
  int v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  float v11; // [esp+Ch] [ebp-7Ch]
  int v12; // [esp+18h] [ebp-70h] BYREF
  const char *v13; // [esp+1Ch] [ebp-6Ch]
  float v14; // [esp+20h] [ebp-68h]
  int v15; // [esp+24h] [ebp-64h]
  int v16; // [esp+28h] [ebp-60h]
  int v17; // [esp+2Ch] [ebp-5Ch]
  int v18; // [esp+30h] [ebp-58h]
  float v19; // [esp+34h] [ebp-54h]
  int v20; // [esp+38h] [ebp-50h]
  __int16 v21; // [esp+3Ch] [ebp-4Ch]
  char v22; // [esp+3Eh] [ebp-4Ah]
  int v23; // [esp+40h] [ebp-48h]
  _DWORD v24[5]; // [esp+44h] [ebp-44h] BYREF
  __int16 v25; // [esp+58h] [ebp-30h]
  _DWORD v26[8]; // [esp+5Ch] [ebp-2Ch] BYREF
  float v27[3]; // [esp+7Ch] [ebp-Ch] BYREF

  if ( this[248] )
  {
    v2 = (*((int (__thiscall **)(const char **))*this + 145))(this);
    sub_10219BB0(v26);
    v26[0] = &CPASFilter::`vftable';
    sub_1021A370(v2);
    v3 = (int (__thiscall *)(const char **, float *, _DWORD))*((_DWORD *)*this + 145);
    v26[0] = &CPASAttenuationFilter::`vftable';
    v4 = v3(this, v27, 0.80000001);
    sub_1021A0E0(v4, COERCE_FLOAT(v27));
    v19 = 0.0;
    v25 = -1;
    v5 = this[248];
    v16 = 0;
    v17 = 100;
    v18 = 0;
    v20 = 0;
    v21 = 1;
    v22 = 0;
    v23 = -1;
    memset(v24, 0, sizeof(v24));
    v12 = 2;
    v13 = v5;
    if ( !v5 )
      v13 = String;
    v6 = this[6];
    v14 = 1.0;
    v15 = 75;
    v7 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
    sub_1023BE40(v26, v7, &v12);
    sub_102375F0(v24);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
  }
  v8 = (unsigned int)this[220];
  if ( v8 == -1 || off_1061BE18[4 * ((unsigned int)this[220] & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * ((unsigned int)this[220] & 0xFFF) + 1];
  if ( !(unsigned __int8)sub_10260340((char *)this[228], v9) || *((_BYTE *)this + 976) )
    return sub_1011FE20(this, this + 233, 1, 1);
  sub_1011FE20(this, this + 233, 0, 1);
  v11 = *((float *)this + 27);
  this[200] = (const char *)2;
  this[1] = (const char *)sub_10108E60;
  if ( *((_BYTE *)this + 929) )
    return sub_10246BC0((int)(this + 216), v11);
  else
    return sub_10246AC0((int)(this + 207), v11);
}
