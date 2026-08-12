int __thiscall sub_10249730(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // esi
  int (__thiscall *v5)(_DWORD *, float *, _DWORD); // edx
  float *v6; // eax
  const char *v7; // eax
  int v8; // esi
  int v9; // eax
  void (__noreturn ***v10)(); // esi
  int v11; // eax
  int result; // eax
  void (__noreturn **v13)(); // ebx
  int v14; // eax
  void (__noreturn *v15)(); // edx
  void (__noreturn **v16)(); // ebx
  int v17; // eax
  void (__noreturn *v18)(); // edx
  float v19; // [esp+60h] [ebp-84h]
  float v20; // [esp+60h] [ebp-84h]
  int v21; // [esp+70h] [ebp-74h] BYREF
  const char *v22; // [esp+74h] [ebp-70h]
  float v23; // [esp+78h] [ebp-6Ch]
  int v24; // [esp+7Ch] [ebp-68h]
  int v25; // [esp+80h] [ebp-64h]
  int v26; // [esp+84h] [ebp-60h]
  int v27; // [esp+88h] [ebp-5Ch]
  float v28; // [esp+8Ch] [ebp-58h]
  int v29; // [esp+90h] [ebp-54h]
  __int16 v30; // [esp+94h] [ebp-50h]
  char v31; // [esp+96h] [ebp-4Eh]
  int v32; // [esp+98h] [ebp-4Ch]
  int v33[5]; // [esp+9Ch] [ebp-48h] BYREF
  __int16 v34; // [esp+B0h] [ebp-34h]
  _DWORD v35[8]; // [esp+B4h] [ebp-30h] BYREF
  float v36[3]; // [esp+D4h] [ebp-10h] BYREF
  int v37; // [esp+E0h] [ebp-4h]

  v2 = this[200];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = (_DWORD *)*v3;
  sub_10248950(this);
  if ( this[205] )
  {
    v37 = (*(int (__thiscall **)(_DWORD *))(*v4 + 580))(v4);
    sub_10219BB0(v35);
    v35[0] = &CPASFilter::`vftable';
    sub_1021A370(v35, v37);
    v5 = *(int (__thiscall **)(_DWORD *, float *, _DWORD))(*v4 + 580);
    v35[0] = &CPASAttenuationFilter::`vftable';
    v6 = (float *)v5(v4, v36, 0.80000001);
    sub_1021A0E0(v35, v6, COERCE_FLOAT(v36));
    v28 = 0.0;
    v34 = -1;
    v7 = (const char *)this[205];
    v25 = 0;
    v26 = 100;
    v27 = 0;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v32 = -1;
    memset(v33, 0, sizeof(v33));
    v21 = 3;
    v22 = v7;
    if ( !v7 )
      v22 = String;
    v8 = v4[6];
    v23 = 1.0;
    v24 = 75;
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v8);
    sub_1023BE40(v35, v9, (int)&v21);
    sub_102375F0(v33);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v35);
  }
  v10 = sub_1023DBA0();
  v11 = this[203];
  if ( v11 )
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v10)[2])(v10, v11, 1.0, 100.0, 0.0);
  result = this[204];
  if ( result )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v10)[2])(v10, result, 0.5, 90.0, 0.0);
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v10)[4])(v10, this[204]);
    v13 = *v10;
    v14 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 130, 145);
    v15 = v13[3];
    v37 = v14;
    v19 = (float)v14;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, int, _DWORD, _DWORD))v15)(
      v10,
      this[204],
      0.0,
      1,
      1.5,
      LODWORD(v19));
    v16 = *v10;
    v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 105, 115);
    v18 = v16[3];
    v37 = v17;
    v20 = (float)v17;
    result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, int, _DWORD, _DWORD))v18)(
               v10,
               this[204],
               1.5,
               1,
               2.0,
               LODWORD(v20));
  }
  this[202] = 1;
  return result;
}
