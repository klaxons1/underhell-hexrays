int __userpurge sub_103827A0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // esi
  int v5; // eax
  int v7[8]; // [esp+Ch] [ebp-20h] BYREF

  sub_1023B860(a1, (int)"NPC_Manhack.Stunned");
  sub_10165630(v7, (int)a1, (int)"NPC_Manhack.Die");
  v4 = a1[6];
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v4);
  sub_1023C580(a2, v4, v7, v5, (int)"NPC_Manhack.Die", 0, 0.0, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
}
