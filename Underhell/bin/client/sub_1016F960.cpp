void __stdcall sub_1016F960(float *a1, float a2)
{
  char v2; // bl
  const char *v3; // esi
  int v4; // eax
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // esi
  float v9; // eax
  int (__thiscall *v10)(int); // edx
  int v11[8]; // [esp+4h] [ebp-10Ch] BYREF
  float v12; // [esp+24h] [ebp-ECh] BYREF
  float v13; // [esp+28h] [ebp-E8h]
  int v14; // [esp+2Ch] [ebp-E4h]
  int v15; // [esp+30h] [ebp-E0h]
  int v16; // [esp+34h] [ebp-DCh]
  int v17; // [esp+38h] [ebp-D8h]
  char v18; // [esp+3Ch] [ebp-D4h]
  int v19; // [esp+40h] [ebp-D0h]
  char v20; // [esp+44h] [ebp-CCh] BYREF
  int v21; // [esp+C4h] [ebp-4Ch]
  float v22[11]; // [esp+C8h] [ebp-48h] BYREF
  int v23[6]; // [esp+F4h] [ebp-1Ch] BYREF
  int v24; // [esp+10Ch] [ebp-4h]
  float v25; // [esp+11Ch] [ebp+Ch]

  v2 = 0;
  switch ( *((_DWORD *)a1 + 502) )
  {
    case 1:
      v3 = "Bounce.Glass";
      goto LABEL_10;
    case 2:
      v3 = "Bounce.Metal";
      goto LABEL_10;
    case 4:
      v3 = "Bounce.Flesh";
      goto LABEL_10;
    case 8:
      v3 = "Bounce.Wood";
      goto LABEL_10;
    case 0x10:
      v3 = "Bounce.Shrapnel";
      goto LABEL_10;
    case 0x20:
      v3 = "Bounce.Shell";
      v2 = 1;
      goto LABEL_10;
    case 0x40:
      v3 = "Bounce.Concrete";
      goto LABEL_10;
    case 0x80:
      v3 = "Bounce.ShotgunShell";
      v2 = 1;
LABEL_10:
      v4 = (int)fabs(a1[529]);
      v24 = v4;
      if ( v2 )
      {
        if ( v4 >= 200 )
          goto LABEL_15;
        v5 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3);
      }
      else
      {
        v5 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 5);
      }
      if ( v5 )
        return;
LABEL_15:
      v13 = 1.0;
      v12 = 0.0;
      v14 = 100;
      v15 = 100;
      v16 = 100;
      v17 = 75;
      v20 = 0;
      v18 = 0;
      v19 = 0;
      v21 = 0;
      if ( (unsigned __int8)sub_10120700((int)v3, (int)&v12, 0) && a2 > 0.0 )
      {
        v6 = (double)v24;
        if ( v2 )
        {
          v7 = v6 * 0.0028571428;
          if ( v7 > 1.0 )
            v7 = 1.0;
        }
        else
        {
          v7 = v6 * 0.002222222222222222;
          if ( v7 > 1.0 )
            v7 = 1.0;
        }
        v25 = v7 * v13;
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3) || v2 )
          v8 = v14;
        else
          v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, v15, v16);
        sub_1015BB00(v11);
        sub_10013E00(v22);
        v22[2] = v25;
        LODWORD(v22[1]) = &v20;
        v22[0] = v12;
        v9 = *a1;
        LODWORD(v22[3]) = v17;
        v10 = *(int (__thiscall **)(int))(LODWORD(v9) + 36);
        LODWORD(v22[5]) = v8;
        LODWORD(v22[6]) = v10((int)a1);
        sub_10121280((int)v11, 0, (int)v22);
        sub_1011A810(v23);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
      }
      return;
    default:
      return;
  }
}
