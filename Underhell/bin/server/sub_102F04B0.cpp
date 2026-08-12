void __thiscall sub_102F04B0(void *this, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  bool v7; // cc
  int v8; // ebx
  int v9; // eax
  float v10; // [esp+8h] [ebp-38h]
  float v11; // [esp+Ch] [ebp-34h]
  int v12[8]; // [esp+20h] [ebp-20h] BYREF
  int v13; // [esp+48h] [ebp+8h]

  v5 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( a2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
  {
    v6 = __RTDynamicCast(
           (int)a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBasePlayer `RTTI Type Descriptor',
           0);
    v7 = *(_DWORD *)(HIDWORD(v5) + 924) <= 0;
    v8 = v6;
    *(_DWORD *)(HIDWORD(v5) + 940) = 32;
    if ( v7 && (*(_DWORD *)(HIDWORD(v5) + 936) = 1, sub_102F0110((int *)HIDWORD(v5)), *(int *)(HIDWORD(v5) + 924) <= 0) )
    {
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 932) )
      {
        *(float *)(HIDWORD(v5) + 932) = *(float *)(dword_106B31C8 + 12) + 0.62;
        sub_1023C380((_DWORD *)HIDWORD(v5), (int)"WallHealth.Deny", 0.0, 0);
      }
    }
    else
    {
      v13 = a2[55];
      if ( v13 < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 448))(v5) )
      {
        v11 = *(float *)(dword_106B31C8 + 12) + 0.25;
        sub_100EC4A0((int *)HIDWORD(v5), v11, 0);
        sub_100EC3F0((_DWORD *)HIDWORD(v5), (int)sub_102F0110, 0.0, 0);
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(HIDWORD(v5) + 916) )
        {
          if ( !*(_DWORD *)(HIDWORD(v5) + 928) )
          {
            *(_DWORD *)(HIDWORD(v5) + 928) = 1;
            sub_1023C380((_DWORD *)HIDWORD(v5), (int)"WallHealth.Start", 0.0, 0);
            *(float *)(HIDWORD(v5) + 932) = *(float *)(dword_106B31C8 + 12) + 0.5600000000000001;
            sub_1010DD80((_DWORD *)(HIDWORD(v5) + 968), v5, 0.0);
          }
          if ( *(_DWORD *)(HIDWORD(v5) + 928) == 1
            && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 932) )
          {
            *(_DWORD *)(HIDWORD(v5) + 928) = 2;
            sub_10165630(v12, SHIDWORD(v5), (int)"WallHealth.LoopingContinueCharge");
            sub_10219A50(v12);
            v9 = sub_1001F3C0((_DWORD *)HIDWORD(v5));
            sub_1023C580(v5, SHIDWORD(v5), v12, v9, (int)"WallHealth.LoopingContinueCharge", 0, 0.0, 0);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
          }
          if ( (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 260))(v5, 1.0, 0) )
            --*(_DWORD *)(HIDWORD(v5) + 924);
          v10 = (double)*(int *)(HIDWORD(v5) + 924) / *(float *)(dword_106E254C + 44);
          sub_10108AE0((int *)(HIDWORD(v5) + 944), SLOBYTE(v10), v5, SHIDWORD(v5));
          *(float *)(HIDWORD(v5) + 916) = *(float *)(dword_106B31C8 + 12) + 0.1;
        }
      }
      else
      {
        if ( v8 )
          *(_DWORD *)(v8 + 3296) &= ~0x20u;
        *(_DWORD *)(HIDWORD(v5) + 940) = 16;
      }
    }
  }
}
