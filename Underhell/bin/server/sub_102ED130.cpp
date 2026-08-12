void __thiscall sub_102ED130(void *this, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  float v7; // eax
  float v8; // edx
  int v9; // ecx
  int v10; // edx
  double v11; // st6
  double v12; // st5
  double v13; // st7
  int v14; // eax
  double v15; // st4
  double v16; // st6
  int v17; // eax
  float v18; // [esp+4h] [ebp-ACh]
  _BYTE v19[84]; // [esp+18h] [ebp-98h] BYREF
  int v20[8]; // [esp+6Ch] [ebp-44h] BYREF
  float v21[2]; // [esp+8Ch] [ebp-24h] BYREF
  float v22; // [esp+94h] [ebp-1Ch]
  float v23; // [esp+98h] [ebp-18h] BYREF
  float v24; // [esp+9Ch] [ebp-14h]
  float v25; // [esp+A0h] [ebp-10h]
  float v26; // [esp+A4h] [ebp-Ch] BYREF
  float v27; // [esp+A8h] [ebp-8h]
  float v28; // [esp+ACh] [ebp-4h]
  int savedregs; // [esp+B0h] [ebp+0h] BYREF

  v5 = __PAIR64__((unsigned int)this, a2);
  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    sub_1010DD80((_DWORD *)(HIDWORD(v5) + 1132), v5, 0.0);
    v6 = sub_100BDF40(SHIDWORD(v5), "Open");
    if ( *(_DWORD *)(HIDWORD(v5) + 908) == v6 )
    {
LABEL_15:
      *(float *)(HIDWORD(v5) + 1128) = *(float *)(dword_106B31C8 + 12) + 1.5;
      return;
    }
    sub_10111910((_BYTE *)(HIDWORD(v5) + 320), (float *)(HIDWORD(v5) + 328), (float *)(HIDWORD(v5) + 340), &v26, &v23);
    if ( (*(_DWORD *)(HIDWORD(v5) + 252) & 0x800) != 0 )
      sub_100DAE60(SHIDWORD(v5));
    v7 = *(float *)(HIDWORD(v5) + 588);
    v8 = *(float *)(HIDWORD(v5) + 584);
    v21[0] = *(float *)(HIDWORD(v5) + 580);
    v9 = *(_DWORD *)(HIDWORD(v5) + 252) >> 11;
    v21[1] = v8;
    v22 = v25 - v28 + v7;
    if ( (v9 & 1) != 0 )
      sub_100DAE60(SHIDWORD(v5));
    v10 = *(_DWORD *)(HIDWORD(v5) + 252) >> 11;
    v11 = (v27 - *(float *)(HIDWORD(v5) + 584)) * 0.2;
    v12 = (v28 - *(float *)(HIDWORD(v5) + 588)) * 0.2;
    v13 = 0.2;
    v26 = (v26 - *(float *)(HIDWORD(v5) + 580)) * 0.2;
    v27 = v11;
    v28 = v12;
    if ( (v10 & 1) != 0 )
    {
      sub_100DAE60(SHIDWORD(v5));
      v13 = 0.2;
    }
    v14 = *(_DWORD *)(HIDWORD(v5) + 252) >> 11;
    v15 = v25 - *(float *)(HIDWORD(v5) + 588);
    v16 = (v24 - *(float *)(HIDWORD(v5) + 584)) * v13;
    v23 = (v23 - *(float *)(HIDWORD(v5) + 580)) * v13;
    v24 = v16;
    v25 = v13 * v15;
    if ( (v14 & 1) != 0 )
      sub_100DAE60(SHIDWORD(v5));
    v28 = *(float *)(HIDWORD(v5) + 588) - v22;
    sub_100231A0((int)&savedregs, SHIDWORD(v5), v21, v21, &v26, &v23, 33570827, SHIDWORD(v5), 0, (int)v19);
    if ( !v19[55] && !v19[54] )
    {
      sub_10019680((_DWORD *)(HIDWORD(v5) + 1156), a2);
      sub_100C3330(SHIDWORD(v5), v6);
      sub_10165630(v20, SHIDWORD(v5), (int)"AmmoCrate.Open");
      v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
              dword_106B31D0,
              *(_DWORD *)(HIDWORD(v5) + 24));
      sub_1023C580(a2, SHIDWORD(v5), v20, v17, (int)"AmmoCrate.Open", 0, 0.0, 0);
      sub_100EC3F0((_DWORD *)HIDWORD(v5), (int)sub_102ECFE0, 0.0, 0);
      v18 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)HIDWORD(v5), v18, 0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v20);
      goto LABEL_15;
    }
  }
}
