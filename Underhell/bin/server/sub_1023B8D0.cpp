int __cdecl sub_1023B8D0(_BYTE *a1, int a2, char *Source, int a4, float a5, char a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  char v13; // [esp+18h] [ebp-4h]

  v13 = 0;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a2);
  if ( (v6 || (v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v7 = *(_DWORD *)(v6 + 12)) != 0 )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
  }
  else
  {
    v8 = 0;
  }
  v9 = (_DWORD *)v8;
  if ( v8 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 320))(v9) )
    {
      v10 = v9[103];
      if ( v10 == -1 || off_1061BE18[4 * (v9[103] & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (v9[103] & 0xFFF) + 1];
      v9 = (_DWORD *)v11;
      if ( !v11 )
        return sub_1023B400((int)v9, a1, a2, v13, Source, a4, a5, a6);
    }
    v13 = 1;
  }
  return sub_1023B400((int)v9, a1, a2, v13, Source, a4, a5, a6);
}
