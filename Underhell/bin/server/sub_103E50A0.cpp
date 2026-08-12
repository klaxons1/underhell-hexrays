void __usercall sub_103E50A0(int a1@<ecx>, int a2@<ebx>)
{
  void (__thiscall *v3)(int); // eax
  void (__thiscall *v4)(int); // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  float v9; // [esp+4h] [ebp-90h]
  float v10[7]; // [esp+14h] [ebp-80h] BYREF
  float v11[11]; // [esp+30h] [ebp-64h] BYREF
  int v12[6]; // [esp+5Ch] [ebp-38h] BYREF
  _DWORD v13[8]; // [esp+74h] [ebp-20h] BYREF

  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v9, 0);
  if ( (**(int (__thiscall ***)(int))(a1 + 1120))(a1 + 1120) )
  {
    v3 = *(void (__thiscall **)(int))(a1 + 8);
    if ( v3 )
      v3(a1);
  }
  if ( (**(int (__thiscall ***)(int))(a1 + 1120))(a1 + 1120) )
  {
    v4 = *(void (__thiscall **)(int))(a1 + 8);
    if ( v4 )
      v4(a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
    if ( *(_BYTE *)(a1 + 896) && (*(_BYTE *)(a1 + 1130) || *(_BYTE *)(a1 + 1129)) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 340))(a1);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 88))(v5, *(unsigned __int8 *)(a1 + 1130), 1);
    }
  }
  sub_101BD0E0((int *)(a1 + 1676), a2, *(float *)&a1, a1);
  if ( *(float *)(a1 + 1240) > 0.0 )
  {
    v6 = dword_106B31C8;
    if ( *(float *)(a1 + 1240) - 1.0 <= *(float *)(dword_106B31C8 + 12)
      && *(float *)(a1 + 1240) - 0.80000001 > *(float *)(dword_106B31C8 + 12) )
    {
      sub_100D78A0(v13, a1, 0.80000001);
      sub_100F8510(v11);
      v7 = *(_DWORD *)(a1 + 24);
      v11[2] = 255.0;
      LODWORD(v11[0]) = 6;
      LODWORD(v11[1]) = "Weapon_Mortar.Incomming";
      LODWORD(v11[3]) = 180;
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v7);
      sub_1023BE40(v13, v8, (int)v11);
      sub_102375F0(v12);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
      v6 = dword_106B31C8;
    }
    if ( *(float *)(v6 + 12) >= (double)*(float *)(a1 + 1240) )
    {
      if ( *(float *)(a1 + 1244) != flt_106F1CA8
        || *(float *)(a1 + 1248) != flt_106F1CAC
        || *(float *)(a1 + 1252) != flt_106F1CB0 )
      {
        sub_103E3810((float *)a1);
      }
      sub_1001F130(v10);
      v10[0] = *(float *)(a1 + 1244);
      v10[1] = *(float *)(a1 + 1248);
      v10[2] = *(float *)(a1 + 1252);
      v11[7] = 512.0;
      sub_1028E890((int)"ThumperDust", (int)v10);
      *(float *)(a1 + 1240) = 0.0;
    }
  }
}
