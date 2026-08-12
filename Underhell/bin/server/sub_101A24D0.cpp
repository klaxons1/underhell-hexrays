_DWORD *__thiscall sub_101A24D0(char *this, int *a2)
{
  char *v2; // ebx
  int (__fastcall *v3)(char *); // edx
  _DWORD *result; // eax
  char **v6; // ecx
  char *v7; // eax
  _DWORD *v8; // edi
  const char *v9; // ebx
  _DWORD *v10; // esi
  const char *v11; // ebx
  unsigned int v12; // eax
  int v13; // ebx
  bool v14; // zf
  char String[256]; // [esp+4h] [ebp-104h] BYREF
  char *v16; // [esp+104h] [ebp-4h]
  char *v17; // [esp+110h] [ebp+8h]
  char *v18; // [esp+110h] [ebp+8h]
  _DWORD *v19; // [esp+110h] [ebp+8h]

  v2 = this;
  v3 = *(int (__fastcall **)(char *))(*(_DWORD *)this + 264);
  v16 = this;
  result = (_DWORD *)v3(this);
  if ( (_BYTE)result )
  {
    v6 = (char **)(a2 + 2);
    if ( a2[6] == 2 )
    {
      v7 = *v6;
      if ( !*v6 )
        v7 = (char *)::String;
    }
    else
    {
      v7 = (char *)sub_1010D460((int)v6);
    }
    sub_104299C0(String, v7, 0xFFu);
    v17 = strtok(String, " ");
    v8 = sub_1012BF20(&dword_1069E3E0, 0, v17, 0, *a2, a2[1], 0);
    if ( v8 )
    {
      v18 = strtok(0, " ");
      v10 = sub_1012BF20(&dword_1069E3E0, 0, v18, 0, *a2, a2[1], 0);
      if ( v10 )
      {
        v19 = v2 + 3932;
        v12 = *((_DWORD *)v2 + 983);
        if ( v12 != -1 && off_1061BE18[4 * (*((_DWORD *)v2 + 983) & 0xFFF) + 2] == v12 >> 12 )
        {
          if ( off_1061BE18[4 * (*((_DWORD *)v2 + 983) & 0xFFF) + 1] )
          {
            v13 = (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 368))(v2);
            v14 = v13 == sub_1026A890(v19);
            v2 = v16;
            if ( v14 )
              sub_100285C0(v16, 0, 1);
          }
        }
        sub_10023CB0(v2, 78);
        *((_DWORD *)v2 + 983) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v10 + 8))(v10);
        *((_DWORD *)v2 + 984) = *result;
      }
      else
      {
        v11 = (const char *)*((_DWORD *)v2 + 65);
        if ( !v11 )
          v11 = ::String;
        return (_DWORD *)Warning(
                           "ERROR: Butcher %s cannot find charge position '%s'\n"
                           "Make sure you've specified the parameters as [target start]!\n",
                           v11,
                           v18);
      }
    }
    else
    {
      v9 = (const char *)*((_DWORD *)v2 + 65);
      if ( !v9 )
        v9 = ::String;
      return (_DWORD *)Warning("ERROR: Butcher %s cannot find charge target '%s'\n", v9, v17);
    }
  }
  return result;
}
