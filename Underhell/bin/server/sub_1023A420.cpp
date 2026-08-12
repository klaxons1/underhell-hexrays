void __usercall sub_1023A420(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // edx
  int (__thiscall *v5)(int, _DWORD, int, int, int, int); // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edi
  float *v12; // eax
  int v13; // eax
  float v14; // [esp+24h] [ebp-78h]
  int v15[5]; // [esp+50h] [ebp-4Ch] BYREF
  __int16 v16; // [esp+64h] [ebp-38h]
  _DWORD v17[8]; // [esp+68h] [ebp-34h] BYREF
  _BYTE v18[12]; // [esp+88h] [ebp-14h] BYREF
  int v19; // [esp+94h] [ebp-8h]
  float v20; // [esp+98h] [ebp-4h]

  v4 = *(_DWORD *)dword_106B31E4;
  v20 = *(float *)(dword_106B3174 + 44);
  v5 = *(int (__thiscall **)(int, _DWORD, int, int, int, int))(v4 + 8);
  v19 = 100;
  if ( v5(dword_106B31E4, 0, 1, a2, a3, a1) )
    v19 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 6) + 98;
  if ( a4 && (v6 = *(_DWORD *)(a4 + 12)) != 0 )
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
  else
    v7 = 0;
  if ( flt_1060B428 >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v8 = dword_1060B42C == -1 || off_1061BE18[4 * (dword_1060B42C & 0xFFF) + 2] != (unsigned int)dword_1060B42C >> 12
       ? 0
       : off_1061BE18[4 * (dword_1060B42C & 0xFFF) + 1];
    if ( v8 != v7 )
      v20 = v20 * 0.3;
  }
  if ( v20 > 0.05 )
  {
    if ( a4 && (v9 = *(_DWORD *)(a4 + 12)) != 0 )
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    else
      v10 = 0;
    v11 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 580))(v10, v18);
    sub_10219BB0(v17);
    v17[0] = &CPASFilter::`vftable';
    sub_1021A370(v17, v11);
    v17[0] = &CPASAttenuationFilter::`vftable';
    v12 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v10 + 580))(v10, v18, 0.80000001);
    sub_1021A0E0(v17, v12, v14);
    sub_10219A50(v17);
    v16 = -1;
    memset(v15, 0, sizeof(v15));
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023BE40(v17, v13, a4);
    sub_102375F0(v15);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
  }
}
