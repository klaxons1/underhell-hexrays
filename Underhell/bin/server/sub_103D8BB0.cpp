int __thiscall sub_103D8BB0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  const char *v5; // esi
  const char **v6; // ecx
  const char *v7; // eax
  int result; // eax
  int v9; // [esp+4h] [ebp-4h]

  sub_103D86A0(this);
  v9 = sub_1012BC10(&dword_1069E3E0, 0);
  do
  {
    v3 = __RTDynamicCast(
           v9,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CSniperTarget `RTTI Type Descriptor',
           0);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(const char **)(v3 + 800);
      if ( !v5 )
        v5 = String;
      v6 = (const char **)(a2 + 8);
      if ( *(_DWORD *)(a2 + 24) == 2 )
      {
        v7 = *v6;
        if ( !*v6 )
          v7 = String;
      }
      else
      {
        v7 = sub_1010D460((int)v6);
      }
      if ( !strcmp(v7, v5) )
        this[this[930]++ + 931] = v4;
    }
    v9 = sub_1012BC10(&dword_1069E3E0, v9);
  }
  while ( v9 );
  result = this[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                  dword_106B31E4,
                  0,
                  this[930] - 1)
              + 931];
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
    this[915] = *(_DWORD *)result;
  }
  else
  {
    this[915] = -1;
  }
  return result;
}
