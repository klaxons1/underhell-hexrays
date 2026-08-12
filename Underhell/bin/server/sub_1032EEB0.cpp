// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_1032EEB0(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int (__thiscall *v5)(_DWORD *, _DWORD); // edx
  float *v6; // eax
  double v7; // st7
  int (__thiscall *v8)(_DWORD *, _BYTE *); // edx
  float *v9; // eax
  void (__thiscall *v10)(int, float *, int, float *); // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int (__thiscall *v14)(int, int); // edx
  int v15; // eax
  int v16; // esi
  int (__thiscall *v17)(int); // edx
  int v18; // eax
  float v20[22]; // [esp+40h] [ebp-11Ch] BYREF
  _BYTE v21[12]; // [esp+98h] [ebp-C4h] BYREF
  int v22; // [esp+A4h] [ebp-B8h] BYREF
  float v23; // [esp+C4h] [ebp-98h]
  __int16 v24; // [esp+D8h] [ebp-84h]
  int v25; // [esp+E4h] [ebp-78h]
  _BYTE v26[24]; // [esp+F4h] [ebp-68h] BYREF
  _DWORD v27[8]; // [esp+10Ch] [ebp-50h] BYREF
  float v28[2]; // [esp+12Ch] [ebp-30h] BYREF
  int v29; // [esp+134h] [ebp-28h]
  float v30; // [esp+138h] [ebp-24h] BYREF
  float v31; // [esp+13Ch] [ebp-20h]
  int v32; // [esp+140h] [ebp-1Ch]
  float v33; // [esp+144h] [ebp-18h] BYREF
  float v34; // [esp+148h] [ebp-14h]
  float v35; // [esp+14Ch] [ebp-10h]
  int v36; // [esp+150h] [ebp-Ch]
  void *v37; // [esp+154h] [ebp-8h]
  void *retaddr; // [esp+15Ch] [ebp+0h]

  v36 = a2;
  v37 = retaddr;
  (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD, int))(*a1 + 528))(a1, &v30, 0, 0, a4);
  v5 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 504);
  v33 = v30 * 128.0;
  v34 = v31 * 128.0;
  v35 = 128.0 * *(float *)&v32;
  v6 = (float *)v5(a1, LODWORD(v33));
  v7 = *v6 + v33;
  v33 = COERCE_FLOAT(v26);
  v28[0] = v7;
  v28[1] = v6[1] + v34;
  v8 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 504);
  *(float *)&v29 = v6[2] + v35;
  v9 = (float *)v8(a1, v26);
  sub_1001F180(v20, v9, v28);
  sub_10265570(&v33, (int)a1, 0);
  v10 = *(void (__thiscall **)(int, float *, int, float *))(*(_DWORD *)dword_106B31F4 + 16);
  v33 = COERCE_FLOAT(v21);
  v10(dword_106B31F4, v20, 33570827, &v33);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v21, (int)&v22, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v23 )
  {
    if ( v23 < 1.0
      && v25
      && (v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v24)) != 0 )
    {
      v13 = *(unsigned __int16 *)(v11 + 50);
      v33 = 0.0;
      v32 = v12;
      v14 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 24);
      *(float *)&v32 = 0.0;
      v15 = v14(dword_106BAFF8, v13);
      sub_1023C380(a1, v15, *(float *)&v32, SLODWORD(v33));
    }
    else
    {
      sub_10165630(v27, (int)a1, (int)"NPC_BaseZombie.PoundDoor");
      v16 = a1[6];
      v33 = 0.0;
      *(float *)&v32 = 0.0;
      v17 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72);
      v31 = 0.0;
      v30 = COERCE_FLOAT("NPC_BaseZombie.PoundDoor");
      v29 = v16;
      v18 = v17(dword_106B31D0);
      sub_1023C580(a3, v16, v27, v18, v29, SLODWORD(v30), v31, v32);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
    }
  }
}
