void __usercall sub_102689E0(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int i; // ebp
  int v4; // eax
  int v5; // edx
  int v6; // eax
  _BYTE *v7; // esi
  int *v8; // ecx

  for ( i = 0; i < a1[75]; ++i )
  {
    v4 = *(_DWORD *)(a1[72] + 4 * i);
    if ( v4 >= 0 && v4 < a1[54] && v4 <= a1[60] )
    {
      v5 = a1[53];
      if ( *(_DWORD *)(v5 + 12 * v4 + 4) != v4 || *(_DWORD *)(v5 + 12 * v4 + 8) == v4 )
      {
        v6 = 3 * v4;
        v7 = *(_BYTE **)(v5 + 4 * v6);
        if ( v7[320] )
        {
          v8 = *(int **)(v5 + 4 * v6);
          v7[320] = 0;
          sub_10267E30(v8, a2, (int)a1);
          (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v7 + 244))(v7, 0, 0);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 16))(v7);
        }
      }
    }
  }
  a1[75] = 0;
}
