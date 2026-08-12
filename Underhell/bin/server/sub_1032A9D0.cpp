void __usercall sub_1032A9D0(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  float v4; // edx
  float v5; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st7
  int v9; // edi
  int v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // ecx
  int *v14; // ecx
  unsigned int v15; // eax
  _DWORD v16[8]; // [esp+68h] [ebp-30h] BYREF
  float v17; // [esp+88h] [ebp-10h] BYREF
  float v18; // [esp+8Ch] [ebp-Ch]
  float v19; // [esp+90h] [ebp-8h]
  float v20; // [esp+94h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 252) & 1) == 0 )
  {
    v3 = 4;
    do
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v4 = *(float *)(a1 + 584);
      v5 = *(float *)(a1 + 588);
      v17 = *(float *)(a1 + 580);
      v19 = v5;
      v18 = v4;
      v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -12.0,
             12.0);
      v17 = v6 + v17;
      v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -12.0,
             12.0);
      v18 = v7 + v18;
      v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -12.0,
             12.0);
      v19 = v8 + v19;
      ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
        off_1061B7A0,
        &v17,
        1,
        1,
        0);
      --v3;
    }
    while ( v3 );
    sub_10219BB0(v16);
    v16[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v16);
    v9 = (int)*off_1065C5EC;
    v10 = (*(int (__thiscall **)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 576))(
            a1,
            255,
            180,
            100,
            0,
            100.0,
            0.1,
            0.0);
    (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, int))(v9 + 72))(off_1065C5EC, v16, 0.0, v10);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
    sub_1013D530(v11, (float *)(a1 + 704), a1, 64, 64, 0, 0.0, 0, 0, -1);
    v12 = *(_DWORD *)(a1 + 3848);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 832);
      v9 = v12 + 832;
      v20 = 0.0;
      if ( v13 != COERCE_INT(0.0) )
      {
        if ( *(_BYTE *)(v12 + 84) )
        {
          *(_BYTE *)(v12 + 88) |= 1u;
        }
        else
        {
          v14 = *(int **)(v12 + 24);
          if ( v14 )
            sub_100194B0(v14, 832);
        }
        *(float *)v9 = 0.0;
      }
      sub_1025FAC0(*(_DWORD *)(a1 + 3848));
      *(_DWORD *)(a1 + 3848) = 0;
    }
    v15 = *(_DWORD *)(a1 + 3724);
    if ( v15 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 3724) & 0xFFF) + 2] == v15 >> 12 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3724) & 0xFFF) + 1] )
        sub_10035690(a1, a2, v9, a1 + 3684);
    }
    sub_1025FAC0(a1);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
  }
}
