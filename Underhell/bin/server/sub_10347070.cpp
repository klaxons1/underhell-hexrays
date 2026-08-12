char __usercall sub_10347070@<al>(int a1@<ecx>, double a2@<st0>)
{
  char result; // al
  float v4; // [esp+2Ch] [ebp-4Ch]
  float v5; // [esp+30h] [ebp-48h]
  _DWORD v6[8]; // [esp+3Ch] [ebp-3Ch] BYREF
  float v7[3]; // [esp+5Ch] [ebp-1Ch] BYREF
  float v8[3]; // [esp+68h] [ebp-10h] BYREF
  int v9; // [esp+74h] [ebp-4h] BYREF

  sub_10025DD0((_DWORD *)a1);
  sub_1003A0D0(a1, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( *(_BYTE *)(a1 + 3639) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    *(float *)(a1 + 3672) = *(float *)(a1 + 704);
    *(float *)(a1 + 3676) = *(float *)(a1 + 708);
    *(float *)(a1 + 3680) = *(float *)(a1 + 712);
    v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)a1, v4, 0);
    if ( *(_BYTE *)(a1 + 224) != 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
      *(_BYTE *)(a1 + 224) = 2;
      sub_1023C380((_DWORD *)a1, (int)"NPC_CombineCamera.Die", 0.0, 0);
      v8[0] = 1.0;
      v8[1] = 1.0;
      v8[2] = 1.0;
      sub_10111860(a1 + 320, &flt_106F1CA8, v8, v7);
      sub_10219BB0(v6);
      v6[0] = &CBroadcastRecipientFilter::`vftable';
      sub_1021A200((int)v6);
      ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, int))(*off_1065C5EC)[30])(
        v6,
        0.0,
        v7,
        word_10696BA0,
        2.5,
        10);
      ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
        off_1061B7A0,
        v7,
        1,
        1,
        0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106E6674);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 732))(a1);
    if ( result )
    {
      result = sub_103467B0(a1);
      if ( !result )
      {
        sub_10346E20((_DWORD *)a1, 24.0);
        v9 = 0;
        sub_1002AB40((float *)(a1 + 864), &v9);
        return sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
      }
    }
  }
  else
  {
    sub_10039F40((int *)a1, dword_106E666C);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)a1, v5, 0);
  }
  return result;
}
