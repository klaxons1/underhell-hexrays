void __thiscall sub_1022FB60(int this, int a2, char *String2, char a4)
{
  char *v5; // eax
  _DWORD *i; // esi
  int v7; // eax
  char *v8; // eax
  unsigned int v9; // ecx
  int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax

  if ( a4 )
  {
    v5 = *(char **)(this + 260);
    if ( !v5 )
      v5 = (char *)String;
    for ( i = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0); i; i = sub_1012BF20(
                                                                         &dword_1069E3E0,
                                                                         (int)i,
                                                                         v8,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         0) )
    {
      v7 = __RTDynamicCast(
             (int)i,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CAI_ScriptedSequence `RTTI Type Descriptor',
             0);
      if ( v7 && v7 != this )
        sub_1022FB60(a2, String2, 0);
      v8 = *(char **)(this + 260);
      if ( !v8 )
        v8 = (char *)String;
    }
  }
  v9 = *(_DWORD *)(this + 880);
  if ( v9 != -1 )
  {
    v10 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
    v11 = v9 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v11 )
    {
      if ( *v10 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v11 )
          v12 = *v10;
        else
          v12 = 0;
        v13 = sub_100D7680(v12);
        if ( v13 )
        {
          *(float *)(this + 856) = *(float *)(dword_106B31C8 + 12);
          *(_DWORD *)(v13 + 2684) = a2;
          sub_10232840(this, v13, String2, 0);
          *(_BYTE *)(this + 901) = 1;
        }
      }
    }
  }
}
