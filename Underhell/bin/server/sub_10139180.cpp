void __thiscall sub_10139180(const char **this, _DWORD *a2)
{
  const char **v3; // eax
  int v4; // edi
  char v5; // al
  int v6; // edi
  int (__thiscall *v7)(const char **, float *, _DWORD); // edx
  int v8; // eax
  double v9; // st7
  const char *v10; // eax
  int v11; // eax
  __int64 v12; // [esp+4h] [ebp-8Ch]
  int v13; // [esp+1Ch] [ebp-74h] BYREF
  const char *v14; // [esp+20h] [ebp-70h]
  float v15; // [esp+24h] [ebp-6Ch]
  int v16; // [esp+28h] [ebp-68h]
  int v17; // [esp+2Ch] [ebp-64h]
  int v18; // [esp+30h] [ebp-60h]
  int v19; // [esp+34h] [ebp-5Ch]
  float v20; // [esp+38h] [ebp-58h]
  int v21; // [esp+3Ch] [ebp-54h]
  __int16 v22; // [esp+40h] [ebp-50h]
  char v23; // [esp+42h] [ebp-4Eh]
  int v24; // [esp+44h] [ebp-4Ch]
  _DWORD v25[5]; // [esp+48h] [ebp-48h] BYREF
  __int16 v26; // [esp+5Ch] [ebp-34h]
  _DWORD v27[8]; // [esp+60h] [ebp-30h] BYREF
  float v28[3]; // [esp+80h] [ebp-10h] BYREF
  const char *v29; // [esp+8Ch] [ebp-4h] BYREF

  v3 = (const char **)(a2 + 2);
  if ( a2[6] != 2 )
  {
    v29 = 0;
    v3 = &v29;
  }
  v29 = *v3;
  if ( !v29 )
    v29 = String;
  if ( ((_BYTE)this[62] & 2) != 0 )
  {
    sub_1025F270(v29);
    goto LABEL_15;
  }
  if ( *a2 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 320))(*a2) )
  {
    v4 = *a2;
  }
  else
  {
    if ( *(int *)(dword_106B31C8 + 20) > 1 )
      goto LABEL_15;
    v4 = sub_10261B20();
  }
  if ( v4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4);
    sub_1025F210(v29, v5 != 0 ? v4 : 0);
  }
LABEL_15:
  if ( this[224] )
  {
    v6 = (*((int (__thiscall **)(const char **))*this + 145))(this);
    sub_10219BB0(v27);
    v27[0] = &CPASFilter::`vftable';
    sub_1021A370(v6);
    v7 = (int (__thiscall *)(const char **, float *, _DWORD))*((_DWORD *)*this + 145);
    v27[0] = &CPASAttenuationFilter::`vftable';
    v8 = v7(this, v28, 0.80000001);
    sub_1021A0E0(v8, COERCE_FLOAT(v28));
    v9 = 0.0;
    v20 = 0.0;
    v26 = -1;
    v10 = this[224];
    v17 = 0;
    v18 = 100;
    v19 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    v24 = -1;
    memset(v25, 0, sizeof(v25));
    v13 = 4;
    v14 = v10;
    if ( !v10 )
      v14 = String;
    v15 = *((float *)this + 220);
    if ( 0.0 != *((float *)this + 222) )
      v9 = 20.0 / *((float *)this + 222) + 50.0;
    v16 = (int)v9;
    v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023BE40(v27, v11, &v13);
    sub_102375F0(v25);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
  }
  if ( ((_BYTE)this[62] & 1) != 0 )
    sub_1025FAC0(this);
  HIDWORD(v12) = this;
  LODWORD(v12) = *a2;
  sub_1010DD80(this + 225, v12, 0.0);
}
