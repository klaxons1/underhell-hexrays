int __usercall sub_10181600@<eax>(int result@<eax>, int a2@<ecx>)
{
  int *v2; // edi
  int v3; // esi
  char *v4; // eax
  _DWORD *v5; // eax
  const char *v6; // eax
  int v7; // [esp+0h] [ebp-8h] BYREF
  int v8; // [esp+4h] [ebp-4h]

  if ( result > 0 )
  {
    v2 = (int *)(a2 + 4);
    v8 = result;
    do
    {
      v3 = *(v2 - 1);
      if ( !v3 || (result = sub_100D62D0((_DWORD *)*(v2 - 1))) != 0 )
      {
        *v2 = 1;
      }
      else if ( *(_DWORD *)(v3 + 100) )
      {
        v4 = (char *)*sub_10181480(&v7, *(char **)(v3 + 100));
        if ( !v4 )
          v4 = (char *)String;
        v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
        if ( v5 )
        {
          if ( v5 == (_DWORD *)v3 )
          {
            v6 = sub_100D6390((_DWORD *)v3);
            Warning("LEVEL DESIGN ERROR: Entity %s is parented to itself!\n", v6);
            result = 1;
            *v2 = 1;
          }
          else
          {
            result = sub_10181580((int)v5) + 1;
            *v2 = result;
          }
        }
        else
        {
          result = 1;
          *v2 = 1;
        }
      }
      else
      {
        result = 1;
        *v2 = 1;
      }
      v2 += 4;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
