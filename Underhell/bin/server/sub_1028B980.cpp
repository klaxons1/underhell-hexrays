int __thiscall sub_1028B980(_DWORD *this, float *a2, int a3)
{
  float v4; // ecx
  float v5; // edx
  int v6; // edi
  double v7; // st7
  double v8; // st4
  double v9; // st6
  double v10; // st1
  double v11; // rtt
  double v12; // st1
  double v13; // st3
  double v14; // st2
  double v15; // st5
  double v16; // rt2
  double v17; // st2
  double v18; // rt0
  float *v19; // eax
  float *v20; // edi
  unsigned int v21; // ecx
  double v22; // st1
  double v23; // st5
  double v24; // st2
  double v25; // rtt
  double v26; // st1
  double v27; // rt0
  double v28; // st1
  double v29; // st5
  double v30; // st2
  _DWORD v32[8]; // [esp+Ch] [ebp-4Ch] BYREF
  float v33; // [esp+2Ch] [ebp-2Ch] BYREF
  float v34; // [esp+30h] [ebp-28h]
  float v35; // [esp+34h] [ebp-24h]
  float v36; // [esp+38h] [ebp-20h] BYREF
  float v37; // [esp+3Ch] [ebp-1Ch]
  float v38; // [esp+40h] [ebp-18h]
  float v39; // [esp+44h] [ebp-14h] BYREF
  float v40; // [esp+48h] [ebp-10h]
  float v41; // [esp+4Ch] [ebp-Ch]
  int v42; // [esp+50h] [ebp-8h]
  int v43; // [esp+54h] [ebp-4h]
  int v44; // [esp+60h] [ebp+8h]
  int v45; // [esp+64h] [ebp+Ch]

  if ( this[51] != 6 )
    this[51] = 6;
  v4 = *a2;
  v5 = a2[1];
  v41 = a2[2];
  v39 = v4;
  v6 = 0;
  v41 = v41 + 24.0;
  v40 = v5;
  sub_104222B0(a3, &v33, &v36, 0);
  v35 = 0.0;
  off_10689714();
  v7 = v33;
  v44 = 0;
  v8 = v34;
  v9 = v35;
  v10 = v33 * 100.0 + v39 - v36 * 128.0;
  v39 = v10;
  v11 = v10;
  v12 = v34 * 100.0 + v40 - v37 * 128.0;
  v13 = v11;
  v40 = v12;
  v14 = 100.0 * v35 + v41 - 128.0 * v38;
  v15 = v12;
  v41 = v14;
  if ( (int)this[51] > 0 )
  {
    v45 = 0;
    while ( 1 )
    {
      v19 = &v39;
      v20 = (float *)((char *)this + v6 + 12);
      v21 = 12;
      while ( *(_DWORD *)((char *)v19 + (char *)v20 - (char *)&v39) == *(_DWORD *)v19 )
      {
        v21 -= 4;
        ++v19;
        if ( v21 < 4 )
          goto LABEL_11;
      }
      *v20 = v13;
      v20[1] = v15;
      v20[2] = v14;
LABEL_11:
      v42 = this[51];
      v6 = v45 + 12;
      v45 += 12;
      v43 = 128 / v42;
      v22 = (double)(128 / v42);
      ++v44;
      v23 = v15 + v37 * v22;
      v24 = v14 + v22 * v38;
      v25 = 30.0 / (double)v42;
      v26 = v13 + v36 * v22 + v7 * v25;
      v39 = v26;
      v27 = v26;
      v28 = v23 + v8 * v25;
      v29 = v27;
      v40 = v28;
      v30 = v24 + v25 * v9;
      v41 = v30;
      if ( v44 >= v42 )
        break;
      v16 = v30;
      v17 = v29;
      v15 = v28;
      v18 = v17;
      v14 = v16;
      v13 = v18;
    }
  }
  sub_10219BB0(v32);
  v32[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v32);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 16))(this, v32, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
}
