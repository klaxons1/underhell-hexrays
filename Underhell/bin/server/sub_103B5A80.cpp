void __usercall sub_103B5A80(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // ecx
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st4
  double v14; // st3
  double v15; // st5
  double v16; // st6
  int v17; // eax
  int v18; // [esp-4h] [ebp-B0h]
  float v19; // [esp+4h] [ebp-A8h]
  int v21[8]; // [esp+14h] [ebp-98h] BYREF
  _BYTE v22[12]; // [esp+34h] [ebp-78h] BYREF
  float v23[3]; // [esp+40h] [ebp-6Ch] BYREF
  float v24; // [esp+4Ch] [ebp-60h]
  float v25; // [esp+50h] [ebp-5Ch]
  float v26; // [esp+54h] [ebp-58h]
  float v27[3]; // [esp+88h] [ebp-24h] BYREF
  float v28; // [esp+94h] [ebp-18h]
  float v29; // [esp+98h] [ebp-14h]
  float v30; // [esp+9Ch] [ebp-10h]
  float v31; // [esp+A0h] [ebp-Ch] BYREF
  float v32; // [esp+A4h] [ebp-8h]
  float v33; // [esp+A8h] [ebp-4h]
  int savedregs; // [esp+ACh] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 3800);
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1], v4[1] == v3 >> 12) && *v4 )
  {
    v5 = dword_106B31C8;
    if ( sub_100E9200((_DWORD *)a1, (int)"CANNON_HIT") <= *(float *)(v5 + 12) )
    {
      *(float *)(a1 + 3652) = *(float *)(v5 + 12) + 5.0;
      sub_100BD6D0((void *)a1, dword_106EAD50, (int)&v31, 0, 0, 0);
      v6 = *(_DWORD *)(a1 + 3800);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1];
      v8 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 576))(v7, a2);
      v9 = v8[1] - v32;
      v10 = v8[2] - v33;
      v28 = *v8 - v31;
      v29 = v9;
      v30 = v10;
      v11 = off_10689714();
      v27[0] = v28 * v11 + v31;
      v27[1] = v29 * v11 + v32;
      v27[2] = v11 * v30 + v33;
      sub_1002A5F0((int)&savedregs, a1, &v31, v27, 1174421507, a1, 0, (int)v22);
      *(float *)(a1 + 3676) = v23[0];
      *(float *)(a1 + 3680) = v23[1];
      *(float *)(a1 + 3684) = v23[2];
      v12 = v24;
      v13 = v25;
      v14 = v25 * 16.0;
      v15 = 16.0 * v26;
      v16 = v26;
      *(float *)(a1 + 3676) = v24 * 16.0 + *(float *)(a1 + 3676);
      *(float *)(a1 + 3680) = v14 + *(float *)(a1 + 3680);
      *(float *)(a1 + 3684) = v15 + *(float *)(a1 + 3684);
      *(float *)(a1 + 3688) = v12;
      *(float *)(a1 + 3692) = v13;
      *(float *)(a1 + 3696) = v16;
      sub_10154AF0((_DWORD *)a1, 1);
      sub_10154BB0(1);
      sub_10154CA0((int)v23);
      sub_10154B90();
      sub_10165630(v21, a1, (int)"NPC_Strider.Shoot");
      v18 = *(_DWORD *)(a1 + 24);
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
      sub_1023C580(v5, a1, v21, v17, v18, (int)"NPC_Strider.Shoot", 0.0, COERCE_INT(0.0));
      v19 = *(float *)(dword_106B31C8 + 12) + 0.2;
      sub_100EC3F0((_DWORD *)a1, (int)sub_103B3E40, v19, (int)"CANNON_HIT");
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v21);
    }
    else
    {
      DevMsg("Strider refiring cannon?\n");
    }
  }
  else
  {
    DevMsg("Strider firing cannon at NULL target\n");
    sub_10154AF0((_DWORD *)a1, 1);
    sub_10154BB0(3);
    sub_10154B90();
  }
}
