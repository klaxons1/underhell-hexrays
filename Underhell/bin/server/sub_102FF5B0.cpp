int __thiscall sub_102FF5B0(int this, int a2)
{
  int i; // edi
  int v4; // ecx
  unsigned int v5; // eax
  int *v6; // ecx
  float *v7; // edi
  float *v8; // edi
  int v9; // eax
  int v10; // eax
  int v12; // [esp+4h] [ebp-9Ch]
  float v13; // [esp+14h] [ebp-8Ch]
  _BYTE v14[84]; // [esp+20h] [ebp-80h] BYREF
  int v15[8]; // [esp+74h] [ebp-2Ch] BYREF
  float v16[3]; // [esp+94h] [ebp-Ch] BYREF
  int savedregs; // [esp+A0h] [ebp+0h] BYREF
  int v18; // [esp+A8h] [ebp+8h]

  if ( *(_BYTE *)(this + 4094) )
  {
    *(_BYTE *)(this + 4094) = 0;
    sub_1023B860((_DWORD *)this, (int)"NPC_Antlion.WingsOpen");
    sub_100C1600(this, 1, 0);
  }
  sub_1004AF00((_DWORD *)this);
  if ( sub_100697A0((_DWORD *)this, 91, 1) || sub_100697A0((_DWORD *)this, 93, 1) )
    *(_DWORD *)(this + 252) |= 0x10u;
  if ( (*(_BYTE *)(a2 + 64) & 1) != 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1023D4B0(1024, (float *)(this + 580), 256, 0.5, this, 0, 0);
  }
  for ( i = 0; i < *(_DWORD *)(this + 3640); ++i )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 80))(v4, a2);
  }
  sub_10035690(this, a2, i, a2);
  v5 = *(_DWORD *)(a2 + 40);
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5 >> 12 )
    {
      v7 = (float *)*v6;
      if ( *v6 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 340))(*v6)
          && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 1040))(this, a2) == 1 )
        {
          if ( ((_DWORD)v7[63] & 0x800) != 0 )
            sub_100DAE60((int)v7);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v16[0] = *(float *)(this + 580);
          v16[1] = *(float *)(this + 584);
          v8 = v7 + 145;
          v16[2] = *(float *)(this + 588) + 64.0;
          sub_1002A5F0((int)&savedregs, this, v16, v8, 33570827, this, 0, (int)v14);
          sub_10264E40((int)v14, (int)"Antlion.Splat");
          v18 = *(int *)(a2 + 52);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 276))(this, v18);
          sub_100E84B0(
            *(_DWORD *)(this + 580),
            *(_DWORD *)(this + 584),
            *(_DWORD *)(this + 588),
            (int)&flt_106B4F40,
            v9,
            v13);
          sub_100D78A0(v15, this, 0.80000001);
          v12 = *(_DWORD *)(this + 24);
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
          sub_1023C580((int)v8, this, v15, v10, v12, (int)"NPC_Antlion.RunOverByVehicle", 0.0, COERCE_INT(0.0));
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
        }
      }
    }
  }
  return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), (int)"ZapThink");
}
