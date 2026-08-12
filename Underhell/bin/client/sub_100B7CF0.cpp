char *__cdecl sub_100B7CF0(char *Str, char *Buffer)
{
  char *v2; // ebx
  char *result; // eax
  int v4; // ecx
  int v6; // esi
  int v7; // eax
  unsigned int v8; // [esp-8h] [ebp-18h]
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h]
  char *Stra; // [esp+18h] [ebp+8h]

  v2 = Str;
  if ( strstr(Str, "cl_animationinfo") )
    v2 = Str + 17;
  result = 0;
  v4 = 0;
  Stra = 0;
  v9 = dword_1042FBA0;
  v10 = 0;
  if ( dword_1042FBA0 > 0 )
  {
    do
    {
      v6 = *(_DWORD *)(dword_1042FB94 + 4 * v4);
      if ( v6 )
      {
        if ( !*v2
          || (v8 = strlen(v2), v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 32))(v6), !sub_10227BC0(v7, v2, v8)) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 32))(v6);
          sub_10228370(Buffer, 0x40u, "%s %s", (char)"cl_animationinfo");
          ++Stra;
          Buffer += 64;
        }
      }
      v4 = v10 + 1;
      v10 = v4;
    }
    while ( v4 < v9 );
    return Stra;
  }
  return result;
}
