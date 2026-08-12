int __cdecl sub_101496A0(int a1, int a2, float a3)
{
  int result; // eax
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD v8[5]; // [esp+0h] [ebp-108h] BYREF
  int v9; // [esp+14h] [ebp-F4h]
  char v10; // [esp+18h] [ebp-F0h]
  int v11; // [esp+1Ch] [ebp-ECh]
  char v12; // [esp+20h] [ebp-E8h] BYREF
  int v13; // [esp+A0h] [ebp-68h]
  _DWORD v14[8]; // [esp+A4h] [ebp-64h] BYREF
  float v15[11]; // [esp+C4h] [ebp-44h] BYREF
  _BYTE v16[24]; // [esp+F0h] [ebp-18h] BYREF

  result = a2;
  switch ( a2 )
  {
    case 0:
    case 7:
      v4 = "Breakable.MatGlass";
      goto LABEL_8;
    case 1:
      v4 = "Breakable.MatWood";
      goto LABEL_8;
    case 2:
      v4 = "Breakable.MatMetal";
      goto LABEL_8;
    case 3:
    case 9:
      v4 = "Breakable.MatFlesh";
      goto LABEL_8;
    case 4:
    case 8:
      v4 = "Breakable.MatConcrete";
      goto LABEL_8;
    case 6:
      v4 = "Breakable.Computer";
LABEL_8:
      *(float *)&v8[1] = 1.0;
      v8[2] = 100;
      v8[3] = 100;
      v8[4] = 100;
      v8[0] = 0;
      v9 = 75;
      v12 = 0;
      v10 = 0;
      v11 = 0;
      v13 = 0;
      result = sub_1023A760(v4, v8, 0);
      if ( (_BYTE)result )
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a1);
        if ( (v5 || (v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
          && (v6 = *(_DWORD *)(v5 + 12)) != 0 )
        {
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
        }
        else
        {
          v7 = 0;
        }
        sub_1001F4E0(v14, v7, v9);
        sub_100F8510(v15);
        v15[2] = a3;
        v15[0] = *(float *)v8;
        LODWORD(v15[1]) = &v12;
        LODWORD(v15[3]) = v9;
        sub_1023BE40(v14, a1, v15);
        sub_102375F0(v16);
        result = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v14);
      }
      break;
    default:
      return result;
  }
  return result;
}
