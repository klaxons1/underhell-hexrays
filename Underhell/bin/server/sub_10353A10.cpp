void __userpurge sub_10353A10(int a1@<ecx>, int a2@<edi>, char a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11[8]; // [esp+14h] [ebp-40h] BYREF
  float v12[5]; // [esp+34h] [ebp-20h] BYREF
  int v13[3]; // [esp+48h] [ebp-Ch] BYREF
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  if ( *(_BYTE *)(a1 + 4080) )
  {
    *(_BYTE *)(a1 + 4080) = 0;
    *(float *)(a1 + 4076) = *(float *)(dword_106B31C8 + 12) + 4.0;
    *(float *)(a1 + 4164) = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_10352F00((_DWORD *)a1, (int)&savedregs, a1, v12);
    sub_10154AF0((_DWORD *)a1, 1);
    sub_10154BB0(1);
    sub_10154CA0((int)v12);
    sub_10154B90();
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      v4 = *(_DWORD *)(a1 + 4236);
      if ( v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 4236) & 0xFFF) + 2] == v4 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 4236) & 0xFFF) + 1] )
      {
        v12[3] = 1.0;
        v5 = *(_DWORD *)(a1 + 4236);
        if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4236) & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4236) & 0xFFF) + 1];
        sub_1010C6E0(
          (float *)dword_10614CA8,
          v6,
          "Stop",
          COERCE_INT(1.0),
          SLODWORD(v12[4]),
          v13[0],
          -1,
          1,
          0.0,
          a1,
          a1,
          0);
      }
    }
    if ( a3 )
    {
      sub_10165630(v11, a1, (int)"NPC_Strider.Shoot");
      v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      sub_1023C580(a2, a1, v11, v7, (int)"NPC_Strider.Shoot", 0, 0.0, 0);
      *(float *)v13 = 0.0;
      *(float *)&v13[1] = 0.0;
      *(float *)&v13[2] = 200.0;
      sub_100EA150(a1, (float *)v13);
      sub_10353640((_DWORD *)a1, (int)&savedregs, a2, a1);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
    }
    v8 = *(_DWORD *)(a1 + 4092);
    if ( v8 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 4092) & 0xFFF) + 2] == v8 >> 12 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 4092) & 0xFFF) + 1] )
      {
        *(_DWORD *)(a1 + 4092) = -1;
        v9 = *(_DWORD *)(a1 + 3648);
        if ( v9 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 3648) & 0xFFF) + 2] == v9 >> 12 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3648) & 0xFFF) + 1] )
          {
            v10 = sub_100B59D0((_DWORD *)a1);
            sub_100B7E60(a1, v10);
          }
        }
      }
    }
  }
}
