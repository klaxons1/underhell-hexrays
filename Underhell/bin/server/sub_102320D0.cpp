void __thiscall sub_102320D0(int this)
{
  const char *v2; // eax
  char *v3; // eax
  _DWORD *i; // esi
  char *v5; // eax

  v2 = *(const char **)(this + 808);
  if ( !v2 )
    v2 = String;
  DevMsg(2, "Cancelling script: %s\n", v2);
  if ( (*(_BYTE *)(this + 900) || (*(_DWORD *)(this + 248) & 0x1000) != 0) && 0.0 != *(float *)(this + 856)
    || (v3 = *(char **)(this + 260)) == 0 )
  {
    sub_10231CC0(this, 0);
  }
  else
  {
    for ( i = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0); i; i = sub_1012BF20(
                                                                         &dword_1069E3E0,
                                                                         (int)i,
                                                                         v5,
                                                                         0,
                                                                         0,
                                                                         0,
                                                                         0) )
    {
      sub_10231CC0((int)i, 0);
      v5 = *(char **)(this + 260);
      if ( !v5 )
        v5 = (char *)String;
    }
  }
}
