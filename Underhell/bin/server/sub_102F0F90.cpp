void __thiscall sub_102F0F90(void *this, int a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  bool v7; // zf
  void (__thiscall *v8)(_DWORD); // edx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  float v12; // [esp+8h] [ebp-34h]
  float v13; // [esp+Ch] [ebp-30h]
  int v14[8]; // [esp+1Ch] [ebp-20h] BYREF
  int v15; // [esp+44h] [ebp+8h]

  v5 = __PAIR64__((unsigned int)this, a2);
  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    v6 = __RTDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBasePlayer `RTTI Type Descriptor',
           0);
    v7 = *(_DWORD *)(HIDWORD(v5) + 1132) == 0;
    v15 = v6;
    *(_DWORD *)(HIDWORD(v5) + 1144) = 32;
    if ( !v7 )
    {
      v8 = *(void (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 728);
      *(float *)(HIDWORD(v5) + 1196) = *(float *)(HIDWORD(v5) + 1196) - 0.14285715;
      v8(HIDWORD(v5));
    }
    if ( *(int *)(HIDWORD(v5) + 1128) > 0
      || (v9 = sub_100BDF40(SHIDWORD(v5), "emptyclick"),
          sub_100C3330(SHIDWORD(v5), v9),
          *(_DWORD *)(HIDWORD(v5) + 1140) = 1,
          sub_102F0C00(SHIDWORD(v5)),
          *(int *)(HIDWORD(v5) + 1128) > 0) )
    {
      v10 = *(_DWORD *)(v5 + 220);
      if ( v10 < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 448))(v5) )
      {
        v13 = *(float *)(dword_106B31C8 + 12) + 0.25;
        sub_100EC4A0((int *)HIDWORD(v5), v13, 0);
        sub_100EC3F0((_DWORD *)HIDWORD(v5), (int)sub_102F0C00, 0.0, 0);
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(HIDWORD(v5) + 1120) )
        {
          if ( !*(_DWORD *)(HIDWORD(v5) + 1132) )
          {
            *(_DWORD *)(HIDWORD(v5) + 1132) = 1;
            sub_1023C380((_DWORD *)HIDWORD(v5), (int)"WallHealth.Start", 0.0, 0);
            *(float *)(HIDWORD(v5) + 1136) = *(float *)(dword_106B31C8 + 12) + 0.5600000000000001;
            sub_1010DD80((_DWORD *)(HIDWORD(v5) + 1172), v5, 0.0);
          }
          if ( *(_DWORD *)(HIDWORD(v5) + 1132) == 1
            && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 1136) )
          {
            *(_DWORD *)(HIDWORD(v5) + 1132) = 2;
            sub_10165630(v14, SHIDWORD(v5), (int)"WallHealth.LoopingContinueCharge");
            sub_10219A50(v14);
            v11 = sub_1001F3C0((_DWORD *)HIDWORD(v5));
            sub_1023C580(v5, SHIDWORD(v5), v14, v11, (int)"WallHealth.LoopingContinueCharge", 0, 0.0, 0);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
          }
          if ( (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 260))(v5, 1.0, 0) )
            --*(_DWORD *)(HIDWORD(v5) + 1128);
          v12 = (double)*(int *)(HIDWORD(v5) + 1128) / *(float *)(dword_106E254C + 44);
          sub_10108AE0((int *)(HIDWORD(v5) + 1148), SLOBYTE(v12), v5, SHIDWORD(v5));
          *(float *)(HIDWORD(v5) + 1120) = *(float *)(dword_106B31C8 + 12) + 0.1;
        }
      }
      else
      {
        if ( v15 )
          *(_DWORD *)(v15 + 3296) &= ~0x20u;
        *(_DWORD *)(HIDWORD(v5) + 1144) = 16;
        sub_1023C380((_DWORD *)HIDWORD(v5), (int)"WallHealth.Deny", 0.0, 0);
      }
    }
    else if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 1136) )
    {
      *(float *)(HIDWORD(v5) + 1136) = *(float *)(dword_106B31C8 + 12) + 0.62;
      sub_1023C380((_DWORD *)HIDWORD(v5), (int)"WallHealth.Deny", 0.0, 0);
    }
  }
}
