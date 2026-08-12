int __stdcall sub_100690D0(int a1)
{
  int result; // eax
  int i; // edi
  char *v3; // eax
  char *v4; // eax
  int v5; // esi
  char v6; // al
  int v7; // eax

  result = sub_10229C90(a1);
  for ( i = result; result; i = result )
  {
    v3 = (char *)sub_10229A00(i);
    if ( !sub_10227C40(v3, "wave") )
    {
      v4 = (char *)sub_1022B4C0(0, (int)Locale);
      v5 = *(_DWORD *)(dword_10413188 + 4);
      v6 = (unsigned __int8)sub_10068FF0(v4);
      v7 = sub_10076640("sound/%s", v6);
      (*(void (__thiscall **)(int, int, const char *))(v5 + 52))(dword_10413188 + 4, v7, "GAME");
    }
    result = sub_1021F0F0(i);
  }
  return result;
}
