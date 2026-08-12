int __thiscall sub_10295DD0(_DWORD *this, int a2, char *String2)
{
  int v3; // edi
  int v4; // ebx
  char *v5; // edx
  int v6; // esi
  const char *v7; // eax
  int v9; // [esp+Ch] [ebp-8h]
  _DWORD *v10; // [esp+10h] [ebp-4h]

  v3 = 0;
  v10 = this;
  v9 = this[6];
  if ( v9 <= 0 )
  {
    v5 = String2;
LABEL_13:
    if ( v5 )
    {
      Warning("Specified '%s' as a busy anim name, and it's not in the act busy anim list.\n", v5);
    }
    else if ( a2 != -1 )
    {
      Warning("Tried to use Activity %d as a busy anim, and it's not in the act busy anim list.\n", a2);
    }
    return -1;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = String2;
      v6 = this[3];
      if ( String2 )
      {
        v7 = *(const char **)(v6 + v4);
        if ( v7 )
        {
          if ( !_stricmp(v7, String2) )
            return v3;
          this = v10;
          v5 = String2;
        }
      }
      if ( a2 != -1 && *(_DWORD *)(v6 + v4 + 4) == a2 )
        return v3;
      ++v3;
      v4 += 56;
      if ( v3 >= v9 )
        goto LABEL_13;
    }
  }
}
