char __cdecl sub_1024CE00(int *a1)
{
  const char *v1; // eax
  int v2; // eax
  int v3; // edi
  int *v4; // ecx
  int v5; // ebx
  unsigned int v6; // edi
  int *v7; // ecx
  int v9; // [esp+8h] [ebp-4h]
  int i; // [esp+14h] [ebp+8h]

  if ( *a1 < 2 )
    Error("Test_RandomizeInPVS <percentage chance to change>");
  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  v2 = atoi(v1);
  v3 = 0;
  v9 = v2;
  for ( i = 0; v3 < dword_106C6E54; i = v3 )
  {
    v2 = *((_DWORD *)dword_106C6E48 + v3);
    if ( v2 != -1 )
    {
      v4 = &off_1061BE18[4 * (*((_DWORD *)dword_106C6E48 + v3) & 0xFFF) + 1];
      v2 = (unsigned int)v2 >> 12;
      if ( off_1061BE18[4 * (*((_DWORD *)dword_106C6E48 + v3) & 0xFFF) + 2] == v2 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          v2 = RandomInt(0, 100);
          if ( v2 < v9 )
          {
            if ( (*(_DWORD *)(v5 + 192) & 0x20) != 0 )
            {
              v6 = *(_DWORD *)(v5 + 192) & 0xFFFFFFDF;
              if ( *(_DWORD *)(v5 + 192) != v6 )
              {
                if ( *(_BYTE *)(v5 + 84) )
                {
                  *(_BYTE *)(v5 + 88) |= 1u;
                }
                else
                {
                  v7 = *(int **)(v5 + 24);
                  if ( v7 )
                    sub_100194B0(v7, 192);
                }
                *(_DWORD *)(v5 + 192) = v6;
              }
              if ( *(_DWORD *)(v5 + 24) )
                **(_DWORD **)(v5 + 24) |= 0x80u;
              LOBYTE(v2) = sub_100D8500((_DWORD *)v5);
              v3 = i;
            }
            else
            {
              LOBYTE(v2) = sub_100EAB80((_DWORD *)v5, 32);
            }
          }
        }
      }
    }
    ++v3;
  }
  return v2;
}
