int __thiscall sub_1026A4D0(_DWORD *this, const char *a2)
{
  void (__noreturn ***v3)(); // eax
  int v4; // ebx
  void (__noreturn ***v5)(); // esi
  float *v6; // eax
  const char *v7; // ebx
  int v8; // eax
  _DWORD *v9; // ebx
  void (__noreturn **v10)(); // edx
  const char *v11; // eax
  const char *v12; // eax
  void (__noreturn ***v13)(); // ebx
  int v14; // eax
  int v15; // eax
  _DWORD v17[8]; // [esp+48h] [ebp-38h] BYREF
  float v18[3]; // [esp+68h] [ebp-18h] BYREF
  char v19[4]; // [esp+74h] [ebp-Ch] BYREF
  char v20[4]; // [esp+78h] [ebp-8h] BYREF
  int v21; // [esp+7Ch] [ebp-4h]

  v3 = sub_1023DBA0();
  v4 = this[11];
  v5 = v3;
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 580))(v4);
  sub_10219BB0(v17);
  v17[0] = &CPASFilter::`vftable';
  sub_1021A370(v17, v21);
  v17[0] = &CPASAttenuationFilter::`vftable';
  v6 = (float *)(*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v4 + 580))(v4, v18, 0.80000001);
  sub_1021A0E0(v17, v6, COERCE_FLOAT(v18));
  v7 = a2;
  v21 = 0;
  if ( a2 && *a2 )
  {
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
           dword_106B31D0,
           *(_DWORD *)(this[11] + 24));
    v21 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, _DWORD))(*v5)[8])(
            v5,
            v17,
            v8,
            6,
            v7,
            0.80000001);
  }
  if ( this[99]
    && v21
    && (v9 = (_DWORD *)((int (__thiscall *)(void (__noreturn ***)(), const char **, _DWORD))(*v5)[19])(
                         v5,
                         &a2,
                         this[99]),
        *(_DWORD *)((int (__thiscall *)(void (__noreturn ***)(), char *, int))(*v5)[19])(v5, v20, v21) == *v9) )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), int))(*v5)[10])(v5, v21);
    v10 = *v5;
    v21 = this[99];
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v10[12])(v5, v21, 1.0, 0.0);
    this[99] = 0;
  }
  else if ( *(_DWORD *)(dword_106CEF04 + 48) )
  {
    if ( this[99] )
    {
      v11 = *(const char **)((int (__thiscall *)(void (__noreturn ***)(), char *, _DWORD))(*v5)[19])(v5, v20, this[99]);
      if ( v11 )
        a2 = v11;
      else
        a2 = String;
    }
    else
    {
      a2 = "NULL";
    }
    if ( v21 )
    {
      v12 = *(const char **)((int (__thiscall *)(void (__noreturn ***)(), char *, int))(*v5)[19])(v5, v19, v21);
      if ( !v12 )
        v12 = String;
    }
    else
    {
      v12 = "NULL";
    }
    Msg("Stop %s, start %s\n", a2, v12);
  }
  v13 = sub_1023DBA0();
  if ( this[100] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v13)[10])(v13, this[100]);
    this[100] = 0;
  }
  v14 = this[99];
  if ( v14 )
  {
    this[100] = v14;
    this[99] = 0;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v13)[13])(v13, v14, 0.25, 0);
  }
  v15 = v21;
  this[99] = v21;
  if ( v15 )
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v5)[2])(v5, v15, 1.0, 100.0, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
}
