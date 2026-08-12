void __userpurge sub_1032ACF0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, float a5)
{
  int v6; // eax
  float *v7; // edi
  int v8; // ebx
  char *v9; // eax
  int v10; // ecx
  double v11; // st4
  double v12; // st6
  double v13; // st7
  double v14; // st7
  double v15; // rt2
  double v16; // st7
  double v17; // st7
  double v18; // st6
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  double v23; // st6
  double v24; // st7
  int v25; // [esp+34h] [ebp-F4h]
  float v26; // [esp+34h] [ebp-F4h]
  float v27; // [esp+34h] [ebp-F4h]
  int v31[20]; // [esp+44h] [ebp-E4h] BYREF
  _DWORD v32[8]; // [esp+94h] [ebp-94h] BYREF
  float v33[3]; // [esp+B4h] [ebp-74h] BYREF
  int v34; // [esp+C0h] [ebp-68h] BYREF
  int v35; // [esp+C4h] [ebp-64h]
  int v36; // [esp+C8h] [ebp-60h]
  float v37; // [esp+CCh] [ebp-5Ch]
  float v38; // [esp+D0h] [ebp-58h]
  float v39; // [esp+D4h] [ebp-54h]
  float v40; // [esp+E0h] [ebp-48h]
  int v41; // [esp+100h] [ebp-28h]
  char v42[4]; // [esp+108h] [ebp-20h]
  float *v43; // [esp+10Ch] [ebp-1Ch]
  float v44; // [esp+110h] [ebp-18h] BYREF
  float v45; // [esp+114h] [ebp-14h]
  float v46; // [esp+118h] [ebp-10h]
  int v47; // [esp+11Ch] [ebp-Ch] BYREF
  float v48; // [esp+120h] [ebp-8h]
  float v49; // [esp+124h] [ebp-4h]
  int savedregs; // [esp+128h] [ebp+0h] BYREF
  float v51; // [esp+130h] [ebp+8h]

  v6 = *(_DWORD *)(a1 + 252) >> 11;
  *(float *)&v47 = a5 * *(float *)(a1 + 3624);
  v48 = *(float *)(a1 + 3628) * a5;
  v49 = a5 * *(float *)(a1 + 3632);
  if ( (v6 & 1) != 0 )
    sub_100DAE60(a1);
  v7 = (float *)(a1 + 580);
  v25 = *(_DWORD *)(a1 + 1676);
  v8 = 0;
  v44 = *(float *)(a1 + 580) + *(float *)&v47;
  v45 = *(float *)(a1 + 584) + v48;
  v46 = *(float *)(a1 + 588) + v49;
  v43 = (float *)sub_10073730(v25);
  v9 = sub_10073710(*(_DWORD *)(a1 + 1676));
  v10 = *(_DWORD *)(a1 + 252) >> 11;
  *(_DWORD *)v42 = v9;
  if ( (v10 & 1) != 0 )
    sub_100DAE60(a1);
  sub_100231A0((int)&savedregs, a1, (float *)(a1 + 580), &v44, *(float **)v42, v43, 33570827, a1, 0, (int)v33);
  if ( v41 )
  {
    v8 = v41;
    if ( (*(int (**)(void))(*(_DWORD *)v41 + 220))() != 16
      && *(char **)(v8 + 92) != "item_battery"
      && !sub_100D6240((_DWORD *)v8, "item_battery") )
    {
      if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v8 + 24)) )
      {
        sub_10248110((int)v31, a1, a1, *(float *)(dword_106E5624 + 44), 128, 0);
        *(float *)&v47 = *(float *)&v34 - v33[0];
        v48 = *(float *)&v35 - v33[1];
        v49 = *(float *)&v36 - v33[2];
        sub_10248690((float *)v31, (float *)&v47, (float *)&v34, 1.0);
        sub_100D9E70((int *)v8, a1, v31);
      }
      sub_1032A9D0(a1, v8);
    }
  }
  if ( 1.0 != v40 )
  {
    if ( a5 > 0.0 )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v11 = *(float *)(a1 + 584) - v45;
      v12 = *(float *)(a1 + 588) - v46;
      v26 = (*v7 - v44) * (*v7 - v44) + v11 * v11 + v12 * v12;
      v13 = off_10689708(v26);
      v14 = v13 * (1.0 - v40);
      v15 = 1.0 / a5;
      *(float *)&v47 = v37 * v14 * v15;
      v48 = v38 * v14 * v15;
      v16 = v14 * v39 * v15;
      v49 = v16;
      if ( v16 < 0.0 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        sub_1008D510(a1, a1 + 580);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v51 = v16;
        if ( fabs(*(float *)(a1 + 588) - v51) >= 36.0 )
          v16 = v49;
        else
          v16 = 0.0;
      }
      v17 = v16 + *(float *)(a1 + 3632);
      v18 = *(float *)(a1 + 3628) + v48;
      *(float *)(a1 + 3624) = *(float *)&v47 + *(float *)(a1 + 3624);
      *(float *)(a1 + 3628) = v18;
      *(float *)(a1 + 3632) = v17;
    }
    if ( v8 && (v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 288))(v8)) != 0 )
    {
      v27 = *(float *)(dword_106E5624 + 44);
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 276))(v19);
      sub_100E84B0(v34, v35, v36, (int)&flt_106B4F40, v20, v27);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 248) & 2) == 0 )
        sub_10328900((_BYTE *)a1, (int)"Shoot");
      v21 = *(_DWORD *)(a1 + 252) >> 11;
      *(float *)&v47 = v37 * 24.0;
      v48 = v38 * 24.0;
      v49 = 24.0 * v39;
      if ( (v21 & 1) != 0 )
        sub_100DAE60(a1);
      v22 = *(_DWORD *)(a1 + 252) >> 11;
      v23 = *(float *)(a1 + 584) - v48;
      v24 = *(float *)(a1 + 588) - v49;
      v44 = *v7 - *(float *)&v47;
      v45 = v23;
      v46 = v24;
      if ( (v22 & 1) != 0 )
        sub_100DAE60(a1);
      sub_1002A5F0((int)&savedregs, a1, (float *)(a1 + 580), &v44, 16395, a1, 0, (int)v33);
      if ( 1.0 != v40 )
      {
        ((void (__thiscall *)(int (__stdcall ***)(char), int *, int, int, _DWORD, int, int, int))(*off_1061B7A0)[3])(
          off_1061B7A0,
          &v34,
          1,
          1,
          0,
          a3,
          a4,
          a2);
        sub_10219BB0(v32);
        v32[0] = &CBroadcastRecipientFilter::`vftable';
        sub_1021A200((int)v32);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        ((void (__stdcall *)(_DWORD *, _DWORD, int, int, int, int, _DWORD))(*off_1065C5EC)[18])(
          v32,
          0.0,
          a1 + 580,
          255,
          180,
          100,
          0);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v32);
      }
    }
  }
}
