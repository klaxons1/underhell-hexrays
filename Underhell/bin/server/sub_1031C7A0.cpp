void __userpurge sub_1031C7A0(int a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  void (__noreturn ***v9)(); // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // ecx
  void (__thiscall *v14)(int, int); // eax
  unsigned int v15; // eax
  _DWORD *v16; // eax
  __int64 v17; // [esp+20h] [ebp-38h]
  float v18; // [esp+24h] [ebp-34h]
  float v19; // [esp+28h] [ebp-30h]
  float v20; // [esp+28h] [ebp-30h]
  _DWORD v22[8]; // [esp+38h] [ebp-20h] BYREF

  if ( !a4 && !*(_BYTE *)(a1 + 64) )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 48) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 48) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( v6[1] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          sub_1025FAC0(v8);
          *(_DWORD *)(a1 + 48) = -1;
        }
      }
    }
    sub_1031C450(a1 - 2104);
    v18 = *(float *)(dword_106B31C8 + 12) + *(float *)(a1 + 56) - 1.0;
    sub_100EC3F0((_DWORD *)(a1 - 2104), (int)sub_10313D10, v18, off_1066C8D8);
    v9 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, int))(*v9)[10])(v9, *(_DWORD *)(a1 + 44), a2);
    sub_10219BB0(v22);
    v22[0] = &CBroadcastRecipientFilter::`vftable';
    sub_1021A200((int)v22);
    v22[0] = &CReliableBroadcastRecipientFilter::`vftable';
    sub_10219A50(v22);
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 - 2080));
    v11 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v9)[9])(
            v9,
            v22,
            v10,
            "NPC_AttackHelicopterGrenade.PingCaptured");
    *(_DWORD *)(a1 + 44) = v11;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v9)[2])(v9, v11, 1.0, 100.0, 0.0);
    sub_100EC3F0((_DWORD *)(a1 - 2104), (int)sub_10318570, 0.0, 0);
    v19 = *(float *)(dword_106B31C8 + 12) + *(float *)(a1 + 56);
    sub_100EC4A0((int *)(a1 - 2104), v19, 0);
    v20 = *(float *)(dword_106B31C8 + 12) + *(float *)(a1 + 56) - 2.0;
    sub_100EC3F0((_DWORD *)(a1 - 2104), (int)sub_1031B4A0, v20, off_1066C8DC);
    if ( *(_DWORD *)(a1 - 1256) )
    {
      v12 = a1 - 2104;
      if ( *(_BYTE *)(a1 - 2020) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(v12 + 24);
        if ( v13 )
          sub_100194B0(v13, 848);
      }
      *(_DWORD *)(a1 - 1256) = 0;
    }
    v14 = *(void (__thiscall **)(int, int))(*(_DWORD *)(a1 - 2104) + 76);
    *(float *)(a1 + 68) = *(float *)(dword_106B31C8 + 12) + *(float *)(a1 + 56) - 1.0;
    v14(a1 - 2104, a3);
    v15 = *(_DWORD *)(a1 + 60);
    if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 60) & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 60) & 0xFFF) + 1];
    sub_101DAB00((_DWORD *)(a1 - 2104), v16);
    HIDWORD(v17) = a1 - 2104;
    LODWORD(v17) = a3;
    *(_BYTE *)(a1 + 64) = 1;
    sub_1010DD80((_DWORD *)(a1 + 72), v17, 0.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
  }
}
