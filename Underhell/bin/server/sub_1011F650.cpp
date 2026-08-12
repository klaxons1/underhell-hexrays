void __thiscall sub_1011F650(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  int v3; // edi
  char *v4; // eax
  int v5; // eax
  _BYTE *v6; // esi
  void (__thiscall *v7)(_BYTE *, int); // edx

  v2 = this;
  if ( !this[1225] )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = (char *)*((_DWORD *)v2 + 250);
      if ( !v4 )
        v4 = (char *)String;
      v5 = sub_1012BF20(v3, v4, 0, 0, 0, 0);
      v3 = v5;
      if ( !v5 )
        break;
      if ( (_BYTE *)v5 != v2 )
      {
        v6 = (_BYTE *)__RTDynamicCast(
                        v5,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CBaseDoor `RTTI Type Descriptor',
                        0);
        if ( v6 )
        {
          v7 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v6 + 380);
          v6[1225] = 1;
          v7(v6, a2);
          v6[1225] = 0;
        }
        v2 = this;
      }
    }
  }
}
