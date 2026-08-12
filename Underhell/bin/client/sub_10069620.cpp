int __cdecl sub_10069620(char *Str, char *Buffer)
{
  int v2; // ebx
  int v3; // esi
  int v5; // eax
  int v7; // [esp+8h] [ebp-Ch]
  unsigned int v8; // [esp+Ch] [ebp-8h]
  char *v9; // [esp+10h] [ebp-4h]

  v2 = 0;
  v9 = 0;
  v8 = 0;
  if ( strstr(Str, "playsoundscape") && strlen(Str) > 0xF )
  {
    v9 = Str + 15;
    v8 = strlen(Str + 15);
  }
  v7 = 0;
  if ( dword_10411180 <= 0 )
    return 0;
  v3 = sub_10229A00(*(_DWORD *)dword_10411174);
  if ( !v3 )
    return 0;
  do
  {
    if ( v2 >= 64 )
      break;
    if ( !v9 || !sub_10227BC0(v3, v9, v8) )
    {
      sub_10228370(Buffer, 0x40u, "%s %s", (char)"playsoundscape");
      ++v2;
      Buffer += 64;
    }
    v5 = v7 + 1;
    v7 = v5;
    if ( v5 >= dword_10411180 )
      break;
    v3 = sub_10229A00(*(_DWORD *)(dword_10411174 + 4 * v5));
  }
  while ( v3 );
  return v2;
}
