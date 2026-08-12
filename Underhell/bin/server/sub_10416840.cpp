void __thiscall sub_10416840(int this, _BYTE *a2)
{
  int v3; // eax
  float v4; // eax
  float v5; // ecx
  int v6; // edx
  void *v7; // edi
  bool v8; // zf
  int v9; // edx
  int v10; // edx
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  double v18; // st7
  int v19; // eax
  void (__thiscall *v20)(int, int); // edx
  float v21; // edx
  float v22; // eax
  int v23; // edx
  int v24; // [esp+34h] [ebp-CCh]
  int v25; // [esp+34h] [ebp-CCh]
  float v26; // [esp+38h] [ebp-C8h]
  int v27[8]; // [esp+48h] [ebp-B8h] BYREF
  _DWORD v28[8]; // [esp+68h] [ebp-98h] BYREF
  float v29[3]; // [esp+88h] [ebp-78h] BYREF
  float v30[3]; // [esp+94h] [ebp-6Ch] BYREF
  float v31; // [esp+A0h] [ebp-60h] BYREF
  float v32; // [esp+A4h] [ebp-5Ch]
  float v33; // [esp+A8h] [ebp-58h]
  float v34; // [esp+ACh] [ebp-54h]
  float v35; // [esp+B0h] [ebp-50h]
  float v36; // [esp+B4h] [ebp-4Ch]
  float v37; // [esp+CCh] [ebp-34h]
  int v38; // [esp+D0h] [ebp-30h]
  int v39; // [esp+D4h] [ebp-2Ch]
  int v40; // [esp+D8h] [ebp-28h]
  __int16 v41; // [esp+DCh] [ebp-24h]
  int v42; // [esp+E0h] [ebp-20h]
  int v43; // [esp+E4h] [ebp-1Ch]
  float v44; // [esp+E8h] [ebp-18h]
  float v45; // [esp+ECh] [ebp-14h]
  float v46; // [esp+F0h] [ebp-10h]
  float v47; // [esp+F4h] [ebp-Ch] BYREF
  float v48; // [esp+F8h] [ebp-8h]
  float v49; // [esp+FCh] [ebp-4h]

  if ( a2[361] && (a2[356] & 4) == 0 )
  {
    if ( *(int *)(this + 2108) < 10 && !*(_BYTE *)(this + 447) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      ((void (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD))(*off_1061B7A0)[3])(
        off_1061B7A0,
        this + 580,
        1,
        1,
        0);
    }
    if ( a2 && a2[225] )
    {
      v3 = __RTDynamicCast(
             (int)a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseAnimating `RTTI Type Descriptor',
             0);
      if ( v3 )
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 808))(v3, 90.0, 1, 0.0, 0);
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v4 = *(float *)(this + 480);
      v5 = *(float *)(this + 484);
      v47 = *(float *)(this + 476);
      v47 = v47 * 0.1;
      v48 = v4 * 0.1;
      v49 = 0.1 * v5;
      sub_100DD660(this, &v47);
      sub_100E0970(this, v6, 5, 1);
      *(float *)(this + 552) = 1.0;
      sub_10416700(this, 0.5);
    }
    else
    {
      v7 = sub_101C46A0();
      sub_10079DC0(v30, (int)v7);
      v8 = *(_DWORD *)(this + 2108) == 0;
      v37 = *((float *)v7 + 14);
      v38 = *((_DWORD *)v7 + 15);
      v39 = *((_DWORD *)v7 + 16);
      v40 = *((_DWORD *)v7 + 17);
      v41 = *((_WORD *)v7 + 36);
      v42 = *((_DWORD *)v7 + 19);
      v9 = *((_DWORD *)v7 + 20);
      v43 = v9;
      if ( v8
        && (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, (__int16)v39)
        && (v44 = v31 - v30[0], v45 = v32 - v30[1], v46 = v33 - v30[2], off_10689714(), v36 > -0.5)
        && v36 * v46 + v35 * v45 + v34 * v44 < -0.89999998 )
      {
        sub_10023400((unsigned __int16 *)this, 4);
        sub_10023430((unsigned __int16 *)this, 8);
        v29[0] = v34 * 2.0 + v31;
        v29[1] = v35 * 2.0 + v32;
        v29[2] = 2.0 * v36 + v33;
        sub_1025F370((void *)this, v29, 0);
        sub_100DD660(this, &flt_106F1CA8);
        sub_100E0970(this, v10, 0, 0);
        *(_DWORD *)(this + 196) = sub_10415BC0;
        v11 = (**(int (__thiscall ***)(void *, const char *))off_106169EC)(off_106169EC, "SmallScorch");
        if ( v11 >= 0 )
        {
          sub_100E8830(v28);
          v12 = (int)*off_1065C5EC;
          v24 = v43;
          v13 = sub_1025FD10(v42);
          (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, float *, int, int, int))(v12 + 68))(
            off_1065C5EC,
            v28,
            0.0,
            &v31,
            v30,
            v13,
            v24,
            v11);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
        }
        sub_10165630(v27, this, (int)"Flare.Touch");
        v14 = sub_1001F3C0((_DWORD *)this);
        sub_1023C580(v11, this, v27, v14, (int)"Flare.Touch", 0, 0.0, 0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
      }
      else
      {
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        if ( *(float *)(this + 480) * *(float *)(this + 480)
           + *(float *)(this + 476) * *(float *)(this + 476)
           + *(float *)(this + 484) * *(float *)(this + 484) > 62500.0 )
        {
          v15 = (**(int (__thiscall ***)(void *, const char *))off_106169EC)(off_106169EC, "FadingScorch");
          if ( v15 >= 0 )
          {
            sub_10219BB0(v28);
            v28[0] = &CBroadcastRecipientFilter::`vftable';
            sub_1021A200((int)v28);
            v16 = (int)*off_1065C5EC;
            v25 = v43;
            v17 = sub_1025FD10(v42);
            (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, float *, int, int, int))(v16 + 68))(
              off_1065C5EC,
              v28,
              0.0,
              &v31,
              v30,
              v17,
              v25,
              v15);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
          }
        }
        sub_100E0970(this, v9, 5, 1);
        v18 = sub_10260720(640.0);
        v19 = *(_DWORD *)this;
        *(float *)(this + 552) = v18;
        v20 = *(void (__thiscall **)(int, int))(v19 + 76);
        ++*(_DWORD *)(this + 2108);
        v20(this, this);
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        v21 = *(float *)(this + 480);
        v22 = *(float *)(this + 484);
        v47 = *(float *)(this + 476);
        v47 = v47 * 0.80000001;
        v49 = v22;
        v48 = 0.80000001 * v21;
        sub_100DD660(this, &v47);
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        v26 = *(float *)(this + 484) * *(float *)(this + 484)
            + *(float *)(this + 476) * *(float *)(this + 476)
            + *(float *)(this + 480) * *(float *)(this + 480);
        if ( off_10689708(v26) < 64.0 )
        {
          sub_100DD660(this, &flt_106F1CA8);
          sub_100E0970(this, v23, 0, 0);
          sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFFB);
          sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
          *(_DWORD *)(this + 196) = sub_10415BC0;
        }
      }
    }
  }
}
