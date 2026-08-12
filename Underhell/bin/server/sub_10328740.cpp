void __usercall sub_10328740(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  void (__noreturn ***v4)(); // edi
  int v5; // ebx
  int (__thiscall *v6)(float *, _DWORD); // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  float v10; // eax
  double v11; // st7
  double (__thiscall *v12)(float *); // edx
  double v13; // st7
  bool v14; // c0
  double v15; // st7
  double v16; // st7
  void (__noreturn *v17)(); // edx
  float v18; // [esp+44h] [ebp-38h]
  _DWORD v21[8]; // [esp+54h] [ebp-28h] BYREF
  float v22; // [esp+74h] [ebp-8h]
  float v23; // [esp+78h] [ebp-4h]

  if ( ((_BYTE)a1[63] & 1) == 0 )
  {
    v4 = sub_1023DBA0();
    if ( !*((_DWORD *)a1 + 959) )
    {
      sub_100D78A0(v21, (int)a1, 0.80000001);
      v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)a1 + 6));
      v6 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 2236);
      v23 = *(float *)v4;
      v7 = v6(a1, 0.80000001);
      v8 = (*(int (__thiscall **)(void (__noreturn ***)(), _DWORD *, int, int, int))(LODWORD(v23) + 32))(
             v4,
             v21,
             v5,
             6,
             v7);
      *((_DWORD *)a1 + 959) = v8;
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v4)[2])(v4, v8, 0.0, 100.0, 0.0);
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[12])(
        v4,
        *((_DWORD *)a1 + 959),
        1.0,
        2.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v21);
    }
    v18 = a1[907] * a1[907] + a1[906] * a1[906] + a1[908] * a1[908];
    v9 = off_10689708(v18);
    v10 = *a1;
    v23 = v9;
    v11 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(LODWORD(v10) + 2232))(a1, a3, a2);
    v12 = *(double (__thiscall **)(float *))(*(_DWORD *)a1 + 2232);
    v22 = v23 / v11 * 0.75 + 0.25;
    v13 = v12(a1);
    v14 = v23 / v13 * 20.0 + 80.0 > 255.0;
    v15 = 255.0;
    if ( !v14 )
    {
      v16 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)a1 + 2232))(a1);
      v15 = v23 / v16 * 20.0 + 80.0;
    }
    v17 = (*v4)[11];
    LODWORD(v23) = (int)v15;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))v17)(v4, *((_DWORD *)a1 + 959));
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, float, _DWORD))(*v4)[12])(
      v4,
      *((_DWORD *)a1 + 959),
      COERCE_FLOAT(LODWORD(v22)),
      0.1);
  }
}
