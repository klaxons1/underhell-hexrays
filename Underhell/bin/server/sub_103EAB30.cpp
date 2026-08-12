void __usercall sub_103EAB30(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  void (__thiscall *v7)(int, float *); // edx
  unsigned int v8; // eax
  int v9; // eax
  void *v10; // eax
  int v11; // esi
  int v12; // eax
  const char *v13; // [esp+0h] [ebp-B4h]
  float v14; // [esp+8h] [ebp-ACh]
  float v15[22]; // [esp+14h] [ebp-A0h] BYREF
  _BYTE v16[12]; // [esp+6Ch] [ebp-48h] BYREF
  int v17[3]; // [esp+78h] [ebp-3Ch] BYREF
  int v18[8]; // [esp+84h] [ebp-30h] BYREF
  float v19; // [esp+A4h] [ebp-10h]
  int v20[3]; // [esp+A8h] [ebp-Ch] BYREF

  if ( (!*(_BYTE *)(a1 + 1724) || *(_BYTE *)(a1 + 1690))
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1740)
    && !*(_BYTE *)(a1 + 1688) )
  {
    sub_101AB3B0("muzzle_star_uh", 4, a1, "muzzle_uh", 0);
    *(float *)(a1 + 1740) = *(float *)(dword_106B31C8 + 12) + 0.1;
    *(_BYTE *)(a1 + 1736) = 0;
    v3 = sub_100BEF30(a1, "muzzle");
    sub_100BCCA0((void *)a1, v3, (int)v16, (int)v20);
    sub_10422220(v20, v17);
    v4 = *(_DWORD *)(a1 + 1924);
    *(float *)v20 = 0.0087299999;
    *(float *)&v20[1] = 0.0087299999;
    *(float *)&v20[2] = 0.0087299999;
    sub_10312E60(v15, 1, (float *)(a1 + 1748), (float *)v17, (float *)v20, 56755.84, v4, 1);
    v5 = *(_DWORD *)(a1 + 1640);
    v15[14] = *(float *)(dword_106EE6F4 + 48);
    LODWORD(v15[16]) = 4;
    if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
    LODWORD(v15[18]) = v6;
    v7 = *(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 432);
    v15[13] = 0.0;
    v7(a1, v15);
    v8 = *(_DWORD *)(a1 + 1640);
    if ( v8 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 2] == v8 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 1640) & 0xFFF) + 1] )
    {
      v19 = *(float *)(dword_106B31C8 + 12) + 0.5;
      v9 = sub_1026A890((unsigned int *)(a1 + 1640));
      *(float *)(v9 + 4172) = v19;
      v10 = (void *)sub_1026A890((unsigned int *)(a1 + 1640));
      sub_101E3110(v10, 1u, 0, 4u);
    }
    if ( *(_BYTE *)(a1 + 1724) )
    {
      sub_10165630(v18, a1, (int)"FuncTank.Fire");
      v14 = 0.0;
      v13 = "FuncTank.Fire";
    }
    else
    {
      sub_10165630(v18, a1, (int)"PropJeep.FireCannon");
      v14 = 0.0;
      v13 = "PropJeep.FireCannon";
    }
    v11 = *(_DWORD *)(a1 + 24);
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v11);
    sub_1023C580(a2, v11, v18, v12, (int)v13, 0, v14, 0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
  }
}
