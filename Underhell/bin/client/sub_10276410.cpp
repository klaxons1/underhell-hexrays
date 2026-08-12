void __fastcall sub_10276410(int a1, int a2, int *a3, _BYTE *a4, _BYTE *a5, int a6, int a7)
{
  _BYTE *v7; // esi
  int *v9; // ebx
  int *v10; // ecx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // esi
  int v15; // [esp-10h] [ebp-18h]
  int v16; // [esp-10h] [ebp-18h]

  v7 = a4;
  if ( !*a4 )
  {
    v9 = a3;
    if ( *a5 == 1 )
    {
      v15 = a3[3];
      v10 = a3;
      a3 = (int *)a1;
      sub_10258C50(v10, v15, &a3);
      v11 = *(_DWORD *)(a1 + 208);
      v12 = a6;
      if ( v11 == a6 || v11 == a7 )
      {
        *v7 = 1;
        return;
      }
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 208);
      v12 = a6;
      if ( v13 == a6 || v13 == a7 )
      {
        *a5 = 1;
        v16 = v9[3];
        a6 = a1;
        sub_10258C50(v9, v16, &a6);
        if ( v12 == a7 )
        {
          *v7 = 1;
          return;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 240) )
    {
      v14 = 0;
      a6 = *(_DWORD *)(a1 + 232);
      if ( a6 > 0 )
      {
        do
        {
          sub_10276410(v9, a4, a5, v12, a7);
          ++v14;
        }
        while ( v14 < a6 );
      }
    }
  }
}
