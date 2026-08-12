int __usercall sub_10301ED0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  _BYTE *v3; // edi
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int v7[8]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+30h] [ebp-4h] BYREF

  sub_102FCEE0((float *)a1);
  v3 = *(_BYTE **)(a1 + 2372);
  if ( v3 == (_BYTE *)dword_106E2974 )
  {
    if ( !*(_BYTE *)(a1 + 4093) )
    {
      sub_10165630(v7, a1, (int)"NPC_Antlion.LoopingAgitated");
      sub_10219A50(v7);
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      sub_1023C580((int)v3, a1, v7, v4, (int)"NPC_Antlion.LoopingAgitated", 0, 0.0, 0);
      *(_BYTE *)(a1 + 4093) = 1;
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
    }
  }
  else if ( *(_BYTE *)(a1 + 4093) == 1 )
  {
    sub_1023B860((_DWORD *)a1, (int)"NPC_Antlion.LoopingAgitated");
    *(_BYTE *)(a1 + 4093) = 0;
  }
  if ( *(_BYTE *)(a1 + 4094)
    && v3 != (_BYTE *)dword_106E298C
    && v3 != (_BYTE *)30
    && v3 != (_BYTE *)28
    && v3 != (_BYTE *)dword_106E295C
    && v3 != (_BYTE *)dword_106E2988 )
  {
    *(_BYTE *)(a1 + 4094) = 0;
    sub_1023B860((_DWORD *)a1, (int)"NPC_Antlion.WingsOpen");
    sub_100C1600(a1, 1, 0);
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x20) != 0
    && v3 != (_BYTE *)dword_106E2978
    && v3 != (_BYTE *)dword_106E297C
    && v3 != (_BYTE *)dword_106E2980 )
  {
    DevMsg("Antlion failed to unburrow properly!\n");
    sub_10035360((int *)a1, 32);
    sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) & 0xFFFB);
    v3 = (_BYTE *)(a1 + 225);
    if ( *(_BYTE *)(a1 + 225) != 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
      *v3 = 2;
    }
    sub_100EA9A0((int *)a1, 0x8000);
    v8 = -3;
    sub_100332F0((int *)(a1 + 248), &v8);
  }
  if ( sub_10023D10((_DWORD *)a1, 26) )
    *(float *)(a1 + 3668) = 0.0;
  if ( sub_10300170(a1, a2, (int)v3) )
    sub_10023CB0((char *)a1, 75);
  else
    sub_10023E00((char *)a1, 75);
  result = sub_10041D00((_DWORD *)a1);
  v6 = *(_DWORD *)(a1 + 3624);
  if ( v6 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 88))(v6);
  return result;
}
