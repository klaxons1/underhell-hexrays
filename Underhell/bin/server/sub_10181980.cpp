void __cdecl sub_10181980(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  const char *v5; // eax
  bool v6; // zf
  char *v7; // eax
  int v8; // edi
  char *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _BYTE v12[256]; // [esp+4h] [ebp-104h] BYREF
  int v13; // [esp+104h] [ebp-4h] BYREF
  int v14; // [esp+110h] [ebp+8h]

  v2 = a1 - 1;
  v14 = a1 - 1;
  if ( v14 >= 0 )
  {
    v3 = (_DWORD *)(a2 + 16 * v2 + 12);
    do
    {
      v4 = (_DWORD *)*(v3 - 3);
      if ( v4 )
      {
        v5 = (const char *)v4[25];
        if ( !v5 )
          v5 = String;
        v6 = strchr(v5, 44) == 0;
        v7 = (char *)v4[25];
        if ( v6 )
        {
          if ( !v7 )
            v7 = (char *)String;
          v11 = sub_1012BF20(&dword_1069E3E0, 0, v7, 0, 0, 0, 0);
          if ( v11 && v11[6] )
            (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*v4 + 140))(v4, v11, -1);
        }
        else
        {
          if ( !v7 )
            v7 = (char *)String;
          v8 = sub_1025F620(v12, v7, 44);
          v9 = (char *)*sub_10162BE0(&v13, v12);
          v4[25] = v9;
          if ( !v9 )
            v9 = (char *)String;
          v10 = sub_1012BF20(&dword_1069E3E0, 0, v9, 0, 0, 0, 0);
          *v3 = v8;
          v2 = v14;
          *(v3 - 1) = v10;
        }
      }
      --v2;
      v3 -= 4;
      v14 = v2;
    }
    while ( v2 >= 0 );
  }
}
