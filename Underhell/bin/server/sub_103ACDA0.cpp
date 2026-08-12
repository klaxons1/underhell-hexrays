void __thiscall sub_103ACDA0(int this)
{
  int v2; // edi
  double v3; // st6
  double v4; // rt0
  __int16 v5; // ax
  int v6; // ecx
  void *v7; // ebx
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st7
  float v17; // [esp+10h] [ebp-11Ch]
  int v18[20]; // [esp+28h] [ebp-104h] BYREF
  int v19[8]; // [esp+78h] [ebp-B4h] BYREF
  float v20[3]; // [esp+98h] [ebp-94h] BYREF
  _BYTE v21[12]; // [esp+A4h] [ebp-88h] BYREF
  int v22; // [esp+B0h] [ebp-7Ch] BYREF
  float v23; // [esp+B4h] [ebp-78h]
  float v24; // [esp+B8h] [ebp-74h]
  float v25; // [esp+BCh] [ebp-70h]
  float v26; // [esp+C0h] [ebp-6Ch]
  float v27; // [esp+C4h] [ebp-68h]
  int v28; // [esp+F0h] [ebp-3Ch]
  float v29[3]; // [esp+F8h] [ebp-34h] BYREF
  float v30[3]; // [esp+104h] [ebp-28h] BYREF
  int v31[3]; // [esp+110h] [ebp-1Ch] BYREF
  float v32; // [esp+11Ch] [ebp-10h] BYREF
  float v33; // [esp+120h] [ebp-Ch]
  float v34; // [esp+124h] [ebp-8h]
  bool v35; // [esp+12Bh] [ebp-1h]
  int savedregs; // [esp+12Ch] [ebp+0h] BYREF

  if ( *(_DWORD *)(this + 3720) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_103ABDA0(this, (float *)v31, *(float *)(this + 580), *(float *)(this + 584), *(float *)(this + 588));
    v2 = this + 3672;
    v3 = 3600.0 * *(float *)(this + 3680);
    v4 = *(float *)(this + 3676) * 3600.0;
    v32 = *(float *)(this + 3672) * 3600.0 + *(float *)v31;
    v33 = v4 + *(float *)&v31[1];
    v34 = v3 + *(float *)&v31[2];
    sub_1002A5F0((int)&savedregs, this, (float *)v31, &v32, 1174421507, this, 0, (int)v21);
    sub_103ABE20(this);
    v5 = (**(int (__thiscall ***)(int, int *, _DWORD))dword_106B31F4)(dword_106B31F4, &v22, 0);
    v6 = *(_DWORD *)(this + 3720);
    v35 = (v5 & 0x4030) != 0;
    sub_100E10C0(v6, (float *)&v22);
    sub_100F9B80(*(_DWORD *)(this + 3720));
    sub_100BD6D0((void *)this, 1, (int)v29, 0, 0, 0);
    v30[0] = *(float *)&v22 - v29[0];
    v30[1] = v23 - v29[1];
    v30[2] = v24 - v29[2];
    off_10689714();
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 1836))(this, v30);
    if ( !v28 )
      goto LABEL_22;
    v7 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 288))(v28);
    if ( !v7 )
      goto LABEL_22;
    if ( *(float *)(this + 3704) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_10247FD0();
      v8 = 0.0;
      v9 = *(_DWORD *)(this + 3668);
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            v8 = 10.0;
        }
        else
        {
          v8 = 3.0;
        }
      }
      else
      {
        v8 = 1.0;
      }
      v17 = v8;
      sub_10248110((int)v18, this, this, v17, 256, 0);
      sub_10248690((float *)v18, (float *)(this + 3672), (float *)&v22, 1.0);
      sub_100E8760(v7, (int)v18, this + 3672, (int)v21);
      sub_10248230();
      *(float *)(this + 3704) = *(float *)(dword_106B31C8 + 12) + 0.1;
    }
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 220))(v7) != 6 )
    {
      if ( 0.0 == *(float *)(this + 3716) )
      {
        sub_10165630(v19, *(_DWORD *)(this + 3720), (int)"NPC_Stalker.BurnFlesh");
        sub_10219A50(v19);
        v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(*(_DWORD *)(this + 3720) + 24));
        sub_1023C580(v2, this, v19, v11, (int)"NPC_Stalker.BurnFlesh", 0, 0.0, 0);
        *(float *)(this + 3716) = 1.0;
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
      }
      if ( 0.0 != *(float *)(this + 3712) )
      {
        v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(*(_DWORD *)(this + 3720) + 24));
        sub_1023AEF0(v12, (int)"NPC_Stalker.BurnWall");
        *(float *)(this + 3712) = 0.0;
      }
      v13 = v24 - 24.0;
      v24 = v13;
      if ( !v35 )
      {
        v32 = v25 * 8.0 + *(float *)&v22;
        v33 = v26 * 8.0 + v23;
        v34 = v13 + 8.0 * v27;
        sub_103AC030((float *)this, (int)&v32);
      }
    }
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 220))(v7) != 6 )
    {
      if ( !v35 )
        return;
      v16 = v24;
    }
    else
    {
LABEL_22:
      if ( 0.0 == *(float *)(this + 3712) )
      {
        sub_10165630(v19, *(_DWORD *)(this + 3720), (int)"NPC_Stalker.BurnWall");
        sub_10219A50(v19);
        v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(*(_DWORD *)(this + 3720) + 24));
        sub_1023C580(v2, this, v19, v14, (int)"NPC_Stalker.BurnWall", 0, 0.0, 0);
        *(float *)(this + 3712) = 1.0;
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
      }
      if ( 0.0 != *(float *)(this + 3716) )
      {
        v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(*(_DWORD *)(this + 3720) + 24));
        sub_1023AEF0(v15, (int)"NPC_Stalker.BurnFlesh");
        *(float *)(this + 3716) = 0.0;
      }
      sub_10264E40((int)v21, (int)"RedGlowFade");
      sub_10264E40((int)v21, (int)"FadingScorch");
      v16 = v24 - 24.0;
      v24 = v16;
      if ( !v35 )
      {
        v32 = v25 * 8.0 + *(float *)&v22;
        v33 = v26 * 8.0 + v23;
        v34 = v16 + 8.0 * v27;
        sub_103AC030((float *)this, (int)&v32);
        return;
      }
    }
    v32 = *(float *)&v22 + 3.0;
    v33 = v23 + 3.0;
    v34 = v16 + 3.0;
    v20[0] = *(float *)&v22 - 3.0;
    v20[1] = v23 - 3.0;
    v20[2] = v16 - 3.0;
    sub_102605C0(v20, &v32, 10);
  }
}
