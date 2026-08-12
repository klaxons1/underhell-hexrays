int __stdcall sub_10069150(int a1)
{
  int result; // eax
  int i; // ebx
  char *v3; // eax
  int j; // edi
  char *k; // eax
  char v6; // cl
  int v7; // esi
  int v8; // eax

  result = sub_10229C90(a1);
  for ( i = result; result; i = result )
  {
    v3 = (char *)sub_10229A00(i);
    if ( !sub_10227C40(v3, "rndwave") )
    {
      for ( j = sub_10229C90(i); j; j = sub_1021F0F0(j) )
      {
        for ( k = (char *)sub_1022B4C0(0, (int)Locale); ; ++k )
        {
          v6 = *k;
          if ( *k != 42
            && v6 != 63
            && v6 != 33
            && v6 != 35
            && v6 != 64
            && v6 != 62
            && v6 != 60
            && v6 != 94
            && v6 != 41
            && v6 != 125 )
          {
            break;
          }
        }
        v7 = *(_DWORD *)(dword_10413188 + 4);
        v8 = sub_10076640("sound/%s", (char)k);
        (*(void (__thiscall **)(int, int, const char *))(v7 + 52))(dword_10413188 + 4, v8, "GAME");
      }
    }
    result = sub_1021F0F0(i);
  }
  return result;
}
