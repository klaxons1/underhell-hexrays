void __usercall sub_10217F40(int a1@<ebx>, int *a2, int a3, int a4, char a5)
{
  int *v5; // edi
  int v6; // ebx
  _DWORD *v7; // edi
  int v8; // esi
  unsigned __int16 v9; // ax
  int v10; // esi
  _DWORD *v11; // ebx

  v5 = a2;
  sub_10217DF0(a1, a2, a3, a4);
  v6 = 0;
  if ( *a2 > 0 )
  {
    v7 = a2 + 6;
    do
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 80))(*v7, v6);
      v8 = *v7;
      v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 76))(*v7);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 72))(v8, v9 | 0x10);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 48))(*v7, 1);
      if ( a5 == 1 )
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 96))(*v7);
      ++v6;
      v7 += 6;
    }
    while ( v6 < *a2 );
    v5 = a2;
  }
  if ( v5[2] )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5[2] + 4))(v5[2]);
    if ( !a5 )
    {
      v10 = 0;
      if ( *v5 > 0 )
      {
        v11 = v5 + 6;
        do
        {
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 100))(*v11);
          ++v10;
          v11 += 6;
        }
        while ( v10 < *v5 );
      }
    }
  }
}
