int __thiscall sub_1026E5F0(int this, int a2)
{
  int result; // eax
  int v4; // esi
  float *v5; // eax
  const char *v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // [esp+14h] [ebp-74h] BYREF
  const char *v10; // [esp+18h] [ebp-70h]
  float v11; // [esp+1Ch] [ebp-6Ch]
  int v12; // [esp+20h] [ebp-68h]
  int v13; // [esp+24h] [ebp-64h]
  int v14; // [esp+28h] [ebp-60h]
  int v15; // [esp+2Ch] [ebp-5Ch]
  float v16; // [esp+30h] [ebp-58h]
  int v17; // [esp+34h] [ebp-54h]
  __int16 v18; // [esp+38h] [ebp-50h]
  char v19; // [esp+3Ah] [ebp-4Eh]
  int v20; // [esp+3Ch] [ebp-4Ch]
  int v21[5]; // [esp+40h] [ebp-48h] BYREF
  __int16 v22; // [esp+54h] [ebp-34h]
  _DWORD v23[8]; // [esp+58h] [ebp-30h] BYREF
  float v24[3]; // [esp+78h] [ebp-10h] BYREF
  int v25; // [esp+84h] [ebp-4h]

  result = a2;
  if ( *(_DWORD *)(this + 4 * a2 + 188) )
  {
    v4 = *(_DWORD *)(this + 44);
    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 580))(v4);
    sub_10219BB0(v23);
    v23[0] = &CPASFilter::`vftable';
    sub_1021A370(v23, v25);
    v23[0] = &CPASAttenuationFilter::`vftable';
    v5 = (float *)(*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v4 + 580))(v4, v24, 0.80000001);
    sub_1021A0E0(v23, v5, COERCE_FLOAT(v24));
    v16 = 0.0;
    v22 = -1;
    v6 = *(const char **)(this + 4 * a2 + 188);
    v13 = 0;
    v14 = 100;
    v15 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v20 = -1;
    memset(v21, 0, sizeof(v21));
    v9 = 2;
    v10 = v6;
    if ( !v6 )
      v10 = String;
    v7 = *(_DWORD *)(this + 44);
    v11 = *(float *)(this + 384);
    v12 = 75;
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v7 + 24));
    sub_1023BE40(v23, v8, (int)&v9);
    if ( *(_DWORD *)(dword_106CEF04 + 48) )
      Msg("Playing vehicle sound: %s\n", v10);
    sub_102375F0(v21);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
  }
  return result;
}
