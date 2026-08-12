// bad sp value at call has been detected, the output may be wrong!
void __usercall CGrenadePathfollower::Detonate(
        CGrenadePathfollower *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>)
{
  const char *v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  double v11; // st7
  int v12; // eax
  float *v13; // edi
  int v14; // edx
  float v15; // eax
  int v16; // edx
  int v17; // eax
  void (__thiscall *v18)(int, float *, int); // edx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  int v22; // eax
  float v23; // eax
  int v24; // edx
  int v25; // eax
  float v27[20]; // [esp+70h] [ebp-11Ch] BYREF
  _BYTE v28[12]; // [esp+C0h] [ebp-CCh] BYREF
  int v29; // [esp+CCh] [ebp-C0h] BYREF
  _DWORD v30[8]; // [esp+118h] [ebp-74h] BYREF
  _DWORD v31[8]; // [esp+138h] [ebp-54h] BYREF
  float v32[3]; // [esp+158h] [ebp-34h] BYREF
  float v33; // [esp+164h] [ebp-28h]
  int v34; // [esp+168h] [ebp-24h]
  float v35; // [esp+16Ch] [ebp-20h]
  float v36; // [esp+170h] [ebp-1Ch]
  float v37; // [esp+174h] [ebp-18h] BYREF
  int v38; // [esp+178h] [ebp-14h]
  float v39; // [esp+17Ch] [ebp-10h]
  int v40; // [esp+180h] [ebp-Ch]
  void *v41; // [esp+184h] [ebp-8h]
  void *retaddr; // [esp+18Ch] [ebp+0h]

  v40 = a2;
  v41 = retaddr;
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
  sub_1023AF30(v6, v38, (_BYTE *)LODWORD(v39));
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(CGrenadePathfollower *, char *))(*(_DWORD *)this + 480))(this, (char *)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  v7 = *((_DWORD *)this + 536);
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] == v9 )
          v10 = *v8;
        else
          v10 = 0;
        sub_1025FAC0(v10);
        *((_DWORD *)this + 536) = -1;
      }
    }
  }
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10219BB0(v31);
  v31[0] = &CPASFilter::`vftable';
  sub_1021A370(v31, (int)this + 580);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v11 = *((float *)this + 532);
  v12 = (int)*off_1065C5EC;
  LODWORD(v39) = 67;
  *(float *)&v38 = 0.0;
  v13 = (float *)((char *)this + 580);
  (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, char *, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD, int))(v12 + 76))(
    off_1065C5EC,
    v31,
    0.0,
    (char *)this + 580,
    word_10696BA4,
    0.5,
    15,
    0,
    (int)*((float *)this + 528),
    (int)v11,
    0,
    67);
  if ( (*((_DWORD *)this + 63) & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v14 = *((int *)this + 119);
  v15 = *((float *)this + 120);
  v36 = *((float *)this + 121);
  v34 = v14;
  v35 = v15;
  off_10689714();
  v16 = *((_DWORD *)this + 63) >> 11;
  v37 = *(float *)&v34 * 60.0;
  *(float *)&v38 = v35 * 60.0;
  v39 = 60.0 * v36;
  if ( (v16 & 1) != 0 )
    sub_100DAE60((int)this);
  v17 = *((_DWORD *)this + 63) >> 11;
  v32[0] = *v13 + v37;
  v32[1] = *((float *)this + 146) + *(float *)&v38;
  v32[2] = *((float *)this + 147) + v39;
  if ( (v17 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_1001F180(v27, (float *)this + 145, v32);
  sub_10265570(&v37, (int)this, 0);
  v18 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v39 = COERCE_FLOAT(v28);
  *(float *)&v38 = COERCE_FLOAT(&v37);
  v18(dword_106B31F4, v27, 16395);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v28, (int)&v29, 255, 0, 0, 1, 5.0);
  sub_10264E40((int)v28, (int)"Scorch");
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10261B70((float *)this + 145, 25.0, 150.0, 1.0, 750.0, 0, 0);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1023D4B0(8, (float *)this + 145, 400, 0.2, 0, 0, 0);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v19 = *((float *)this + 528);
  v39 = 0.0;
  *(float *)&v38 = 0.0;
  v37 = v19;
  LODWORD(v36) = (char *)this + 580;
  v20 = *((float *)this + 532);
  v35 = 0.0;
  v34 = 64;
  v33 = v20;
  v21 = sub_100F4030(this);
  v22 = sub_10248110((int)v27, (int)this, v21, v33, v34, SLODWORD(v35));
  sub_100C9F20(v22, SLODWORD(v36), v37, v38, SLODWORD(v39));
  sub_10165630(v30, (int)this, (int)"GrenadePathfollower.StopSounds");
  v23 = *((float *)this + 6);
  v39 = 0.0;
  *(float *)&v38 = 0.0;
  v24 = *(_DWORD *)dword_106B31D0;
  v37 = 0.0;
  v36 = COERCE_FLOAT("GrenadePathfollower.StopSounds");
  v35 = v23;
  v25 = (*(int (__thiscall **)(int))(v24 + 72))(dword_106B31D0);
  sub_1023C580((int)v13, (int)this, v30, v25, SLODWORD(v35), SLODWORD(v36), v37, v38);
  sub_1025FAC0((int)this);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v30);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v31);
}
