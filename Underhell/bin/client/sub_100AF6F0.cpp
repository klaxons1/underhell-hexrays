void __thiscall sub_100AF6F0(int this)
{
  char v1; // bl
  int v2; // eax
  int v3; // esi
  double v4; // st7
  int (__thiscall *v5)(int, _DWORD, int); // edx
  char Destination[256]; // [esp+0h] [ebp-210h] BYREF
  _DWORD v7[2]; // [esp+100h] [ebp-110h] BYREF
  int v8; // [esp+108h] [ebp-108h]
  int v9; // [esp+10Ch] [ebp-104h]
  int v10; // [esp+110h] [ebp-100h]
  int v11; // [esp+114h] [ebp-FCh]
  char v12; // [esp+118h] [ebp-F8h]
  int v13; // [esp+11Ch] [ebp-F4h]
  char v14; // [esp+120h] [ebp-F0h] BYREF
  int v15; // [esp+1A0h] [ebp-70h]
  _BYTE v16[32]; // [esp+1A4h] [ebp-6Ch] BYREF
  float v17[11]; // [esp+1C4h] [ebp-4Ch] BYREF
  _BYTE v18[24]; // [esp+1F0h] [ebp-20h] BYREF
  int v19; // [esp+208h] [ebp-8h]
  float v20; // [esp+20Ch] [ebp-4h]

  v20 = 0.0;
  v1 = 0;
  if ( *((float *)off_103DC81C + 3) - *(float *)(this + 212) >= 0.06 )
  {
    v2 = *(_DWORD *)(this + 208);
    *(float *)(this + 212) = *((float *)off_103DC81C + 3);
    if ( v2 <= 800 )
    {
      if ( v2 <= 600 )
      {
        if ( v2 <= 500 )
        {
          if ( v2 <= 400 )
          {
            if ( v2 <= 300 )
            {
              if ( v2 <= 200 )
              {
                if ( v2 <= 150 )
                {
                  if ( v2 <= 100 )
                  {
                    if ( v2 <= 75 )
                    {
                      if ( v2 <= 50 )
                      {
                        v4 = 0.5;
                        v3 = 95;
                      }
                      else
                      {
                        v4 = 0.47499999;
                        v3 = 90;
                      }
                    }
                    else
                    {
                      v4 = 0.44999999;
                      v3 = 80;
                      v1 = 1;
                    }
                  }
                  else
                  {
                    v4 = 0.42500001;
                    v3 = 60;
                    v1 = 1;
                  }
                }
                else
                {
                  v4 = 0.40000001;
                  v3 = 40;
                  v1 = 1;
                }
              }
              else
              {
                v4 = 0.38999999;
                v3 = 28;
                v1 = 1;
              }
            }
            else
            {
              v4 = 0.34999999;
              v3 = 8;
              v1 = 1;
            }
          }
          else
          {
            v4 = 0.30000001;
            v3 = 8;
            v1 = 1;
          }
        }
        else
        {
          v4 = 0.25;
          v3 = 4;
        }
      }
      else
      {
        v4 = 0.2;
        v3 = 2;
      }
      v20 = v4;
    }
    else
    {
      v3 = 0;
    }
    v19 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 127);
    v5 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8);
    v20 = (double)v19 * v20 * 0.0039215689 + 0.25;
    if ( v5(dword_10413198, 0, 127) < v3 )
    {
      if ( v1 )
        sub_102282F0(Destination, "Geiger.BeepHigh", 0x100u);
      else
        sub_102282F0(Destination, "Geiger.BeepLow", 0x100u);
      *(float *)&v7[1] = 1.0;
      v7[0] = 0;
      v14 = 0;
      v12 = 0;
      v13 = 0;
      v15 = 0;
      v8 = 100;
      v9 = 100;
      v10 = 100;
      v11 = 75;
      if ( (unsigned __int8)sub_10120700(Destination, v7, 0) )
      {
        sub_1015BB00(v16);
        sub_10013E00(v17);
        v17[2] = v20;
        LODWORD(v17[1]) = &v14;
        LODWORD(v17[3]) = v11;
        v17[0] = *(float *)v7;
        LODWORD(v17[5]) = v8;
        sub_10121280(v16, -1, v17);
        sub_1011A810(v18);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
      }
    }
  }
}
