int __thiscall sub_1014B430(int this, float *a2, int a3, float *a4, int a5, float a6, float a7, int a8)
{
  float v8; // edx
  bool v10; // zf
  float v11; // ecx
  float v13; // ecx
  float v14; // edx
  float v15; // ecx
  int v16; // edi
  int v17; // ebx
  double v18; // st7
  double v19; // st5
  double v20; // st6
  double v21; // st4
  double v22; // st7
  _DWORD v24[8]; // [esp+48h] [ebp-40h] BYREF
  float v25; // [esp+68h] [ebp-20h] BYREF
  float v26; // [esp+6Ch] [ebp-1Ch]
  float v27; // [esp+70h] [ebp-18h]
  float v28; // [esp+74h] [ebp-14h] BYREF
  float v29; // [esp+78h] [ebp-10h]
  float v30; // [esp+7Ch] [ebp-Ch]
  int v31; // [esp+80h] [ebp-8h]
  int v32; // [esp+84h] [ebp-4h]
  int v33; // [esp+90h] [ebp+8h]
  int v34; // [esp+98h] [ebp+10h]

  v8 = a2[1];
  v10 = *(_DWORD *)(this + 1020) == 1;
  v11 = *a2;
  v30 = a2[2];
  v28 = v11;
  v13 = *a4;
  v29 = v8;
  v14 = a4[1];
  v25 = v13;
  v15 = a4[2];
  v26 = v14;
  v27 = v15;
  if ( v10 )
  {
    v16 = 89;
    v17 = 120;
    v18 = *(float *)(this + 992) * 8.0;
    v31 = 83;
    v19 = *(float *)(this + 996);
    v32 = 99;
    v34 = 76;
    v33 = 21;
    v20 = 8.0 * *(float *)(this + 1000);
    v28 = v28 - v18;
    v29 = v29 - v19 * 8.0;
    v30 = v30 - v20;
    v21 = a4[2];
    v22 = a4[1] * -0.75;
    v25 = *a4 * -0.75;
    v26 = v22;
    v27 = -0.75 * v21;
  }
  else
  {
    v16 = 255;
    v17 = 255;
    v31 = 255;
    v32 = 255;
    v34 = 255;
    v33 = 255;
  }
  sub_10219BB0(v24);
  v24[0] = &CPASFilter::`vftable';
  sub_1021A370(&v28);
  ((void (__stdcall *)(_DWORD *, _DWORD, float *, int, float *, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int))(*off_1065C5EC)[20])(
    v24,
    0.0,
    &v28,
    a3,
    &v25,
    a5,
    LODWORD(a6),
    LODWORD(a7),
    4.0,
    *(_DWORD *)(this + 1020),
    v16,
    v17,
    v31,
    v32,
    v34,
    v33);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v24);
}
