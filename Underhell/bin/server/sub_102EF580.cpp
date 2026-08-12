void __cdecl sub_102EF580(_DWORD *a1, char *String2)
{
  int v2; // edx
  _DWORD *v3; // esi
  char *v4; // eax

  if ( String2 )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
    if ( !v3 )
      goto LABEL_8;
    v4 = (char *)a1[23];
    if ( !v4 )
      v4 = (char *)String;
    if ( (char *)v3[23] == v4 || sub_100D6240(v3, v4) )
    {
      sub_100352C0((int)a1, v2, 1);
      a1[201] = v3[201];
      a1[202] = v3[202];
      qmemcpy(a1 + 203, v3 + 203, 0x28u);
    }
    else
    {
LABEL_8:
      DevWarning("Invalid item_dynamic_resupply name %s\n", String2);
    }
  }
}
