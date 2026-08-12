int __thiscall sub_101ED5A0(char *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  char v9; // bl
  int *v10; // edi
  int v11; // ebx
  unsigned int *v12; // edi
  unsigned int v13; // ebx
  _DWORD v15[8]; // [esp+20h] [ebp-34h] BYREF
  int v16; // [esp+40h] [ebp-14h]
  int v17; // [esp+44h] [ebp-10h]
  int v18; // [esp+48h] [ebp-Ch]

  sub_10219BB0(v15);
  v15[0] = &CSingleUserRecipientFilter::`vftable';
  sub_10219D00(this);
  sub_10219A50(v15);
  if ( this[3960] )
  {
    this[3960] = 0;
    byte_1063C508 = 0;
    sub_10154B40((int)v15, "ResetHUD");
    sub_10154BB0(0);
    sub_10154B90();
    if ( !this[3961] )
    {
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3CDC + 216))(dword_106B3CDC, this);
      (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1172))(this);
      this[3961] = 1;
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
      {
        v16 = 0;
        sub_1010C5D0(
          (float *)dword_10614CA8,
          "game_player_manager",
          "OnPlayerJoin",
          0,
          v17,
          v18,
          -1,
          0,
          0.0,
          (int)this,
          (int)this,
          0);
      }
    }
    v16 = 0;
    sub_1010C5D0(
      (float *)dword_10614CA8,
      "game_player_manager",
      "OnPlayerSpawn",
      0,
      v17,
      v18,
      -1,
      0,
      0.0,
      (int)this,
      (int)this,
      0);
  }
  v2 = sub_10280AC0();
  if ( v2 && (unsigned __int8)sub_10280B50(v2) )
  {
    sub_10154B40((int)v15, "GameTitle");
    sub_10154B90();
    sub_10280B60(0);
  }
  v3 = *((_DWORD *)this + 1002);
  if ( v3 != *((_DWORD *)this + 992) )
  {
    *((_DWORD *)this + 992) = v3;
    if ( sub_102941A0("Battery") != -1 )
    {
      sub_10154B40((int)v15, "Battery");
      sub_10154C10(*((_DWORD *)this + 1002));
      sub_10154B90();
    }
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1444))(this);
  v4 = this + 1908;
  v5 = 48;
  do
  {
    if ( *v4 != -1 )
    {
      v6 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
      v7 = *v4 >> 12;
      if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 888))(v8, this);
        }
      }
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v9 = (*((_DWORD *)this + 866) & 0x20000) != 0
    && *((_DWORD *)this + 882) > *((_DWORD *)this + 883)
    && *((int *)this + 55) < 100;
  if ( v9 != this[2330] )
  {
    (**((void (__thiscall ***)(int, int))this + 548))((int)(this + 2192), (int)(this + 2330));
    this[2330] = v9;
  }
  if ( *((_DWORD *)this + 859) )
    goto LABEL_34;
  if ( !*((_DWORD *)this + 858) )
  {
    v10 = (int *)(this + 2252);
    if ( (*((_DWORD *)this + 563) & 0x800) == 0 )
    {
      v11 = *v10 | 0x800;
      if ( *v10 != v11 )
      {
        (**((void (__thiscall ***)(int, int))this + 548))((int)(this + 2192), (int)(this + 2252));
        *v10 = v11;
      }
    }
  }
  if ( *((_DWORD *)this + 859) )
  {
LABEL_34:
    v12 = (unsigned int *)(this + 2252);
    if ( (*((_DWORD *)this + 563) & 0x800) != 0 )
    {
      v13 = *v12 & 0xFFFFF7FF;
      if ( *v12 != v13 )
      {
        (**((void (__thiscall ***)(int, int))this + 548))((int)(this + 2192), (int)(this + 2252));
        *v12 = v13;
      }
    }
  }
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3CDC + 440))(dword_106B3CDC, this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
}
