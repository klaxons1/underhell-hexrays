int __cdecl sub_100768E0(char *a1, _BYTE *a2, int a3)
{
  char *v3; // edi
  int result; // eax
  int v5; // esi
  char v6; // dl

  v3 = a1;
  result = 0;
  if ( *a1 )
  {
    v5 = 2;
    while ( 1 )
    {
      if ( result >= a3 - 1 )
      {
LABEL_15:
        a2[result] = 0;
        return result;
      }
      if ( v3 == a1 && *v3 == 35 )
      {
        a2[result] = 42;
      }
      else
      {
        v6 = *v3;
        if ( *v3 == 37 )
        {
          a2[result] = 42;
        }
        else
        {
          if ( v6 == 38 )
          {
            if ( v5 < a3 )
            {
              *(_WORD *)&a2[result] = 9766;
              result += 2;
              v5 += 2;
            }
            goto LABEL_14;
          }
          a2[result] = v6;
        }
      }
      ++result;
      ++v5;
LABEL_14:
      if ( !*++v3 )
        goto LABEL_15;
    }
  }
  *a2 = 0;
  return result;
}
