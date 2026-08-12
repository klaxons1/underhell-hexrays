int __usercall sub_100F2F50@<eax>(int a1@<ecx>, int a2@<edi>)
{
  double v4; // st7
  int v5; // ecx
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  float v11; // [esp+38h] [ebp-54h]
  float v12; // [esp+38h] [ebp-54h]
  float v13; // [esp+3Ch] [ebp-50h]
  _DWORD v14[8]; // [esp+44h] [ebp-48h] BYREF
  float v15[3]; // [esp+64h] [ebp-28h] BYREF
  int v16; // [esp+70h] [ebp-1Ch] BYREF
  float v17; // [esp+74h] [ebp-18h]
  float v18; // [esp+78h] [ebp-14h]
  float v19; // [esp+7Ch] [ebp-10h]
  float v20; // [esp+80h] [ebp-Ch]
  float v21; // [esp+84h] [ebp-8h]
  float v22; // [esp+88h] [ebp-4h]

  if ( !sub_100DCD90(a1) )
    return sub_100D6A00((void *)a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v13 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
      + *(float *)(a1 + 476) * *(float *)(a1 + 476)
      + *(float *)(a1 + 484) * *(float *)(a1 + 484);
  v4 = off_10689708(v13);
  v5 = *(_DWORD *)(a1 + 252);
  v22 = v4;
  if ( (v5 & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v6 = *(_DWORD *)(a1 + 252) >> 11;
  v19 = *(float *)(a1 + 476) * 0.5;
  v20 = *(float *)(a1 + 480) * 0.5;
  v21 = 0.5 * *(float *)(a1 + 484);
  if ( (v6 & 1) != 0 )
    sub_100DAE60(a1);
  *(float *)&v16 = *(float *)(a1 + 580) + v19;
  v17 = *(float *)(a1 + 584) + v20;
  v18 = *(float *)(a1 + 588) + v21;
  sub_1023D4B0(8, (int)&v16, (int)v22, 0.2, 0, 0, 0);
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.050000001,
          0.1,
          0)
      + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)a1, v11, a2);
  if ( *(_BYTE *)(a1 + 447) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    *(float *)&v16 = *(float *)(a1 + 476) * 0.5;
    v17 = *(float *)(a1 + 480) * 0.5;
    v18 = 0.5 * *(float *)(a1 + 484);
    sub_100DD660(a1, (float *)&v16);
  }
  v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -4.0,
          4.0);
  v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -4.0,
          4.0);
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -4.0,
         4.0);
  v8 = *(_DWORD *)(a1 + 252);
  v21 = v7;
  if ( (v8 & 0x800) != 0 )
    sub_100DAE60(a1);
  v9 = *(_DWORD *)(a1 + 252) >> 11;
  v15[0] = *(float *)(a1 + 580) + v19;
  v15[1] = *(float *)(a1 + 584) + v20;
  v15[2] = *(float *)(a1 + 588) + v21;
  if ( (v9 & 1) != 0 )
    sub_100DAE60(a1);
  sub_10219BB0(v14);
  v14[0] = &CPVSFilter::`vftable';
  sub_1021A300(a1 + 580);
  v10 = (int)*off_1065C5EC;
  v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.5,
          0.80000001);
  (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, int, _DWORD))(v10 + 128))(
    off_1065C5EC,
    v14,
    0.0,
    v15,
    dword_10698CA0,
    LODWORD(v12));
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
}
