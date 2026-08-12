int __thiscall sub_1039C920(_WORD *this)
{
  int v2; // ebx
  int v3; // edi
  int (__thiscall *v4)(_WORD *, _DWORD *, _DWORD); // edx
  float *v5; // eax
  void (__noreturn ***v6)(); // edi
  int v7; // eax
  void (__noreturn ***v8)(); // eax
  int v9; // edi
  int (__thiscall *v10)(_WORD *, _DWORD *, _DWORD); // edx
  float *v11; // eax
  void (__noreturn ***v12)(); // edi
  int v13; // eax
  void (__noreturn ***v14)(); // eax
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  unsigned __int8 v18; // al
  float v20; // [esp+60h] [ebp-68h]
  float v21; // [esp+60h] [ebp-68h]
  _DWORD v22[8]; // [esp+6Ch] [ebp-5Ch] BYREF
  _DWORD v23[8]; // [esp+8Ch] [ebp-3Ch] BYREF
  _DWORD v24[3]; // [esp+ACh] [ebp-1Ch]
  _DWORD v25[3]; // [esp+B8h] [ebp-10h] BYREF
  int v26; // [esp+C4h] [ebp-4h]

  (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 100))(this);
  this[1888] = 0;
  sub_100CF450(this, 5);
  v2 = (int)*(float *)(dword_106EA454 + 44);
  if ( *((_DWORD *)this + 55) != v2 )
  {
    (*(void (__thiscall **)(_WORD *, _WORD *))(*(_DWORD *)this + 464))(this, this + 110);
    *((_DWORD *)this + 55) = v2;
  }
  *((float *)this + 421) = 0.2;
  sub_100204A0(this);
  sub_10020460(this, 917505);
  sub_1032CE00((int)this);
  v3 = (*(int (__thiscall **)(_WORD *, _DWORD *))(*(_DWORD *)this + 580))(this, v25);
  sub_10219BB0(v22);
  v22[0] = &CPASFilter::`vftable';
  sub_1021A370(v22, v3);
  v4 = *(int (__thiscall **)(_WORD *, _DWORD *, _DWORD))(*(_DWORD *)this + 580);
  v22[0] = &CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v25, 2.0);
  sub_1021A0E0(v22, v5, v20);
  v6 = sub_1023DBA0();
  v21 = *((float *)this + 6);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  *((_DWORD *)this + 959) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v6)[8])(
                              v6,
                              v22,
                              v7,
                              3,
                              "NPC_PoisonZombie.FastBreath",
                              2.0);
  v8 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v8)[2])(
    v8,
    *((_DWORD *)this + 959),
    0.0,
    100.0,
    0.0);
  v9 = (*(int (__thiscall **)(_WORD *, _DWORD *))(*(_DWORD *)this + 580))(this, v25);
  sub_10219BB0(v23);
  v23[0] = &CPASFilter::`vftable';
  sub_1021A370(v23, v9);
  v10 = *(int (__thiscall **)(_WORD *, _DWORD *, _DWORD))(*(_DWORD *)this + 580);
  v23[0] = &CPASAttenuationFilter::`vftable';
  v11 = (float *)v10(this, v25, 0.80000001);
  sub_1021A0E0(v23, v11, v21);
  v12 = sub_1023DBA0();
  v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)this + 6));
  *((_DWORD *)this + 960) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v12)[8])(
                              v12,
                              v23,
                              v13,
                              3,
                              "NPC_PoisonZombie.Moan1",
                              0.80000001);
  v14 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v14)[2])(
    v14,
    *((_DWORD *)this + 960),
    0.60000002,
    100.0,
    0.0);
  v15 = *((_DWORD *)this + 961);
  v16 = 0;
  if ( !v15 )
    v15 = 3;
  v17 = 1;
  *((_DWORD *)this + 961) = 0;
  v24[0] = 1;
  v24[1] = 2;
  v24[2] = 4;
  v25[0] = 3;
  v25[1] = 5;
  v25[2] = 6;
  v26 = 7;
  if ( v15 == 1 )
  {
    v26 = v24[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2)];
  }
  else if ( v15 == 2 )
  {
    v26 = v24[(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 3, 5)];
  }
  do
  {
    v18 = (v17 & v26) != 0;
    if ( (unsigned int)v16 <= 2 )
    {
      if ( *((_BYTE *)this + v16 + 3848) != v18 )
        *((_DWORD *)this + 961) += 2 * ((v17 & v26) != 0) - 1;
      *((_BYTE *)this + v16 + 3848) = v18;
      sub_100C1600((int)this, v16 + 2, v18);
    }
    ++v16;
    v17 = __ROL4__(v17, 1);
  }
  while ( v16 < 3 );
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
}
