void __userpurge sub_102802D0(int a1@<ecx>, _DWORD *a2@<esi>, _DWORD *a3)
{
  int i; // ebx
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  const char *v8; // eax
  char *v9; // eax

  for ( i = 0; i < *(_DWORD *)(a1 + 88); ++i )
  {
    v5 = sub_10237C80((_DWORD *)(*(_DWORD *)(a1 + 76) + 4 * i));
    if ( v5 )
    {
      if ( *(_BYTE *)(a1 + 192) )
      {
        v6 = 0;
        v7 = (_DWORD *)(a1 + 176);
        while ( v5 != *v7 )
        {
          ++v6;
          ++v7;
          if ( v6 >= 4 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 72))(v5);
        if ( _stricmp(v8, "BuildDialog") && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 72))(v5) )
        {
          if ( *(_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 72))(v5) )
          {
            v9 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 72))(v5, 1);
            a2 = sub_1022A6A0(a3, v9, (int)a2);
            (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 340))(v5);
          }
        }
      }
    }
  }
}
