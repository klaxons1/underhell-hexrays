char __thiscall sub_101820D0(_DWORD *this, const char *a2, char *Source, int a4)
{
  bool v5; // zf
  char *v7; // eax
  int v8; // esi
  char *v9; // edi
  size_t v10; // esi
  char *v11; // ebx
  char *v12; // eax
  unsigned int v13; // kr00_4
  unsigned int v14; // kr04_4
  char v15[2048]; // [esp+4h] [ebp-C04h] BYREF
  char Destination[1024]; // [esp+804h] [ebp-404h] BYREF
  _DWORD *v17; // [esp+C04h] [ebp-4h]

  v5 = this[1] == -1;
  v17 = this;
  if ( v5 )
    return 0;
  v7 = (char *)*this;
  v8 = 0;
  if ( *this )
  {
    do
    {
      v9 = sub_10181EC0(v7, v15);
      if ( v15[0] == 125 )
        break;
      if ( !strcmp(v15, a2) && ++v8 > a4 )
      {
        v10 = strlen((const char *)*this);
        v11 = (char *)sub_10184390(v10);
        v12 = sub_10181EC0(v9, v15);
        sub_104299C0(v11, v12, v10);
        if ( *Source == 34 )
          sub_104299C0(Destination, Source, 0x400u);
        else
          sub_10429A00(Destination, 0x400u, "\"%s\"", (char)Source);
        v13 = strlen(Destination);
        v14 = strlen(v15);
        sub_104299C0(v9 + 1, Destination, v13 + 1);
        sub_10429750((int)v9, v11, *v17 - (_DWORD)v9 + v17[1] - 1, -1);
        v17[2] += v13 - v14 - 2;
        sub_10184660(v11);
        return 1;
      }
      v7 = sub_10181EC0(v9, v15);
    }
    while ( v7 );
  }
  return 0;
}
