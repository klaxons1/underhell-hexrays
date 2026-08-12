void __thiscall sub_102D1D40(char *this, int a2, float *a3, float *a4, int a5, int a6)
{
  double v8; // st7
  double v9; // st5
  double v10; // rt0
  double v11; // st5
  double v12; // rt1
  double v13; // st5
  double v14; // st6
  double v15; // st7
  double v16; // st5
  double v17; // st7
  double (__thiscall *v18)(int, _DWORD, _DWORD); // edx
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // rt2
  double v24; // rtt
  float v25; // eax
  int v26; // edx
  int (__thiscall *v27)(char *, char *, _DWORD); // edx
  float *v28; // eax
  const char *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  float v33; // [esp+2Ch] [ebp-B8h]
  int v34; // [esp+2Ch] [ebp-B8h]
  char v35[12]; // [esp+3Ch] [ebp-A8h] BYREF
  float v36[3]; // [esp+48h] [ebp-9Ch] BYREF
  _DWORD v37[8]; // [esp+54h] [ebp-90h] BYREF
  int v38; // [esp+74h] [ebp-70h] BYREF
  const char *v39; // [esp+78h] [ebp-6Ch]
  float v40; // [esp+7Ch] [ebp-68h]
  int v41; // [esp+80h] [ebp-64h]
  int v42; // [esp+84h] [ebp-60h]
  int v43; // [esp+88h] [ebp-5Ch]
  int v44; // [esp+8Ch] [ebp-58h]
  float v45; // [esp+90h] [ebp-54h]
  int v46; // [esp+94h] [ebp-50h]
  __int16 v47; // [esp+98h] [ebp-4Ch]
  char v48; // [esp+9Ah] [ebp-4Ah]
  int v49; // [esp+9Ch] [ebp-48h]
  int v50; // [esp+A0h] [ebp-44h]
  int v51; // [esp+A4h] [ebp-40h]
  int v52; // [esp+A8h] [ebp-3Ch]
  int v53; // [esp+ACh] [ebp-38h]
  int v54; // [esp+B0h] [ebp-34h]
  __int16 v55; // [esp+B4h] [ebp-30h]
  float v56; // [esp+B8h] [ebp-2Ch]
  float v57; // [esp+BCh] [ebp-28h]
  float v58; // [esp+C0h] [ebp-24h]
  float v59; // [esp+C4h] [ebp-20h]
  float v60; // [esp+C8h] [ebp-1Ch]
  float i; // [esp+CCh] [ebp-18h]
  float v62; // [esp+D0h] [ebp-14h]
  float v63; // [esp+D4h] [ebp-10h]
  float v64; // [esp+D8h] [ebp-Ch]
  float v65; // [esp+DCh] [ebp-8h]
  float v66; // [esp+E0h] [ebp-4h]
  int v67; // [esp+F4h] [ebp+10h]

  v8 = a4[2] * 0.0;
  v67 = 0;
  v9 = a4[1] - v8;
  v56 = v9;
  v10 = v9;
  v11 = v8 - *a4;
  v57 = v11;
  v12 = v11;
  v13 = *a4 * 0.0 - 0.0 * a4[1];
  v58 = v13;
  v14 = -v10;
  v15 = -v12;
  v16 = -v13;
  v59 = v16 * a4[1] - v15 * a4[2];
  v60 = v14 * a4[2] - v16 * *a4;
  for ( i = v15 * *a4 - v14 * a4[1]; v67 < a2; ++v67 )
  {
    do
    {
      v65 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5);
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5);
      v18 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v66 = v17 + v65;
      v65 = v18(dword_106B31E4, -0.5, 0.5);
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5);
      v20 = v19 + v65;
    }
    while ( v20 * v20 + v66 * v66 > 1.0 );
    v21 = v20 * flt_10662E44[3 * *((_DWORD *)this + 208)];
    v22 = v66 * flt_10662E40[3 * *((_DWORD *)this + 208)];
    v23 = v57 * v22 + a4[1];
    v24 = v22 * v58 + a4[2];
    v62 = v59 * v21 + v22 * v56 + *a4;
    v63 = v23 + v60 * v21;
    v64 = v21 * i + v24;
    v25 = COERCE_FLOAT(sub_1040E4C0(a5, a3));
    v26 = *((_DWORD *)this + 351);
    v33 = *((float *)this + 350);
    v66 = v25;
    sub_1040E360(v26, v33);
    *(float *)&v34 = (float)*((int *)this + 204);
    sub_1040EDE0(v62, v63, v64, *((float *)this + 349), *((float *)this + 352), *((float *)this + 353), v34);
    if ( *((_DWORD *)this + 354) )
    {
      v66 = COERCE_FLOAT((*(int (__thiscall **)(char *))(*(_DWORD *)this + 580))(this));
      sub_10219BB0(v37);
      v37[0] = &CPASFilter::`vftable';
      sub_1021A370(v37, SLODWORD(v66));
      v27 = *(int (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)this + 580);
      v37[0] = &CPASAttenuationFilter::`vftable';
      v28 = (float *)v27(this, v35, 0.60000002);
      sub_1021A0E0(v37, v28, COERCE_FLOAT(v36));
      v45 = 0.0;
      v55 = -1;
      v29 = (const char *)*((_DWORD *)this + 354);
      v42 = 0;
      v43 = 100;
      v44 = 0;
      v46 = 0;
      v47 = 1;
      v48 = 0;
      v49 = -1;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v38 = 1;
      v39 = v29;
      if ( !v29 )
        v39 = String;
      v30 = *((_DWORD *)this + 6);
      v40 = 1.0;
      v41 = 85;
      v31 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v30);
      sub_1023BE40(v37, v31, (int)&v38);
      v32 = v50;
      v53 = 0;
      if ( v52 >= 0 )
      {
        if ( v50 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v50);
          v32 = 0;
          v50 = 0;
        }
        v51 = 0;
      }
      v54 = v32;
      if ( v52 >= 0 )
      {
        if ( v32 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32);
          v50 = 0;
        }
        v51 = 0;
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v37);
    }
  }
  sub_102D19C0(this, a2, a3, a4, a5, a6);
}
