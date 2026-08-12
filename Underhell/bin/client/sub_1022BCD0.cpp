void __thiscall sub_1022BCD0(_BYTE *this, char *a2, char *Source, int a4, int a5, int *a6)
{
  _DWORD *v6; // ebx
  int i; // eax
  char v8; // cl
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // esi
  int v18; // eax
  char Destination[512]; // [esp+4h] [ebp-204h] BYREF
  _BYTE *v21; // [esp+204h] [ebp-4h]

  v6 = 0;
  v21 = this;
  if ( a4 )
  {
    sub_102282F0(Destination, a2, 512);
    for ( i = strlen(Destination); i > 0; --i )
    {
      v8 = Destination[i - 1];
      if ( v8 == 92 || v8 == 47 )
        break;
      Destination[i - 1] = 0;
    }
    sub_10228100(Destination, Source, 0x200u, -1);
    v9 = KeyValuesSystem();
    v10 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 4))(v9, 32);
    v11 = v10;
    if ( v10 )
    {
      *v10 = -1;
      v10[6] = 0;
      v10[5] = 0;
      v10[7] = 0;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v10[4] = 0;
      v12 = KeyValuesSystem();
      *v11 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v12 + 12))(v12, Destination, 1);
      v6 = v11;
    }
    *((_BYTE *)v6 + 17) = v21[17] != 0;
    if ( sub_10229D70(v6, a4, Destination, a5) )
    {
      v13 = a6[3];
      v14 = a6[1];
      if ( v13 + 1 > v14 )
        sub_1010AFF0(a6, v13 - v14 + 1);
      ++a6[3];
      v15 = *a6;
      v16 = a6[3] - v13 - 1;
      a6[4] = *a6;
      if ( v16 > 0 )
        memcpy((void *)(v15 + 4 * v13 + 4), (const void *)(v15 + 4 * v13), 4 * v16);
      v17 = (_DWORD *)(*a6 + 4 * v13);
      if ( v17 )
        *v17 = v6;
    }
    else
    {
      DevMsg("KeyValues::ParseIncludedKeys: Couldn't load included keyvalue file %s\n", Destination);
      sub_1022B2F0(v6);
      v18 = KeyValuesSystem();
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v18 + 8))(v18, v6);
    }
  }
}
