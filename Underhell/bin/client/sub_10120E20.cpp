int __cdecl sub_10120E20(int a1, int a2, char *Source, int a4, float a5, int a6)
{
  _DWORD *v6; // esi
  unsigned int v7; // eax
  _DWORD *v8; // eax
  char v10; // [esp+10h] [ebp-4h]

  v10 = 0;
  v6 = (_DWORD *)sub_10036480(a2);
  if ( v6 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 504))(v6) )
    {
      v7 = v6[281];
      if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v6[281] & 0xFFF) + 2) != v7 >> 12 )
        v8 = 0;
      else
        v8 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v6[281] & 0xFFF) + 1);
      v6 = v8;
      if ( !v8 )
        return sub_10120B20(a1, a2, v10, Source, a4, a5, a6);
    }
    v10 = 1;
  }
  return sub_10120B20(a1, a2, v10, Source, a4, a5, a6);
}
