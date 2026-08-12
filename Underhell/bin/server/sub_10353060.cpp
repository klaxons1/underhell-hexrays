int __usercall sub_10353060@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v8; // [esp+8h] [ebp-5Ch]
  int v9; // [esp+Ch] [ebp-58h]
  int v10[13]; // [esp+18h] [ebp-4Ch] BYREF
  int v11[3]; // [esp+4Ch] [ebp-18h] BYREF
  int v12[3]; // [esp+58h] [ebp-Ch] BYREF
  int savedregs; // [esp+64h] [ebp+0h] BYREF

  *(_BYTE *)(a1 + 4080) = 1;
  *(float *)(a1 + 4084) = *(float *)(dword_106B31C8 + 12) + 3.0;
  sub_100BF1B0((void *)a1, "BellyGun", (int)v12, 0, 0, 0);
  sub_10154AF0((_DWORD *)a1, 1);
  sub_10154BB0(2);
  sub_10154CA0((int)v12);
  sub_10154B90();
  sub_10165630(v10, a1, (int)"NPC_Strider.Charge");
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
  sub_1023C580(a2, a1, v10, v3, (int)"NPC_Strider.Charge", 0, 0.0, 0);
  sub_10352F00((_DWORD *)a1, (int)&savedregs, a1, (float *)v11);
  sub_1023D4B0(8, (float *)v11, 1024, 0.5, 0, 0, 0);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v4 = *(_DWORD *)(a1 + 4236);
    if ( v4 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 4236) & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 4236) & 0xFFF) + 1] )
    {
      *(float *)&v10[8] = 3.0;
      v9 = a1;
      v8 = a1;
      v5 = *(_DWORD *)(a1 + 4236);
      if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
      sub_1010C6E0((float *)dword_10614CA8, v6, "StartCharge", COERCE_INT(3.0), v10[9], v10[10], -1, 1, 0.0, v8, v9, 0);
    }
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
}
