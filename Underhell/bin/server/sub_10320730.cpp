void __thiscall sub_10320730(unsigned int this, int a2)
{
  _BYTE *v3; // ebx
  void (__noreturn ***v4)(); // eax
  unsigned int v5; // eax
  float *v6; // edi
  void (__noreturn ***v7)(); // edi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int *v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  __int64 v14; // [esp+24h] [ebp-3Ch]
  float v15; // [esp+28h] [ebp-38h]
  _DWORD v16[8]; // [esp+3Ch] [ebp-24h] BYREF
  float v17; // [esp+5Ch] [ebp-4h]

  v3 = (_BYTE *)(this + 224);
  if ( !*(_BYTE *)(this + 224) )
  {
    HIDWORD(v14) = this;
    LODWORD(v14) = this;
    sub_1010DD80((_DWORD *)(this + 4308), v14, 0.0);
  }
  if ( *v3 != 1 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*((_DWORD *)v3 - 56) + 472))(v3 - 224, v3);
    *v3 = 1;
  }
  v4 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[12])(
    v4,
    *(_DWORD *)(this + 4280),
    0.0,
    0.1);
  v5 = *(_DWORD *)(this + 4332);
  if ( v5 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 1]
    || (v6 = (float *)sub_1012BC90(&dword_1069E3E0, 0, "info_target_helicopter_crash")) == 0 )
  {
    sub_10320190(this);
    (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this + 408))(this);
    if ( *v3 != 2 )
    {
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(*((_DWORD *)v3 - 56) + 472))(v3 - 224, v3);
      *v3 = 2;
    }
    sub_1023C380((_DWORD *)this, (int)"NPC_CombineGunship.Explode", 0.0, 0);
    sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    v15 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v15, 0);
    sub_100EAB80((_DWORD *)this, 32);
    v10 = *(_DWORD *)(this + 3920);
    v17 = *(float *)(dword_106B31C8 + 12) + 99.0;
    if ( v10 != LODWORD(v17) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          sub_100194B0(v11, 3920);
      }
      *(float *)(this + 3920) = v17;
    }
    if ( *(_DWORD *)(this + 220) )
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 464))(this, this + 220);
      *(_DWORD *)(this + 220) = 0;
    }
    if ( *(_BYTE *)(this + 225) )
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 0;
    }
    v12 = *(_DWORD *)(a2 + 44);
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    sub_1010DD80((_DWORD *)(this + 2968), __SPAIR64__(this, v13), 0.0);
  }
  else
  {
    *(_DWORD *)(this + 4332) = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 8))(v6);
    if ( ((_DWORD)v6[63] & 0x800) != 0 )
      sub_100DAE60((int)v6);
    *(float *)(this + 3620) = v6[145];
    *(float *)(this + 3624) = v6[146];
    *(float *)(this + 3628) = v6[147];
    v7 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v7)[10])(v7, *(_DWORD *)(this + 3780));
    sub_100D78A0(v16, this, 0.80000001);
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
    v9 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v7)[9])(
           v7,
           v16,
           v8,
           "NPC_AttackHelicopter.EngineFailure");
    *(_DWORD *)(this + 3780) = v9;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v7)[2])(v7, v9, 1.0, 100.0, 0.0);
    (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)this + 1416))(this, dword_106E3488);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
  }
}
