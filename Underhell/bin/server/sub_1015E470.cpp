int sub_1015E470()
{
  int result; // eax
  int *v1; // esi
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  const char *v5; // eax
  const char *v6; // [esp-8h] [ebp-1Ch]
  const char *v7; // [esp-4h] [ebp-18h]
  double v8; // [esp+0h] [ebp-14h]

  result = dword_1064EDD0;
  if ( dword_1064EDD0 != -1 )
  {
    v1 = &off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 2] == (unsigned int)dword_1064EDD0 >> 12 )
    {
      result = *v1;
      if ( *v1 )
      {
        if ( dword_1064EDAC == -1
          || off_1061BE18[4 * (dword_1064EDAC & 0xFFF) + 2] != (unsigned int)dword_1064EDAC >> 12 )
        {
          v2 = 0;
        }
        else
        {
          v2 = (_DWORD *)off_1061BE18[4 * (dword_1064EDAC & 0xFFF) + 1];
        }
        if ( dword_1064EDA8 == -1
          || off_1061BE18[4 * (dword_1064EDA8 & 0xFFF) + 2] != (unsigned int)dword_1064EDA8 >> 12 )
        {
          v3 = 0;
        }
        else
        {
          v3 = (_DWORD *)off_1061BE18[4 * (dword_1064EDA8 & 0xFFF) + 1];
        }
        if ( off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 2] == (unsigned int)dword_1064EDD0 >> 12 )
          v4 = (_DWORD *)*v1;
        else
          v4 = 0;
        v8 = flt_1064EDB4;
        v7 = sub_100D6390(v2);
        v6 = sub_100D6390(v3);
        v5 = sub_100D6390(v4);
        Warning(
          "Unapplied multidamage left in the system:\nTarget: %s\nInflictor: %s\nAttacker: %s\nDamage: %.2f\n",
          v5,
          v6,
          v7,
          v8);
        return sub_10248230();
      }
    }
  }
  return result;
}
