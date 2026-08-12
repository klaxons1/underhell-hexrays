void __thiscall sub_102C8030(void *this, _BYTE *a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rdi
  bool v6; // zf
  double v7; // st7
  void (__thiscall *v8)(_DWORD); // eax
  int v9; // eax
  bool v10; // al
  int (__thiscall *v11)(_DWORD); // edx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  float v16; // [esp+8h] [ebp-3Ch]
  float v17; // [esp+Ch] [ebp-38h]
  int v18[8]; // [esp+20h] [ebp-24h] BYREF
  int v19; // [esp+40h] [ebp-4h]
  int v20; // [esp+4Ch] [ebp+8h]

  v5 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( a2 && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 320))(a2) )
  {
    v6 = *(_DWORD *)(HIDWORD(v5) + 1132) == 0;
    *(_DWORD *)(HIDWORD(v5) + 1144) = 32;
    if ( !v6 )
    {
      v7 = 4.0;
      if ( (*(_DWORD *)(HIDWORD(v5) + 248) & 0x2000) != 0 )
        v7 = 40.0;
      v8 = *(void (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 728);
      *(float *)(HIDWORD(v5) + 1272) = *(float *)(HIDWORD(v5) + 1272) - v7 * 0.035714287;
      v8(HIDWORD(v5));
    }
    if ( !a2[2329] )
      goto LABEL_10;
    if ( *(int *)(HIDWORD(v5) + 1128) <= 0 )
    {
      v9 = sub_100BDF40(SHIDWORD(v5), "emptyclick");
      sub_100C3330(SHIDWORD(v5), v9);
      *(_DWORD *)(HIDWORD(v5) + 1140) = 1;
      sub_102C7F00(SHIDWORD(v5));
LABEL_10:
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 1136) )
      {
        *(float *)(HIDWORD(v5) + 1136) = *(float *)(dword_106B31C8 + 12) + 0.62;
        sub_1023C380((_DWORD *)HIDWORD(v5), (int)"SuitRecharge.Deny", 0.0, 0);
      }
      return;
    }
    v10 = (*(_DWORD *)(HIDWORD(v5) + 248) & 0x2000) != 0;
    v20 = 100;
    if ( (*(_DWORD *)(HIDWORD(v5) + 248) & 0x2000) != 0 )
      v20 = *(_DWORD *)(dword_106DE254 + 48);
    v19 = 1;
    if ( v10 )
    {
      v11 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 448);
      v12 = *(_DWORD *)(v5 + 220);
      v19 = 10;
      if ( v12 < v11(v5) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(HIDWORD(v5) + 1120) )
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 260))(v5, 5.0, 0);
    }
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 1572))(v5) < v20
      || (*(_DWORD *)(HIDWORD(v5) + 248) & 0x2000) != 0
      && (v13 = *(_DWORD *)(v5 + 220), v13 < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 448))(v5)) )
    {
      v17 = *(float *)(dword_106B31C8 + 12) + 0.25;
      sub_100EC4A0((int *)HIDWORD(v5), v17, 0);
      sub_100EC3F0((_DWORD *)HIDWORD(v5), (int)sub_102C7F00, 0.0, 0);
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(HIDWORD(v5) + 1120) )
      {
        if ( !*(_DWORD *)(HIDWORD(v5) + 1132) )
        {
          *(_DWORD *)(HIDWORD(v5) + 1132) = 1;
          sub_1023C380((_DWORD *)HIDWORD(v5), (int)"SuitRecharge.Start", 0.0, 0);
          *(float *)(HIDWORD(v5) + 1136) = *(float *)(dword_106B31C8 + 12) + 0.5600000000000001;
          sub_1010DD80((_DWORD *)(HIDWORD(v5) + 1248), v5, 0.0);
        }
        if ( *(_DWORD *)(HIDWORD(v5) + 1132) == 1
          && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 1136) )
        {
          *(_DWORD *)(HIDWORD(v5) + 1132) = 2;
          sub_10165630(v18, SHIDWORD(v5), (int)"SuitRecharge.ChargingLoop");
          sub_10219A50(v18);
          v14 = sub_1001F3C0((_DWORD *)HIDWORD(v5));
          sub_1023C580(v5, SHIDWORD(v5), v18, v14, (int)"SuitRecharge.ChargingLoop", 0, 0.0, 0);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
        }
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 1572))(v5) < v20 )
        {
          v15 = v19;
          sub_102C73D0((_DWORD *)HIDWORD(v5), *(_DWORD *)(HIDWORD(v5) + 1128) - v19);
          sub_101EC2E0((int *)v5, v15, v20);
        }
        v16 = (double)*(int *)(HIDWORD(v5) + 1128) / (double)*(int *)(HIDWORD(v5) + 1148);
        sub_10108AE0((int *)(HIDWORD(v5) + 1152), SLOBYTE(v16), v5, SHIDWORD(v5));
        *(float *)(HIDWORD(v5) + 1120) = *(float *)(dword_106B31C8 + 12) + 0.1;
      }
    }
    else
    {
      *(_DWORD *)(v5 + 3296) &= ~0x20u;
      *(_DWORD *)(HIDWORD(v5) + 1144) = 16;
      sub_1023C380((_DWORD *)HIDWORD(v5), (int)"SuitRecharge.Deny", 0.0, 0);
    }
  }
}
