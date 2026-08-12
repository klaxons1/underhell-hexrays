int __thiscall sub_102515F0(float *this)
{
  void (__noreturn ***v2)(); // eax
  int v3; // edi
  int (__thiscall *v4)(float *, float *, _DWORD); // edx
  float *v5; // eax
  const char *v6; // eax
  int v7; // eax
  int v8; // eax
  int (__thiscall *v9)(float *); // eax
  int result; // eax
  int v11; // [esp+1Ch] [ebp-70h] BYREF
  const char *v12; // [esp+20h] [ebp-6Ch]
  float v13; // [esp+24h] [ebp-68h]
  int v14; // [esp+28h] [ebp-64h]
  int v15; // [esp+2Ch] [ebp-60h]
  int v16; // [esp+30h] [ebp-5Ch]
  int v17; // [esp+34h] [ebp-58h]
  float v18; // [esp+38h] [ebp-54h]
  int v19; // [esp+3Ch] [ebp-50h]
  __int16 v20; // [esp+40h] [ebp-4Ch]
  char v21; // [esp+42h] [ebp-4Ah]
  int v22; // [esp+44h] [ebp-48h]
  int v23[5]; // [esp+48h] [ebp-44h] BYREF
  __int16 v24; // [esp+5Ch] [ebp-30h]
  _DWORD v25[8]; // [esp+60h] [ebp-2Ch] BYREF
  float v26[3]; // [esp+80h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 231) )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, *((_DWORD *)this + 231));
    this[231] = 0.0;
  }
  if ( *((_DWORD *)this + 230) )
  {
    v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 580))(this);
    sub_10219BB0(v25);
    v25[0] = &CPASFilter::`vftable';
    sub_1021A370(v25, v3);
    v4 = *(int (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)this + 580);
    v25[0] = &CPASAttenuationFilter::`vftable';
    v5 = (float *)v4(this, v26, 0.80000001);
    sub_1021A0E0(v25, v5, COERCE_FLOAT(v26));
    v18 = 0.0;
    v20 = 1;
    v11 = 1;
    v6 = (const char *)*((_DWORD *)this + 230);
    v15 = 0;
    v16 = 100;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v22 = -1;
    memset(v23, 0, sizeof(v23));
    v24 = -1;
    v12 = v6;
    if ( !v6 )
      v12 = String;
    v7 = *((_DWORD *)this + 6);
    v13 = this[232];
    v14 = 75;
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v7);
    sub_1023BE40(v25, v8, (int)&v11);
    sub_102375F0(v23);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
  }
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 724);
  this[200] = 0.0;
  result = v9(this);
  if ( !(_BYTE)result )
  {
    *((_DWORD *)this + 1) = sub_1024DA10;
    return sub_100D8290(this, 3.0);
  }
  return result;
}
