int __thiscall sub_1028DBA0(float *this, float *a2, int a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  float *v8; // eax
  double v9; // st6
  unsigned int v10; // ecx
  double v11; // st5
  double v12; // rt1
  double v13; // st5
  double v14; // st7
  unsigned int v15; // eax
  _DWORD v17[8]; // [esp+10h] [ebp-38h] BYREF
  float v18[3]; // [esp+30h] [ebp-18h] BYREF
  float v19[2]; // [esp+3Ch] [ebp-Ch] BYREF
  float v20; // [esp+44h] [ebp-4h]
  int v21; // [esp+50h] [ebp+8h]

  v5 = (char *)(this + 3) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v21 = v5;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_7;
    v5 = v21;
  }
  this[3] = *a2;
  this[4] = a2[1];
  this[5] = a2[2];
LABEL_7:
  sub_10422220(a3, v19);
  v20 = 0.0;
  off_10689714();
  v8 = v18;
  v9 = v19[0] * 2048.0;
  v10 = 12;
  v18[0] = v9;
  v11 = v19[1] * 2048.0;
  v18[1] = v11;
  v12 = v11;
  v13 = 2048.0 * v20;
  v14 = v12;
  v18[2] = v13;
  while ( *(_DWORD *)((char *)v8 + (char *)(this + 6) - (char *)v18) == *(_DWORD *)v8 )
  {
    v10 -= 4;
    ++v8;
    if ( v10 < 4 )
      goto LABEL_12;
  }
  this[6] = v9;
  this[7] = v14;
  this[8] = v13;
LABEL_12:
  if ( *((_DWORD *)this + 10) != 5 )
    *((_DWORD *)this + 10) = 5;
  v15 = *((_DWORD *)this + 11);
  if ( v15 != -1
    && off_1061BE18[4 * ((_DWORD)this[11] & 0xFFF) + 2] == v15 >> 12
    && off_1061BE18[4 * ((_DWORD)this[11] & 0xFFF) + 1] )
  {
    this[11] = NAN;
  }
  sub_10219BB0(v17);
  v17[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v17);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v17, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
}
