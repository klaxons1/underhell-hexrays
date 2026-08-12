void __usercall sub_100F5E20(int a1@<esi>, int a2, int a3, int a4, int a5, float a6)
{
  double v6; // st6
  float *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float v17; // [esp+14h] [ebp-DCh]
  float v18; // [esp+18h] [ebp-D8h]
  float v19; // [esp+18h] [ebp-D8h]
  int v20; // [esp+1Ch] [ebp-D4h]
  _DWORD v22[8]; // [esp+2Ch] [ebp-C4h] BYREF
  int v23; // [esp+4Ch] [ebp-A4h] BYREF
  float v24; // [esp+50h] [ebp-A0h]
  int v25; // [esp+54h] [ebp-9Ch]
  int v26; // [esp+58h] [ebp-98h]
  int v27; // [esp+5Ch] [ebp-94h]
  int v28; // [esp+60h] [ebp-90h]
  char v29; // [esp+64h] [ebp-8Ch]
  int v30; // [esp+68h] [ebp-88h]
  char v31; // [esp+6Ch] [ebp-84h]
  int v32; // [esp+ECh] [ebp-4h]
  float v33; // [esp+F8h] [ebp+8h]

  if ( a2 )
  {
    v6 = a6;
    if ( a6 <= 1.0 )
    {
      if ( v6 < 0.0 || v6 <= 0.0078125 )
        return;
    }
    else
    {
      a6 = 1.0;
    }
    v7 = (float *)sub_100F52B0(&off_103E1A70, a2);
    if ( v7 )
    {
      v24 = 1.0;
      v25 = 100;
      v26 = 100;
      v27 = 100;
      v23 = 0;
      v28 = 75;
      v31 = 0;
      v29 = 0;
      v30 = 0;
      v32 = 0;
      if ( (unsigned __int8)sub_10120740(a4, a5, &v23, 0) )
      {
        if ( *((_DWORD *)v7 + 1) )
        {
          v33 = (double)(v27 - v26) * a6 + (double)v26;
          v14 = sub_101218C0(v8);
          v19 = v24 * a6;
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v14 + 48))(
            v14,
            *(_DWORD *)v7,
            LODWORD(v19),
            0.1);
          v16 = sub_101218C0(v15);
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v16 + 44))(
            v16,
            *(_DWORD *)v7,
            LODWORD(v33),
            0.1);
        }
        else
        {
          if ( v24 * a6 <= 0.1 )
            return;
          *((_DWORD *)v7 + 1) = a2;
          *(float *)&v20 = (float)v28;
          sub_10025C70(v22, a2, v20);
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a2 + 8) + 36))(a2 + 8, a1);
          if ( v10 < 0 )
            v10 = 0;
          v11 = sub_101218C0(v9);
          *(_DWORD *)v7 = (*(int (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v11 + 28))(
                            v11,
                            v22,
                            v10,
                            4,
                            a4);
          v13 = sub_101218C0(v12);
          v18 = (float)v25;
          v17 = v24 * a6;
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 8))(
            v13,
            *(_DWORD *)v7,
            LODWORD(v17),
            LODWORD(v18),
            0.0);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
        }
        v7[2] = *((float *)off_103DC81C + 3);
        v7[3] = *((float *)off_103DC81C + 3);
      }
    }
  }
}
