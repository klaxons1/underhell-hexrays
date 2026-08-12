int __usercall sub_100BFEE0@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, char *Str, char *Buffer)
{
  int i; // edi
  int v7; // esi
  unsigned int v10; // [esp+0h] [ebp-Ch]
  char *v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  v12 = 0;
  if ( !dword_1047CA78 )
    return 0;
  v11 = 0;
  v10 = 0;
  if ( strstr(Str, "cc_emit") && strlen(Str) > 8 )
  {
    v11 = Str + 8;
    v10 = strlen(Str + 8);
  }
  for ( i = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA78 + 44))(dword_1047CA78, a2, a3);
        i != -1;
        i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA78 + 48))(dword_1047CA78) )
  {
    if ( v12 >= 64 )
      break;
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA78 + 36))(dword_1047CA78, i, a1);
    if ( v7 && (!v11 || !sub_10227BC0(v7, v11, v10)) )
    {
      sub_10228370(Buffer, 0x40u, "%s %s", (char)"cc_emit");
      ++v12;
      Buffer += 64;
    }
    a1 = i;
  }
  return v12;
}
