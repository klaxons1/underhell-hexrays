void __thiscall sub_10149810(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  const char *v4; // eax
  int v5; // esi
  int v6; // eax
  _DWORD v7[5]; // [esp+28h] [ebp-10Ch] BYREF
  int v8; // [esp+3Ch] [ebp-F8h]
  char v9; // [esp+40h] [ebp-F4h]
  int v10; // [esp+44h] [ebp-F0h]
  char v11; // [esp+48h] [ebp-ECh] BYREF
  int v12; // [esp+C8h] [ebp-6Ch]
  _DWORD v13[8]; // [esp+CCh] [ebp-68h] BYREF
  float v14[11]; // [esp+ECh] [ebp-48h] BYREF
  _BYTE v15[24]; // [esp+118h] [ebp-1Ch] BYREF
  float v16; // [esp+130h] [ebp-4h]

  v2 = this[203];
  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
    v3 = 100;
  else
    v3 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 34) + 95;
  v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.75,
          1.0);
  if ( v2 == 6 && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
    v2 = 2;
  switch ( v2 )
  {
    case 0:
    case 7:
      v4 = "Breakable.MatGlass";
      goto LABEL_13;
    case 1:
      v4 = "Breakable.MatWood";
      goto LABEL_13;
    case 2:
      v4 = "Breakable.MatMetal";
      goto LABEL_13;
    case 4:
    case 8:
      v4 = "Breakable.MatConcrete";
      goto LABEL_13;
    case 6:
      v4 = "Breakable.Computer";
LABEL_13:
      *(float *)&v7[1] = 1.0;
      v7[0] = 0;
      v11 = 0;
      v9 = 0;
      v10 = 0;
      v12 = 0;
      v7[2] = 100;
      v7[3] = 100;
      v7[4] = 100;
      v8 = 75;
      if ( (unsigned __int8)sub_1023A760(v4, v7, 0) )
      {
        sub_100D78A0(v13, (int)this, 0.80000001);
        sub_100F8510(v14);
        v14[2] = v16;
        v5 = this[6];
        v14[0] = *(float *)v7;
        LODWORD(v14[3]) = v8;
        LODWORD(v14[1]) = &v11;
        LODWORD(v14[5]) = v3;
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
        sub_1023BE40(v13, v6, v14);
        sub_102375F0(v15);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
      }
      break;
    default:
      return;
  }
}
