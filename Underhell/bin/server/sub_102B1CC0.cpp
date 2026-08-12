bool __thiscall sub_102B1CC0(int this)
{
  int v1; // eax
  int v3; // eax

  v1 = *(_DWORD *)(this + 1168);
  if ( v1 != 174 && (v1 < 201 || v1 > 206) )
    return 0;
  if ( *(_BYTE *)(this + 1127) )
    return 1;
  v3 = sub_101679A0((int)"friendly_encounter");
  return sub_10167A00(v3) == 1;
}
