unsigned int __thiscall sub_102DD010(unsigned int *this, int a2)
{
  const char *v3; // eax
  unsigned int result; // eax
  const char *v5; // eax
  unsigned int *v6; // ebx
  int *v7; // ecx
  int v8; // esi
  const char *v9; // eax
  int v10; // [esp+14h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v3 = *(const char **)(a2 + 8);
    if ( !v3 )
      v3 = String;
  }
  else
  {
    v3 = sub_1010D460(a2 + 8);
  }
  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v3) < 0 )
    return Warning("SetPlayerModel Called with model that was not cached!\n");
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v5 = *(const char **)(a2 + 8);
    if ( !v5 )
      v5 = String;
  }
  else
  {
    v5 = sub_1010D460(a2 + 8);
  }
  (*(void (__thiscall **)(unsigned int *, const char *))(*this + 104))(this, v5);
  v6 = this + 477;
  v10 = 48;
  do
  {
    result = *v6;
    if ( *v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*v6 & 0xFFF) + 1];
      result >>= 12;
      if ( off_1061BE18[4 * (*v6 & 0xFFF) + 2] == result )
      {
        v8 = *v7;
        if ( *v7 )
        {
          v9 = *(const char **)(v8 + 92);
          if ( !v9 )
            v9 = String;
          result = strcmp(v9, "weapon_bugbait");
          if ( result )
          {
            (*(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD))(*this + 960))(this, v8, 0, 0);
            result = (*(int (__thiscall **)(unsigned int *, int))(*this + 952))(this, v8);
          }
        }
      }
    }
    ++v6;
    --v10;
  }
  while ( v10 );
  return result;
}
