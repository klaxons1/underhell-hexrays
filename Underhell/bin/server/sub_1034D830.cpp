int __usercall sub_1034D830@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  _BYTE *v3; // edi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v11; // [esp+30h] [ebp-9Ch]
  float v12; // [esp+54h] [ebp-78h]
  _DWORD v13[8]; // [esp+60h] [ebp-6Ch] BYREF
  float v14[3]; // [esp+80h] [ebp-4Ch] BYREF
  float v15[3]; // [esp+8Ch] [ebp-40h] BYREF
  float v16[3]; // [esp+98h] [ebp-34h] BYREF
  float v17[3]; // [esp+A4h] [ebp-28h] BYREF
  float v18[3]; // [esp+B0h] [ebp-1Ch] BYREF
  int v19[3]; // [esp+BCh] [ebp-10h] BYREF
  int v20; // [esp+C8h] [ebp-4h]

  v3 = (_BYTE *)(a1 + 224);
  if ( *(_BYTE *)(a1 + 224) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    *v3 = 2;
  }
  sub_10111910((_BYTE *)(a1 + 320), (float *)(a1 + 328), (float *)(a1 + 340), v18, v17);
  sub_10111820((float *)(a1 + 320), v18, v15);
  sub_10111820((float *)(a1 + 320), v17, v16);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10219BB0(v13);
  v13[0] = &CPASFilter::`vftable';
  sub_1021A370(v13, a1 + 580);
  sub_10111860(a1 + 320, v15, v16, v14);
  v4 = (int)*off_1065C5EC;
  v5 = (*(int (__thiscall **)(int, int, int, int, int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
         dword_106B31E4,
         8,
         15,
         8,
         100,
         0,
         0,
         67,
         a2);
  v20 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 4, 10, v5);
  v12 = (float)v20;
  (*(void (__thiscall **)(int (__stdcall ***)(char), _DWORD *, _DWORD, float *, _DWORD, _DWORD))(v4 + 76))(
    off_1065C5EC,
    v13,
    0.0,
    v14,
    word_10696BA4,
    LODWORD(v12));
  v6 = *(_DWORD *)(a1 + 252);
  v19[0] = *(int *)(a1 + 496);
  v19[1] = *(int *)(a1 + 488);
  v19[2] = *(int *)(a1 + 492);
  if ( (v6 & 0x1000) != 0 )
    sub_100DAFD0(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v11 = *(_DWORD *)(a1 + 424);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
  sub_10217520(v7, v11, a1 + 580, a1 + 704, a1 + 476, (int)v19, 1.0, 250.0, 9, (_DWORD *)a1, 1);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 4);
  if ( v8 > 0 )
  {
    v9 = v8;
    do
    {
      sub_1034C740(a1);
      --v9;
    }
    while ( v9 );
  }
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
  sub_100EAB80((_DWORD *)a1, 32);
  sub_1025FAC0(a1);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
}
