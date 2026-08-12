void __thiscall sub_102C7840(void *this, _BYTE *a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int *v8; // eax
  int v9; // ebx
  int v10; // ecx
  int (__thiscall *v11)(_DWORD); // eax
  int v12; // eax
  float v13; // [esp+8h] [ebp-40h]
  float v14; // [esp+10h] [ebp-38h]
  int v15[8]; // [esp+20h] [ebp-28h] BYREF
  int v16; // [esp+40h] [ebp-8h]
  int *v17; // [esp+44h] [ebp-4h]
  int v18; // [esp+50h] [ebp+8h]
  float v19; // [esp+50h] [ebp+8h]

  v5 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( a2 && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( a2[2329]
      && (*(int *)(HIDWORD(v5) + 924) > 0
       || (*(_DWORD *)(HIDWORD(v5) + 936) = 1, sub_102C76A0((int *)HIDWORD(v5)), *(int *)(HIDWORD(v5) + 924) > 0)) )
    {
      v14 = *(float *)(dword_106B31C8 + 12) + 0.25;
      sub_100EC4A0((int *)HIDWORD(v5), v14, 0);
      sub_100EC3F0((_DWORD *)HIDWORD(v5), (int)sub_102C76A0, 0.0, 0);
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(HIDWORD(v5) + 916) )
      {
        sub_10019680((_DWORD *)(HIDWORD(v5) + 880), (int)a2);
        v6 = sub_1026A890((unsigned int *)(HIDWORD(v5) + 880));
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
        {
          if ( !*(_DWORD *)(HIDWORD(v5) + 928) )
          {
            *(_DWORD *)(HIDWORD(v5) + 928) = 1;
            sub_1023C380((_DWORD *)HIDWORD(v5), (int)"SuitRecharge.Start", 0.0, 0);
            *(float *)(HIDWORD(v5) + 932) = *(float *)(dword_106B31C8 + 12) + 0.5600000000000001;
            sub_1010DD80((_DWORD *)(HIDWORD(v5) + 1036), v5, 0.0);
          }
          if ( *(_DWORD *)(HIDWORD(v5) + 928) == 1
            && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 932) )
          {
            *(_DWORD *)(HIDWORD(v5) + 928) = 2;
            sub_10165630(v15, SHIDWORD(v5), (int)"SuitRecharge.ChargingLoop");
            sub_10219A50(v15);
            v7 = sub_1001F3C0((_DWORD *)HIDWORD(v5));
            sub_1023C580((int)a2, SHIDWORD(v5), v15, v7, (int)"SuitRecharge.ChargingLoop", 0, 0.0, 0);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
          }
          v8 = (int *)sub_1026A890((unsigned int *)(HIDWORD(v5) + 880));
          v9 = 1;
          v10 = *(_DWORD *)(HIDWORD(v5) + 248) >> 13;
          v17 = v8;
          v18 = 100;
          if ( (v10 & 1) != 0 )
          {
            v18 = *(_DWORD *)(dword_106DE254 + 48);
            v11 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 448);
            v16 = *(_DWORD *)(v5 + 220);
            v9 = 10;
            v12 = v11(v5);
            if ( v16 < v12 )
              (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 260))(v5, 5.0, 0);
          }
          if ( (*(int (__thiscall **)(int *))(*v17 + 1572))(v17) < v18 )
          {
            sub_102C7580((_DWORD *)HIDWORD(v5), *(_DWORD *)(HIDWORD(v5) + 924) - v9);
            sub_101EC2E0(v17, v9, v18);
          }
          v19 = (float)*(int *)(HIDWORD(v5) + 924);
          v13 = v19 / sub_102C7550((_DWORD *)HIDWORD(v5));
          sub_10108AE0((int *)(HIDWORD(v5) + 940), SLOBYTE(v13), v5, SHIDWORD(v5));
          *(float *)(HIDWORD(v5) + 916) = *(float *)(dword_106B31C8 + 12) + 0.1;
        }
      }
    }
    else if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(HIDWORD(v5) + 932) )
    {
      *(float *)(HIDWORD(v5) + 932) = *(float *)(dword_106B31C8 + 12) + 0.62;
      sub_1023C380((_DWORD *)HIDWORD(v5), (int)"SuitRecharge.Deny", 0.0, 0);
    }
  }
}
