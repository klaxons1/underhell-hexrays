char __thiscall sub_1022AFF0(_DWORD *this, char *String2)
{
  int *v3; // esi
  int v4; // eax
  _BYTE *v5; // eax
  int v6; // eax
  char *v7; // eax
  const char *v8; // eax
  const char *v9; // edi
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // [esp-Ch] [ebp-94h]
  char Destination[128]; // [esp+4h] [ebp-84h] BYREF
  _DWORD *v15; // [esp+84h] [ebp-4h]

  v15 = this;
  if ( !String2 )
    return 0;
  v3 = (int *)this[6];
  if ( !v3 )
    return 0;
  do
  {
    sub_1022AFF0(String2);
    v4 = KeyValuesSystem();
    v5 = (_BYTE *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 16))(v4, *v3);
    if ( sub_10227EE0(v5, (unsigned __int8 *)String2) )
    {
      v6 = KeyValuesSystem();
      v13 = *v3;
      v7 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
      sub_102282F0(Destination, v7, v13);
      v8 = sub_10227FA0(Destination, (unsigned __int8 *)String2);
      v9 = v8;
      if ( v8 )
      {
        if ( !_stricmp(v8, String2) )
        {
          *v9 = 0;
          v10 = v15;
          v11 = sub_1022A6A0(v15, Destination, 0);
          if ( v11 )
            sub_10229C30(v10, (int)v11);
          v12 = KeyValuesSystem();
          *v3 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v12 + 12))(v12, Destination, 1);
        }
      }
    }
    v3 = (int *)v3[5];
  }
  while ( v3 );
  return 1;
}
