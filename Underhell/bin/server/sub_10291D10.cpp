int __thiscall sub_10291D10(float *this, float *a2, int a3)
{
  int v5; // ebx
  unsigned int v6; // ecx
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st4
  double v11; // st6
  double v12; // st2
  double v13; // rt2
  double v14; // st2
  double v15; // st3
  double v16; // rtt
  double v17; // st2
  double v18; // st5
  double v19; // st5
  _DWORD v21[8]; // [esp+10h] [ebp-44h] BYREF
  float v22; // [esp+30h] [ebp-24h] BYREF
  float v23; // [esp+34h] [ebp-20h]
  float v24; // [esp+38h] [ebp-1Ch]
  float v25; // [esp+3Ch] [ebp-18h] BYREF
  float v26; // [esp+40h] [ebp-14h]
  float v27; // [esp+44h] [ebp-10h]
  float v28[2]; // [esp+48h] [ebp-Ch] BYREF
  float v29; // [esp+50h] [ebp-4h]
  int v30; // [esp+5Ch] [ebp+8h]
  unsigned int v31; // [esp+5Ch] [ebp+8h]

  v5 = (char *)(this + 3) - (char *)a2;
  v6 = 12;
  v7 = a2;
  v30 = v5;
  while ( *(_DWORD *)((char *)v7 + v5) == *(_DWORD *)v7 )
  {
    v6 -= 4;
    ++v7;
    if ( v6 < 4 )
      goto LABEL_7;
    v5 = v30;
  }
  this[3] = *a2;
  this[4] = a2[1];
  this[5] = a2[2];
LABEL_7:
  this[5] = this[5] + 24.0;
  sub_104222B0(a3, v28, &v22, 0);
  v29 = 0.0;
  off_10689714();
  v8 = &v25;
  v31 = 12;
  this[6] = v28[0] * 100.0 + this[3];
  this[7] = v28[1] * 100.0 + this[4];
  this[8] = 100.0 * v29 + this[5];
  v9 = v22;
  v10 = v23;
  v11 = v24;
  v12 = v22 * -128.0 + this[6];
  v25 = v12;
  v13 = v12;
  v14 = v23 * -128.0 + this[7];
  v15 = v13;
  v26 = v14;
  v16 = v14;
  v17 = -128.0 * v24 + this[8];
  v18 = v16;
  v27 = v17;
  while ( *(_DWORD *)((char *)v8 + (char *)(this + 3) - (char *)&v25) == *(_DWORD *)v8 )
  {
    ++v8;
    v31 -= 4;
    if ( v31 < 4 )
    {
      v19 = v23;
      goto LABEL_12;
    }
  }
  this[3] = v15;
  this[4] = v18;
  v19 = v10;
  this[5] = v17;
LABEL_12:
  v25 = v9 * 128.0;
  v26 = v19 * 128.0;
  v27 = 128.0 * v11;
  sub_1028ABC0(this + 6, &v25);
  sub_10219BB0(v21);
  v21[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v21);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 16))(this, v21, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v21);
}
