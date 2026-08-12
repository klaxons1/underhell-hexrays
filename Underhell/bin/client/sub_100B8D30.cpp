wchar_t *__usercall sub_100B8D30@<eax>(
        int a1@<esi>,
        int a2,
        wchar_t *Destination,
        unsigned int a4,
        char a5,
        char *a6,
        size_t Count)
{
  const wchar_t *v7; // eax
  wchar_t *result; // eax
  int v10; // eax
  int v11; // ecx
  char Source[2048]; // [esp+0h] [ebp-800h] BYREF

  Source[0] = 0;
  sub_1022C220(Source, 2048, 0, 0);
  if ( a6 )
    sub_102282F0(a6, Source, Count);
  v7 = (const wchar_t *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1047CA78 + 8))(
                          dword_1047CA78,
                          Source,
                          a1);
  if ( v7 )
  {
    wcsncpy(Destination, v7, a4 >> 1);
    Destination[(a4 >> 1) - 1] = 0;
  }
  else
  {
    (*(void (__thiscall **)(int, char *, wchar_t *, unsigned int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      Source,
      Destination,
      a4);
  }
  result = Destination;
  if ( a5 )
  {
    while ( *result++ )
      ;
    v10 = result - (Destination + 1) - 1;
    if ( v10 >= 0 )
    {
      v11 = Destination[v10];
      if ( v11 == 10 || v11 == 13 )
        Destination[v10] = 0;
    }
    return Destination;
  }
  return result;
}
