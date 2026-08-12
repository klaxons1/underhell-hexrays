// bad sp value at call has been detected, the output may be wrong!
void __usercall CGrenadeHomer::Detonate(CGrenadeHomer *this@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  const char *v5; // ecx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  float *v9; // edi
  float v10; // eax
  int v11; // edx
  void (__stdcall *v12)(float *); // edx
  float v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  void (__thiscall *v17)(int, float *, int); // edx
  unsigned int v18; // eax
  int v19; // eax
  double v20; // st7
  int v21; // eax
  float v22; // eax
  int v23; // edx
  int v24; // eax
  float v26[20]; // [esp+108h] [ebp-15Ch] BYREF
  _BYTE v27[12]; // [esp+158h] [ebp-10Ch] BYREF
  int v28; // [esp+164h] [ebp-100h] BYREF
  _DWORD v29[8]; // [esp+1B0h] [ebp-B4h] BYREF
  _DWORD v30[8]; // [esp+1D0h] [ebp-94h] BYREF
  _DWORD v31[8]; // [esp+1F0h] [ebp-74h] BYREF
  float v32[8]; // [esp+210h] [ebp-54h] BYREF
  float v33; // [esp+230h] [ebp-34h] BYREF
  float v34; // [esp+234h] [ebp-30h]
  int v35; // [esp+238h] [ebp-2Ch]
  float v36; // [esp+23Ch] [ebp-28h]
  int v37; // [esp+240h] [ebp-24h]
  float v38; // [esp+244h] [ebp-20h]
  int v39; // [esp+248h] [ebp-1Ch]
  float v40; // [esp+24Ch] [ebp-18h] BYREF
  int v41; // [esp+250h] [ebp-14h]
  float v42; // [esp+254h] [ebp-10h]
  int v43; // [esp+258h] [ebp-Ch]
  void *v44; // [esp+25Ch] [ebp-8h]
  void *retaddr; // [esp+264h] [ebp+0h]

  v43 = a2;
  v44 = retaddr;
  sub_1040F290(this);
  v5 = (const char *)*((_DWORD *)this + 539);
  if ( !v5 )
    v5 = String;
  v6 = (*(int (__thiscall **)(int, _DWORD, int, const char *, int, int))(*(_DWORD *)dword_106B31D0 + 72))(
         dword_106B31D0,
         *((_DWORD *)this + 6),
         4,
         v5,
         a3,
         a4);
  sub_1023AF30(v6, v41, (_BYTE *)LODWORD(v42));
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(CGrenadeHomer *, char *))(*(_DWORD *)this + 480))(this, (char *)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10219BB0(v30);
  v30[0] = &CPASFilter::`vftable';
  sub_1021A370(v30, (int)this + 580);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v7 = *((float *)this + 532);
  v8 = (int)*off_1065C5EC;
  LODWORD(v42) = 67;
  *(float *)&v41 = 0.0;
  v9 = (float *)((char *)this + 580);
  (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, char *, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD, int))(v8 + 76))(
    off_1065C5EC,
    v30,
    0.0,
    (char *)this + 580,
    word_10696BA4,
    2.0,
    15,
    0,
    (int)*((float *)this + 528),
    (int)v7,
    0,
    67);
  if ( *((_DWORD *)this + 549) == 3 )
  {
    sub_10219BB0(v31);
    v31[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v31);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    ((void (__stdcall *)(_DWORD *, _DWORD, char *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, _DWORD, int, _DWORD, int, int, int, _DWORD))(*off_1065C5EC)[8])(
      v31,
      0.0,
      (char *)this + 580,
      16.0,
      1000.0,
      *((_DWORD *)this + 550),
      0,
      0,
      2,
      0.30000001,
      128.0,
      16,
      0.0,
      100,
      0,
      200,
      50,
      128,
      0);
    sub_10219BB0(v32);
    LODWORD(v32[0]) = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v32);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v42 = 0.0;
    v41 = 128;
    LODWORD(v40) = 50;
    v39 = 100;
    v10 = *((float *)this + 550);
    v38 = 0.0;
    v37 = 200;
    v36 = 0.0;
    v35 = 16;
    v11 = (int)*off_1065C5EC;
    v34 = 128.0;
    v12 = *(void (__stdcall **)(float *))(v11 + 32);
    v33 = 0.30000001;
    LODWORD(v32[7]) = 2;
    v32[6] = 0.0;
    v32[5] = 0.0;
    v32[4] = v10;
    v32[3] = 500.0;
    v32[2] = 16.0;
    LODWORD(v32[1]) = (char *)this + 580;
    v32[0] = 0.0;
    v12(v32);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v31);
  }
  if ( (*((_DWORD *)this + 63) & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v13 = *((float *)this + 120);
  v14 = *((int *)this + 121);
  v37 = *((int *)this + 119);
  v38 = v13;
  v39 = v14;
  off_10689714();
  v15 = *((_DWORD *)this + 63) >> 11;
  v40 = *(float *)&v37 * 60.0;
  *(float *)&v41 = v38 * 60.0;
  v42 = 60.0 * *(float *)&v39;
  if ( (v15 & 1) != 0 )
    sub_100DAE60((int)this);
  v16 = *((_DWORD *)this + 63) >> 11;
  v33 = *v9 + v40;
  v34 = *((float *)this + 146) + *(float *)&v41;
  *(float *)&v35 = *((float *)this + 147) + v42;
  if ( (v16 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_1001F180(v26, (float *)this + 145, &v33);
  sub_10265570(&v40, (int)this, 0);
  v17 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v42 = COERCE_FLOAT(v27);
  *(float *)&v41 = COERCE_FLOAT(&v40);
  v17(dword_106B31F4, v26, 16395);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v27, (int)&v28, 255, 0, 0, 1, 5.0);
  sub_10264E40((int)v27, (int)"Scorch");
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10261B70((float *)this + 145, 25.0, 150.0, 1.0, 750.0, 0, 0);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v18 = *((_DWORD *)this + 103);
  if ( v18 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 1];
  v20 = *((float *)this + 528);
  v42 = 0.0;
  *(float *)&v41 = 0.0;
  v40 = v20;
  v39 = (int)this + 580;
  v21 = sub_10248110((int)v26, (int)this, v19, *((float *)this + 532), 64, 0);
  sub_100C9F20(v21, v39, v40, v41, SLODWORD(v42));
  sub_10165630(v29, (int)this, (int)"GrenadeHomer.StopSounds");
  v22 = *((float *)this + 6);
  v42 = 0.0;
  *(float *)&v41 = 0.0;
  v23 = *(_DWORD *)dword_106B31D0;
  v40 = 0.0;
  *(float *)&v39 = COERCE_FLOAT("GrenadeHomer.StopSounds");
  v38 = v22;
  v24 = (*(int (__thiscall **)(int))(v23 + 72))(dword_106B31D0);
  sub_1023C580((int)v9, (int)this, v29, v24, SLODWORD(v38), v39, v40, v41);
  sub_1025FAC0((int)this);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v30);
}
