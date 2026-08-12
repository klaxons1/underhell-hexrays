int __thiscall sub_10251830(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int result; // eax
  void (__noreturn ***v7)(); // eax
  const char *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int *v12; // ecx
  void (__noreturn ***v13)(); // eax
  int v14; // edi
  int (__thiscall *v15)(int, _DWORD *, _DWORD); // edx
  float *v16; // eax
  const char *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [esp+44h] [ebp-7Ch] BYREF
  const char *v21; // [esp+48h] [ebp-78h]
  float v22; // [esp+4Ch] [ebp-74h]
  int v23; // [esp+50h] [ebp-70h]
  int v24; // [esp+54h] [ebp-6Ch]
  int v25; // [esp+58h] [ebp-68h]
  int v26; // [esp+5Ch] [ebp-64h]
  float v27; // [esp+60h] [ebp-60h]
  int v28; // [esp+64h] [ebp-5Ch]
  __int16 v29; // [esp+68h] [ebp-58h]
  char v30; // [esp+6Ah] [ebp-56h]
  int v31; // [esp+6Ch] [ebp-54h]
  int v32[5]; // [esp+70h] [ebp-50h] BYREF
  __int16 v33; // [esp+84h] [ebp-3Ch]
  _DWORD v34[10]; // [esp+88h] [ebp-38h] BYREF
  _DWORD v35[3]; // [esp+B0h] [ebp-10h] BYREF
  int v36; // [esp+BCh] [ebp-4h]

  v2 = *(_DWORD *)(this + 940);
  v34[8] = 0;
  if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (v2 & 0xFFF) + 1];
  (*(void (__thiscall **)(int, const char *, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 148))(
    v3,
    "InPass",
    this,
    this,
    0,
    v34[9],
    v35[0],
    -1,
    0,
    0);
  v4 = *(_DWORD *)(this + 940);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 940) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 940) & 0xFFF) + 1];
  if ( (*(_BYTE *)(v5 + 248) & 1) != 0 || (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    v11 = *(_DWORD *)(this + 248) | 1;
    v36 = v11;
    if ( *(_DWORD *)(this + 248) != v11 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v12 = *(int **)(this + 24);
        if ( v12 )
        {
          sub_100194B0(v12, 248);
          v11 = v36;
        }
      }
      *(_DWORD *)(this + 248) = v11;
    }
    if ( *(_DWORD *)(this + 924) )
    {
      v13 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v13)[10])(v13, *(_DWORD *)(this + 924));
      *(_DWORD *)(this + 924) = 0;
    }
    if ( *(_DWORD *)(this + 920) )
    {
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 580))(this);
      sub_10219BB0(v34);
      v34[0] = &CPASFilter::`vftable';
      sub_1021A370(v34, v14);
      v15 = *(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this + 580);
      v34[0] = &CPASAttenuationFilter::`vftable';
      v16 = (float *)v15(this, v35, 0.80000001);
      sub_1021A0E0(v34, v16, COERCE_FLOAT(v35));
      v27 = 0.0;
      v33 = -1;
      v17 = *(const char **)(this + 920);
      v24 = 0;
      v25 = 100;
      v26 = 0;
      v28 = 0;
      v29 = 1;
      v30 = 0;
      v31 = -1;
      memset(v32, 0, sizeof(v32));
      v20 = 2;
      v21 = v17;
      if ( !v17 )
        v21 = String;
      v18 = *(_DWORD *)(this + 24);
      v22 = *(float *)(this + 928);
      v23 = 75;
      v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v18);
      sub_1023BE40(v34, v19, (int)&v20);
      sub_102375F0(v32);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v34);
    }
    return sub_100D8290((float *)this, -1.0);
  }
  else if ( 0.0 == *(float *)(this + 808) )
  {
    return sub_10251B40(this);
  }
  else
  {
    result = sub_100D8290((float *)this, *(float *)(this + 808));
    if ( *(_DWORD *)(this + 924) )
    {
      v7 = sub_1023DBA0();
      result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v7)[10])(v7, *(_DWORD *)(this + 924));
      *(_DWORD *)(this + 924) = 0;
    }
    if ( *(_DWORD *)(this + 920) )
    {
      sub_100D78A0(v34, this, 0.80000001);
      sub_100F8510((float *)&v20);
      v8 = *(const char **)(this + 920);
      v20 = 2;
      v21 = v8;
      if ( !v8 )
        v21 = String;
      v9 = *(_DWORD *)(this + 24);
      v22 = *(float *)(this + 928);
      v23 = 75;
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v9);
      sub_1023BE40(v34, v10, (int)&v20);
      sub_102375F0(v32);
      result = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v34);
    }
    *(_DWORD *)(this + 4) = sub_10251B40;
  }
  return result;
}
