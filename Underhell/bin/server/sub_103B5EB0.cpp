float *__thiscall sub_103B5EB0(void *this, float *a2, float a3)
{
  int v5[8]; // [esp+10h] [ebp-20h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  sub_100BF1B0(this, "right foot", (int)a2, 0, 0, 0);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    sub_10165630(v5, (int)this, (int)"NPC_Strider.FootstepEverywhere");
    sub_1023C580((int)a2, (int)this, v5, 0, (int)"NPC_Strider.FootstepEverywhere", (int)a2, a3, 0);
  }
  else
  {
    sub_10165630(v5, (int)this, (int)"NPC_Strider.Footstep");
    sub_1023C580((int)a2, (int)this, v5, 0, (int)"NPC_Strider.Footstep", (int)a2, a3, 0);
  }
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
  sub_103B43B0((int)this, (int)&savedregs, (int)a2, (int)this, a2);
  return a2;
}
