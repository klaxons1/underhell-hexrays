int __usercall sub_1010EB70@<eax>(const char *a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int v4; // ebx
  const char *v5; // eax
  const char *v6; // esi
  int v7; // eax
  int v8; // eax
  const char *v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // ecx
  int v13; // esi
  const char *v14; // ecx
  int v15; // eax
  const char *v18; // [esp-4h] [ebp-Ch]
  _DWORD *v19; // [esp+0h] [ebp-8h]
  _DWORD *v20; // [esp+4h] [ebp-4h]

  if ( !a2 )
    return 0;
  v4 = 1;
  if ( sub_101C5260(a2) )
  {
    v5 = *(const char **)(sub_101C5260(a2) + 92);
    if ( v5 )
      v6 = v5;
    else
      v6 = String;
  }
  else
  {
    v6 = "NULL";
  }
  if ( sub_101C5260(a2) )
  {
    v7 = sub_101C5260(a2);
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v7 + 24));
  }
  else
  {
    v8 = -1;
  }
  v9 = *(const char **)(a2 + 92);
  if ( !v9 )
    v9 = String;
  v10 = (*(int (__thiscall **)(int, _DWORD, const char *, int))(*(_DWORD *)dword_106B31D0 + 72))(
          dword_106B31D0,
          *(_DWORD *)(a2 + 24),
          v9,
          v8);
  Msg("%i : %s (ground %i %s)\n", v10, v6, a3, a1);
  v11 = (_DWORD *)sub_101C46F0(0);
  v19 = v11;
  if ( v11 )
  {
    v20 = (_DWORD *)v11[1];
    if ( v20 != v11 )
    {
      do
      {
        if ( *v20 != -1
          && (v12 = &off_1061BE18[4 * (*v20 & 0xFFF) + 1], off_1061BE18[4 * (*v20 & 0xFFF) + 2] == *v20 >> 12)
          && (v13 = *v12) != 0 )
        {
          v14 = *(const char **)(v13 + 92);
          if ( !v14 )
            v14 = String;
          v18 = v14;
          v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                  dword_106B31D0,
                  *(_DWORD *)(v13 + 24));
          Msg("  %02i:  %i %s\n", v4++, v15, v18);
          if ( sub_101C5260(v13) != a2 )
            Msg("   mismatched!!!\n");
        }
        else
        {
          Msg("  %02i:  NULL link\n", v4++);
        }
        v20 = (_DWORD *)v20[1];
      }
      while ( v20 != v19 );
    }
  }
  sub_101C5260(a2);
  return v4 - 1;
}
