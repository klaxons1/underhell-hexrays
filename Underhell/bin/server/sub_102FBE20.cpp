char __userpurge sub_102FBE20@<al>(int a1@<ecx>, int a2@<edi>, char a3)
{
  char result; // al
  int v5; // eax
  int v6[8]; // [esp+Ch] [ebp-20h] BYREF

  result = a3;
  if ( *(_BYTE *)(a1 + 4094) != a3 )
  {
    *(_BYTE *)(a1 + 4094) = a3;
    if ( a3 )
    {
      sub_10165630(v6, a1, (int)"NPC_Antlion.WingsOpen");
      sub_10219A50(v6);
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      sub_1023C580(a2, a1, v6, v5, (int)"NPC_Antlion.WingsOpen", 0, 0.0, 0);
      sub_100C1600(a1, 1, 1);
      *(_BYTE *)(a1 + 4125) = 1;
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
    }
    else
    {
      sub_1023B860((_DWORD *)a1, (int)"NPC_Antlion.WingsOpen");
      return sub_100C1600(a1, 1, 0);
    }
  }
  return result;
}
