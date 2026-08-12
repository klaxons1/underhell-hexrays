void __thiscall sub_10013E50(_DWORD *this, int a2, int a3, float a4, int a5)
{
  bool v5; // cc
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // eax
  int (__thiscall *v14)(_DWORD *); // edx
  int v15; // eax
  _DWORD v16[2]; // [esp+4h] [ebp-10Ch] BYREF
  int v17; // [esp+Ch] [ebp-104h]
  int v18; // [esp+10h] [ebp-100h]
  int v19; // [esp+14h] [ebp-FCh]
  int v20; // [esp+18h] [ebp-F8h]
  char v21; // [esp+1Ch] [ebp-F4h]
  int v22; // [esp+20h] [ebp-F0h]
  char v23; // [esp+24h] [ebp-ECh] BYREF
  int v24; // [esp+A4h] [ebp-6Ch]
  _BYTE v25[32]; // [esp+A8h] [ebp-68h] BYREF
  float v26[11]; // [esp+C8h] [ebp-48h] BYREF
  _BYTE v27[24]; // [esp+F4h] [ebp-1Ch] BYREF
  _DWORD *v28; // [esp+10Ch] [ebp-4h]

  v5 = *((_DWORD *)off_103DC81C + 5) <= 1;
  v28 = this;
  if ( (v5 || 0.0 != *(float *)(dword_104349A4 + 44))
    && (!(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC)
     || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 60))(off_103ED0FC)) )
  {
    if ( a3 )
    {
      v7 = this[886];
      v8 = v7 ? *(unsigned __int16 *)(a3 + 44) : *(unsigned __int16 *)(a3 + 46);
      if ( (_WORD)v8 )
      {
        *(float *)&v16[1] = 1.0;
        this[886] = v7 == 0;
        v9 = &this[42 * v7];
        v16[0] = 0;
        v17 = 100;
        v18 = 100;
        v19 = 100;
        v20 = 75;
        v23 = 0;
        v21 = 0;
        v22 = 0;
        v24 = 0;
        if ( *((_WORD *)v9 + 2428) == (_WORD)v8 )
        {
          v10 = v9 + 1173;
          v11 = v16;
        }
        else
        {
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10434620 + 40))(dword_10434620);
          v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 24))(v12, v8);
          if ( !(unsigned __int8)sub_10120700(v13, v16, 0) )
            return;
          if ( v22 != 1 )
            goto LABEL_16;
          *((_WORD *)v9 + 2428) = v8;
          v11 = v9 + 1173;
          v10 = v16;
        }
        qmemcpy(v11, v10, 0xA4u);
LABEL_16:
        sub_1015B880(v25);
        sub_1015BB70(a2);
        sub_10013E00(v26);
        v26[2] = a4;
        LODWORD(v26[5]) = v17;
        LODWORD(v26[1]) = &v23;
        LODWORD(v26[3]) = v20;
        v14 = *(int (__thiscall **)(_DWORD *))(v28[2] + 36);
        LODWORD(v26[0]) = 4;
        v26[4] = 0.0;
        LODWORD(v26[6]) = a2;
        v15 = v14(v28 + 2);
        sub_10121280(v25, v15, v26);
        sub_1011A810(v27);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
      }
    }
  }
}
