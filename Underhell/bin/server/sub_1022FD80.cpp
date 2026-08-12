void __thiscall sub_1022FD80(int this, char a2)
{
  char *v3; // eax
  _DWORD *i; // esi
  int v5; // eax
  char *v6; // eax

  *(_BYTE *)(this + 833) = 0;
  if ( a2 )
  {
    v3 = *(char **)(this + 260);
    if ( v3 )
    {
      for ( i = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
            i;
            i = sub_1012BF20(&dword_1069E3E0, (int)i, v6, 0, 0, 0, 0) )
      {
        v5 = __RTDynamicCast(
               (int)i,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_ScriptedSequence `RTTI Type Descriptor',
               0);
        if ( v5 && v5 != this )
          sub_1022FD80(0);
        v6 = *(char **)(this + 260);
        if ( !v6 )
          v6 = (char *)String;
      }
    }
  }
}
