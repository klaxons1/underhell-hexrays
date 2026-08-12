void __cdecl sub_101B5E80(_DWORD *a1, int a2, int a3, int a4, float a5)
{
  double v6; // st6
  float *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  float v18; // [esp+14h] [ebp-DCh]
  float v19; // [esp+18h] [ebp-D8h]
  float v20; // [esp+18h] [ebp-D8h]
  int v21; // [esp+1Ch] [ebp-D4h]
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
  int v33; // [esp+F8h] [ebp+8h]
  float v34; // [esp+F8h] [ebp+8h]

  if ( a1 )
  {
    v6 = a5;
    if ( a5 <= 1.0 )
    {
      if ( v6 < 0.0 || v6 <= 0.0078125 )
        return;
    }
    else
    {
      a5 = 1.0;
    }
    v7 = (float *)sub_101B50A0(&dword_106B9F38, (int)a1);
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
      if ( (unsigned __int8)sub_1023A7A0(a3, a4, &v23, 0) )
      {
        if ( *((_DWORD *)v7 + 1) )
        {
          v34 = (double)(v27 - v26) * a5 + (double)v26;
          v15 = sub_1023DBA0(v8);
          v20 = v24 * a5;
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v15 + 48))(
            v15,
            *(_DWORD *)v7,
            LODWORD(v20),
            0.1);
          v17 = sub_1023DBA0(v16);
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v17 + 44))(
            v17,
            *(_DWORD *)v7,
            LODWORD(v34),
            0.1);
        }
        else
        {
          if ( v24 * a5 <= 0.1 )
            return;
          *((_DWORD *)v7 + 1) = a1;
          sub_1001F4E0(v22, (int)a1, v28);
          v10 = (int *)sub_1023DBA0(v9);
          v11 = *v10;
          v21 = v28;
          v33 = (int)v10;
          v12 = sub_1001F3C0(a1);
          *(_DWORD *)v7 = (*(int (__thiscall **)(int, _DWORD *, int, int, int, int))(v11 + 28))(
                            v33,
                            v22,
                            v12,
                            4,
                            a3,
                            v21);
          v14 = sub_1023DBA0(v13);
          v19 = (float)v25;
          v18 = v24 * a5;
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v14 + 8))(
            v14,
            *(_DWORD *)v7,
            LODWORD(v18),
            LODWORD(v19),
            0.0);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v22);
        }
        v7[2] = *(float *)(dword_106B31C8 + 12);
        v7[3] = *(float *)(dword_106B31C8 + 12);
      }
    }
  }
}
