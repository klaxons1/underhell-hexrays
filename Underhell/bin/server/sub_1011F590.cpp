void __thiscall sub_1011F590(int this)
{
  int v2; // edi
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE *v6; // esi
  unsigned int v7; // eax
  int v8; // eax

  if ( !*(_BYTE *)(this + 1225) )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *(char **)(this + 1000);
      if ( !v3 )
        v3 = (char *)String;
      v4 = sub_1012BF20(v2, v3, 0, 0, 0, 0);
      v2 = v4;
      if ( !v4 )
        break;
      if ( v4 != this )
      {
        v5 = __RTDynamicCast(
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseDoor `RTTI Type Descriptor',
               0);
        v6 = (_BYTE *)v5;
        if ( v5 )
        {
          *(_BYTE *)(v5 + 1225) = 1;
          v7 = *(_DWORD *)(this + 880);
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v7 >> 12 )
            v8 = 0;
          else
            v8 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
          (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD))(*(_DWORD *)v6 + 372))(v6, v8, 0, 3, 0.0);
          v6[1225] = 0;
        }
      }
    }
  }
}
