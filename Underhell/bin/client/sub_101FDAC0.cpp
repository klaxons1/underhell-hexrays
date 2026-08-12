_DWORD *__thiscall sub_101FDAC0(int *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  const char *v4; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  void *v9; // eax

  v2 = a2;
  v4 = (const char *)sub_102AA3C0(a2);
  if ( _stricmp(v4, "DmeParticleSystemDefinition") )
    return 0;
  sub_101FD9C0(this, (int)v2);
  v6 = (_DWORD *)sub_100DDA40(848);
  if ( v6 )
    v7 = sub_101FD680(v6);
  else
    v7 = 0;
  a2 = v7;
  v8 = sub_102AA770("preventNameBasedLookup");
  if ( !v8 )
  {
    byte_10465848 = 0;
    goto LABEL_9;
  }
  if ( *(_DWORD *)v8 != 4 )
  {
    byte_10465840 = 0;
    goto LABEL_9;
  }
  if ( !**(_BYTE **)(v8 + 8) )
  {
LABEL_9:
    v9 = (void *)sub_102AAB30(v2);
    *(_DWORD *)sub_101FBB20(this, v9) = v7;
    sub_101FC2D0((int)v7, v2);
    return v7;
  }
  sub_10258C50(this[22], &a2);
  sub_101FC2D0((int)v7, v2);
  return v7;
}
