const unsigned __int16 *__cdecl sub_100B8E00(int a1, const unsigned __int16 *a2, int a3)
{
  signed int v3; // eax
  int v4; // ecx
  unsigned __int16 *v5; // ecx
  unsigned int v6; // eax
  _BYTE v8[2048]; // [esp+4h] [ebp-800h] BYREF

  v8[0] = 0;
  sub_1022C220(v8, 2048, 0, 0);
  (*(void (__thiscall **)(int, _BYTE *, const unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    v8,
    a2,
    a3);
  v3 = wcslen(a2) - 1;
  if ( v3 >= 0 )
  {
    v4 = a2[v3];
    if ( v4 == 10 || v4 == 13 )
      a2[v3] = 0;
  }
  v5 = (unsigned __int16 *)a2;
  if ( a2 )
  {
    do
    {
      v6 = *v5;
      if ( !(_WORD)v6 )
        break;
      if ( v6 < 6 )
        *v5 = 1;
      ++v5;
    }
    while ( v5 );
  }
  return a2;
}
