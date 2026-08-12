int __cdecl sub_1024B480(int a1)
{
  int v1; // ecx
  signed int v2; // esi
  char *v3; // ebx
  _BYTE *v4; // edi
  int v5; // eax
  char v6; // cl

  v1 = *(_DWORD *)(dword_106C68C0 + 4 * a1);
  if ( !*(_DWORD *)(v1 + 20) )
  {
    *(_DWORD *)(*(_DWORD *)(dword_106C68C0 + 4 * a1) + 20) = sub_10184390(*(_DWORD *)(v1 + 12));
    sub_104299C0(
      *(char **)(*(_DWORD *)(dword_106C68C0 + 4 * a1) + 20),
      *(char **)(*(_DWORD *)(dword_106C68C0 + 4 * a1) + 4),
      *(_DWORD *)(*(_DWORD *)(dword_106C68C0 + 4 * a1) + 12));
  }
  v2 = strlen(off_1064F858);
  v3 = (char *)sub_10184390(v2 + 1);
  sub_10429A00(v3, v2, "%c%.4d", *off_1064F858);
  v3[v2] = 0;
  v4 = *(_BYTE **)(*(_DWORD *)(dword_106C68C0 + 4 * a1) + 20);
  do
  {
    if ( *v4 == *off_1064F858 )
    {
      v5 = 1;
      if ( v2 <= 1 )
      {
LABEL_9:
        memcpy_0(v4, v3, v2);
        v4 += v2;
      }
      else
      {
        while ( 1 )
        {
          v6 = v4[v5];
          if ( v6 < 48 || v6 > 57 )
            break;
          if ( ++v5 >= v2 )
            goto LABEL_9;
        }
      }
    }
    ++v4;
  }
  while ( *v4 );
  return *(_DWORD *)(*(_DWORD *)(dword_106C68C0 + 4 * a1) + 20);
}
