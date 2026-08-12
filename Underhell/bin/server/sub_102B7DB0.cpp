int __thiscall sub_102B7DB0(int this, char a2)
{
  void (__noreturn ***v3)(); // edi
  int v4; // eax
  int v5; // eax
  char v6; // cl
  char v7; // al
  _DWORD v9[8]; // [esp+34h] [ebp-20h] BYREF

  v3 = sub_1023DBA0();
  sub_10219BB0(v9);
  v9[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v9);
  v9[0] = &CReliableBroadcastRecipientFilter::`vftable';
  sub_10219A50(v9);
  if ( !*(_DWORD *)(this + 1164) )
  {
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
    v5 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v3)[9])(
           v3,
           v9,
           v4,
           "NPC_CombineMine.ActiveLoop");
    *(_DWORD *)(this + 1164) = v5;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v3)[2])(v3, v5, 1.0, 100.0, 0.0);
  }
  if ( a2 )
  {
    if ( *(_BYTE *)(this + 1169) )
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.TurnOn", 0.0, 0);
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
        v3,
        *(_DWORD *)(this + 1164),
        1.0,
        0.1);
    }
    v6 = 0;
    v7 = 0;
    if ( *(_BYTE *)(this + 1169) )
      v6 = -1;
    else
      v7 = -1;
    sub_102B7B10((float *)this, 1, v6, v7, 0, 190);
  }
  else
  {
    if ( *(_BYTE *)(this + 1169) )
      sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.TurnOff", 0.0, 0);
    *(_DWORD *)(this + 1132) = -1;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
      v3,
      *(_DWORD *)(this + 1164),
      0.0,
      0.1);
    sub_102B7B10((float *)this, 0, 0, 0, 0, 0);
  }
  *(_BYTE *)(this + 1128) = a2;
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v9);
}
