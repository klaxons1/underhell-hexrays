_DWORD *__thiscall sub_10428BC0(int *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  const char *v4; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  void *v9; // eax

  v2 = a2;
  v4 = (const char *)sub_1044A120(a2);
  if ( _stricmp(v4, "DmeParticleSystemDefinition") )
    return 0;
  sub_10428AC0(this, (int)v2);
  v6 = (_DWORD *)sub_10184390(848);
  if ( v6 )
    v7 = sub_10428780(v6);
  else
    v7 = 0;
  a2 = v7;
  v8 = sub_1044A4D0("preventNameBasedLookup");
  if ( !v8 )
  {
    byte_106FDBD8 = 0;
    goto LABEL_9;
  }
  if ( *(_DWORD *)v8 != 4 )
  {
    byte_106FDBD0 = 0;
    goto LABEL_9;
  }
  if ( !**(_BYTE **)(v8 + 8) )
  {
LABEL_9:
    v9 = (void *)sub_1044A890(v2);
    *(_DWORD *)sub_10428080(this, v9) = v7;
    sub_104284C0((int)v7, v2);
    return v7;
  }
  sub_1041DA00(this + 19, this[22], &a2);
  sub_104284C0((int)v7, v2);
  return v7;
}
