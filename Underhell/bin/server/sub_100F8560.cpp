void __thiscall sub_100F8560(_DWORD *this, int a2, int a3, float a4, int a5)
{
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  _DWORD v15[2]; // [esp+18h] [ebp-108h] BYREF
  int v16; // [esp+20h] [ebp-100h]
  int v17; // [esp+24h] [ebp-FCh]
  int v18; // [esp+28h] [ebp-F8h]
  int v19; // [esp+2Ch] [ebp-F4h]
  char v20; // [esp+30h] [ebp-F0h]
  int v21; // [esp+34h] [ebp-ECh]
  char v22; // [esp+38h] [ebp-E8h] BYREF
  int v23; // [esp+B8h] [ebp-68h]
  float v24[11]; // [esp+BCh] [ebp-64h] BYREF
  _BYTE v25[24]; // [esp+E8h] [ebp-38h] BYREF
  _BYTE v26[32]; // [esp+100h] [ebp-20h] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1 && 0.0 == *(float *)(dword_106B726C + 44) )
    return;
  if ( !a3 )
    return;
  v6 = this[572];
  v7 = v6 ? *(unsigned __int16 *)(a3 + 44) : *(unsigned __int16 *)(a3 + 46);
  if ( !(_WORD)v7 )
    return;
  *(float *)&v15[1] = 1.0;
  v15[0] = 0;
  v21 = 0;
  v23 = 0;
  v8 = &this[42 * v6];
  this[572] = v6 == 0;
  v16 = 100;
  v17 = 100;
  v18 = 100;
  v19 = 75;
  v22 = 0;
  v20 = 0;
  if ( *((_WORD *)v8 + 2346) == (_WORD)v7 )
  {
    v9 = v8 + 1132;
    v10 = v15;
  }
  else
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B6E60 + 40))(dword_106B6E60);
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v7);
    if ( !(unsigned __int8)sub_1023A760(v12, v15, 0) )
      return;
    if ( v21 != 1 )
      goto LABEL_14;
    *((_WORD *)v8 + 2346) = v7;
    v10 = v8 + 1132;
    v9 = v15;
  }
  qmemcpy(v10, v9, 0xA4u);
LABEL_14:
  sub_10219BB0(v26);
  sub_1021A370(a2);
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    sub_1021A000(a2);
  if ( (int)this[1002] > 10 )
    sub_1023C380((int)"Player.Gear", 0.0, 0);
  sub_100F8510(v24);
  v24[2] = a4;
  v13 = this[6];
  LODWORD(v24[1]) = &v22;
  LODWORD(v24[3]) = v19;
  LODWORD(v24[0]) = 4;
  v24[4] = 0.0;
  LODWORD(v24[5]) = v16;
  LODWORD(v24[6]) = a2;
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v13);
  sub_1023BE40(v26, v14, v24);
  sub_102375F0(v25);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v26);
}
