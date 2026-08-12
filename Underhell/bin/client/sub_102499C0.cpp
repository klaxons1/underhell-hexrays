int __stdcall sub_102499C0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  void (__stdcall *v11)(int, int, int, int); // eax
  int result; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // ebx
  int v16; // edx
  int v17; // esi
  int v18; // ebx
  int v19; // [esp-4h] [ebp-14h]
  int v20; // [esp+1Ch] [ebp+Ch]
  int v21; // [esp+1Ch] [ebp+Ch]

  v6 = a4;
  v8 = a2;
  v9 = a1;
  if ( a3 - a1 <= a4 - a2 )
  {
    v21 = a2 + a6;
    v15 = a2 + a5;
    while ( 1 )
    {
      v16 = *(_DWORD *)dword_1047CA6C;
      if ( v15 <= v6 )
        (*(void (__stdcall **)(int, int, int, int))(v16 + 48))(a1, v8, a3, v15);
      else
        (*(void (__stdcall **)(int, int, int, int))(v16 + 48))(a1, v8, a3, v6);
      result = a5;
      v17 = a5 + v8;
      v18 = a5 + v15;
      if ( a5 + v21 > a4 )
        break;
      v8 = a6 + v17;
      v15 = a6 + v18;
      v6 = a4;
      v21 += a6 + a5;
    }
  }
  else
  {
    v20 = a1 + a6;
    v10 = a1 + a5;
    while ( 1 )
    {
      v19 = v6;
      v11 = *(void (__stdcall **)(int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48);
      if ( v10 <= a3 )
        v11(v9, a2, v10, v19);
      else
        v11(v9, a2, a3, v19);
      result = a5 + v20;
      v13 = a5 + v9;
      v14 = a5 + v10;
      if ( a5 + v20 > a3 )
        break;
      v9 = a6 + v13;
      v10 = a6 + v14;
      v20 = a6 + result;
      v6 = a4;
    }
  }
  return result;
}
