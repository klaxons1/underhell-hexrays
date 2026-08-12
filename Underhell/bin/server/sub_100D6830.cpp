char __userpurge sub_100D6830@<al>(int a1@<ecx>, int a2@<edi>, char *String2, int a4)
{
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  if ( !String2 )
    return 0;
  v5 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a2);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v6 = 0;
    if ( (int)v5[1] > 0 )
      break;
LABEL_9:
    v5 = (_DWORD *)v5[3];
    if ( !v5 )
      return 0;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = v7 + *v5;
    if ( (*(_BYTE *)(v8 + 18) & 0x14) != 0 && !_stricmp(*(const char **)(v8 + 20), String2) )
      break;
    ++v6;
    v7 += 52;
    if ( v6 >= v5[1] )
      goto LABEL_9;
  }
  sub_1010C270(*(_DWORD *)(52 * v6 + *v5), a1 + *(_DWORD *)(52 * v6 + *v5 + 8));
  return 1;
}
