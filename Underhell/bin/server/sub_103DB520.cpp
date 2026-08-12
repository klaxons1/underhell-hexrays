char __thiscall sub_103DB520(int this, float *a2, char a3)
{
  float *v4; // eax
  float *v5; // eax
  char *v6; // ebx
  char result; // al
  int v8; // ebx
  int (__thiscall *v9)(int, float *, _DWORD); // edx
  float *v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // [esp+14h] [ebp-7Ch]
  __int64 v14; // [esp+20h] [ebp-70h]
  _DWORD v15[8]; // [esp+38h] [ebp-58h] BYREF
  int v16[8]; // [esp+58h] [ebp-38h] BYREF
  float v17[3]; // [esp+78h] [ebp-18h] BYREF
  float v18[3]; // [esp+84h] [ebp-Ch] BYREF

  v4 = sub_103D9500((float *)this, v17);
  v18[0] = *v4;
  v18[1] = v4[1];
  v18[2] = v4[2];
  v5 = sub_103D9500((float *)this, v17);
  v6 = sub_100E3960((int)"sniperbullet", v5, (float *)(this + 728), 0);
  result = sub_103DA780((int)v6, v18, a2, this, a3);
  if ( result )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 76))(v6);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 580))(this);
    sub_10219BB0(v16);
    v16[0] = (int)&CPASFilter::`vftable';
    sub_1021A370(v16, v8);
    v9 = *(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this + 580);
    v16[0] = (int)&CPASAttenuationFilter::`vftable';
    v10 = (float *)v9(this, v17, 0.0);
    sub_1021A0E0(v16, v10, COERCE_FLOAT(v17));
    v13 = *(_DWORD *)(this + 24);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023C580((int)a2, this, v16, v11, v13, (int)"NPC_Sniper.FireBullet", 0.0, COERCE_INT(0.0));
    sub_10219BB0(v15);
    v15[0] = &CPVSFilter::`vftable';
    sub_1021A300(v15, (int)v18);
    ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, int))(*off_1065C5EC)[32])(
      v15,
      0.0,
      v18,
      word_106ED19C,
      0.30000001,
      255);
    *(_BYTE *)(this + 3644) = 0;
    *(_BYTE *)(this + 3646) = 0;
    v12 = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 3716) = 0;
    *(float *)(this + 3700) = v12;
    *(_BYTE *)(this + 3788) = 0;
    *(float *)(this + 3628) = *a2;
    *(float *)(this + 3632) = a2[1];
    *(float *)(this + 3636) = a2[2];
    *(_DWORD *)(this + 3656) = -1;
    v14 = (unsigned int)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 368))(this, this, 0.0);
    sub_1010DD80((_DWORD *)(this + 3828), v14, *(float *)&this);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
    return 1;
  }
  return result;
}
