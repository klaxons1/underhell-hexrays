int __userpurge sub_100AF2A0@<eax>(int a1@<ecx>, int a2@<ebx>, _BYTE *a3, float a4, float a5, int a6, int a7)
{
  int result; // eax
  int v9; // edi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ebx
  int v23; // [esp+18h] [ebp-3Ch]
  float v24; // [esp+20h] [ebp-34h]
  int v25[8]; // [esp+34h] [ebp-20h] BYREF

  if ( !a3 )
    return -1;
  if ( *a3 == 33 )
  {
    result = sub_102382E0(a3);
    v9 = result;
    if ( result == -1 )
      return result;
    v10 = *(_DWORD *)(a1 + 64);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 1];
    sub_1001F4E0(v25, v11, a6);
    v12 = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3, a2);
    v13 = *(_DWORD *)(a1 + 64);
    v14 = *(_DWORD *)(a1 + 56) + v12;
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 2] != v13 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 1];
    v23 = v14;
    v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v15 + 24));
    sub_100E3150((int)v25, v16, 2, v9, a5, a6, 0, v23, 0, 0, 1, 0.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
  }
  else
  {
    v17 = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3, a2);
    v18 = *(_DWORD *)(a1 + 64);
    v19 = *(_DWORD *)(a1 + 56) + v17;
    if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 2] != v18 >> 12 )
      v20 = 0;
    else
      v20 = off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 1];
    v9 = sub_10238FF0(*(_DWORD *)(v20 + 24), (int)a3, a5, a6, 0, v19);
  }
  v21 = *(_DWORD *)(a1 + 64);
  if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 2] != v21 >> 12 )
    v22 = 0;
  else
    v22 = off_1061BE18[4 * (*(_DWORD *)(a1 + 64) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 140))(dword_106B31D0, v9);
  sub_100ACB00(a1, v22, (int)"SpeakRawSentence( %s, %f) %f\n");
  v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 140))(dword_106B31D0);
  sub_100AD840(a1, v24, *(float *)&v9);
  return v9;
}
