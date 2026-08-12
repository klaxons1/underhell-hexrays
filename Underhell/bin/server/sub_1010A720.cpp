int __thiscall sub_1010A720(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  const char *v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int v15; // [esp+10h] [ebp-64h] BYREF
  const char *v16; // [esp+14h] [ebp-60h]
  float v17; // [esp+18h] [ebp-5Ch]
  int v18; // [esp+1Ch] [ebp-58h]
  _BYTE v19[24]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD v20[8]; // [esp+54h] [ebp-20h] BYREF

  v3 = *(_DWORD *)(this + 880);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  sub_1010DD80(v5, this, 0.0);
  if ( (*(_DWORD *)(this + 248) & 0x200) == 0 && !*(_DWORD *)(this + 220) )
    return 0;
  v6 = sub_10108770(this);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(a2 + 44);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  *(_DWORD *)(this + 880) = v8 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) : -1;
  v9 = *(_DWORD *)(this + 880);
  if ( v9 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v9 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1]
    || *(_BYTE *)(this + 976) )
  {
    return 0;
  }
  *(_DWORD *)(this + 196) = 0;
  if ( v6 != 2 )
  {
    v14 = sub_1026A890(this + 880);
    sub_1010DD80(v14, this, 0.0);
    sub_10109A40((const char **)this);
    return 0;
  }
  if ( *(_DWORD *)(this + 992) )
  {
    sub_100D78A0(v20, this, 0.80000001);
    sub_100F8510((float *)&v15);
    v10 = *(const char **)(this + 992);
    v15 = 2;
    v16 = v10;
    if ( !v10 )
      v16 = String;
    v17 = 1.0;
    v18 = 75;
    v11 = sub_1001F3C0((_DWORD *)this);
    sub_1023BE40(v20, v11, &v15);
    sub_102375F0(v19);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
  }
  v12 = sub_1026A890(this + 880);
  sub_1010DD80(v12, this, 0.0);
  sub_10108B40(this);
  return 0;
}
