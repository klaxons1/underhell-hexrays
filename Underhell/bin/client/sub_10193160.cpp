char __thiscall sub_10193160(int this)
{
  int v2; // eax
  int v3; // eax
  char result; // al

  v2 = *(_DWORD *)(this + 3396);
  if ( v2 )
  {
    sub_100EA4D0((_DWORD *)(this + 444), v2, 0, 0);
    *(_DWORD *)(this + 3396) = 0;
  }
  if ( *(_BYTE *)(this + 3392) == 1 )
  {
    v3 = sub_100EA350(
           (int *)(this + 444),
           "blood_antlionguard_injured_light",
           1,
           -1,
           SLODWORD(flt_10459240),
           qword_10459244,
           SHIDWORD(qword_10459244));
  }
  else
  {
    if ( *(_BYTE *)(this + 3392) != 2 )
      goto LABEL_9;
    v3 = sub_100EA350(
           (int *)(this + 444),
           "blood_antlionguard_injured_heavy",
           1,
           -1,
           SLODWORD(flt_10459240),
           qword_10459244,
           SHIDWORD(qword_10459244));
  }
  *(_DWORD *)(this + 3396) = v3;
  if ( v3 )
    sub_100EA130(
      (_DWORD *)(this + 444),
      v3,
      1,
      this,
      1,
      0,
      SLODWORD(flt_10459240),
      qword_10459244,
      SHIDWORD(qword_10459244));
LABEL_9:
  result = *(_BYTE *)(this + 3392);
  *(_BYTE *)(this + 3393) = result;
  return result;
}
