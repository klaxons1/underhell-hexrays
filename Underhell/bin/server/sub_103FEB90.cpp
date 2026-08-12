int __thiscall sub_103FEB90(_DWORD *this, int a2, void *a3, int a4)
{
  int v4; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // esi
  float v10; // [esp+Ch] [ebp-4h]
  int v11; // [esp+Ch] [ebp-4h]

  v4 = a2;
  if ( *(_DWORD *)(a2 + 420) == 1 )
    sub_100EBE30(a2, 3);
  v6 = *(_DWORD *)(a2 + 424);
  v10 = 0.0;
  if ( v6 )
    v10 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6);
  if ( a4 == 1 )
  {
    sub_101E3110(a3, 2u, 0, 0);
    sub_103FE950(this, a2);
  }
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( v10 > 250.0 )
    {
      v7 = sub_1002A680(&dword_10690DF8);
      v8 = 0;
      v11 = sub_1016BFB0(&dword_10690DF8);
      if ( v11 > 0 )
      {
        do
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 4 * v8) + 220))(*(_DWORD *)(v7 + 4 * v8)) == 3
            && dword_106C1B64 > 0 )
          {
            v4 = a2;
            (*(void (__thiscall **)(_DWORD, int, int, void *))(**(_DWORD **)(v7 + 4 * v8) + 896))(
              *(_DWORD *)(v7 + 4 * v8),
              dword_106C1B64,
              a2,
              a3);
          }
          ++v8;
        }
        while ( v8 < v11 );
      }
    }
  }
  return sub_101FB2E0(v4, (int)a3, a4);
}
