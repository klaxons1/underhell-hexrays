int sub_10199B00()
{
  int result; // eax
  int v1; // ecx
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int v15; // edi
  int v16; // [esp+0h] [ebp-4h]

  Msg("Merging navigation areas...\n");
LABEL_2:
  while ( 1 )
  {
    result = dword_10632630;
    if ( dword_10632630 == -1 )
      return result;
    v1 = dword_10632624;
    while ( 1 )
    {
      v2 = 12 * result;
      v3 = *(_DWORD *)(v2 + v1);
      v16 = v2;
      if ( !sub_1018ABA0((_DWORD *)v3) )
        goto LABEL_33;
      v4 = *(_DWORD *)(v3 + 536);
      if ( v4 != -1 )
        break;
LABEL_12:
      v7 = *(_DWORD *)(v3 + 608);
      if ( v7 != -1 )
      {
        while ( 1 )
        {
          v8 = 12 * v7;
          v9 = *(_DWORD *)(12 * v7 + *(_DWORD *)(v3 + 596));
          if ( sub_1018ABA0((_DWORD *)v9) )
          {
            if ( *(_DWORD *)(v9 + 740) == *(_DWORD *)(v3 + 752)
              && *(_DWORD *)(v9 + 744) == *(_DWORD *)(v3 + 748)
              && *(_WORD *)(v3 + 40) == *(_WORD *)(v9 + 40)
              && sub_1018BA60((float *)v3, (float *)v9) )
            {
              break;
            }
          }
          v7 = *(_DWORD *)(*(_DWORD *)(v3 + 596) + v8 + 8);
          if ( v7 == -1 )
            goto LABEL_19;
        }
        *(_DWORD *)(v3 + 752) = *(_DWORD *)(v9 + 752);
        *(_DWORD *)(v3 + 748) = *(_DWORD *)(v9 + 748);
        sub_10191950(v3, (int *)v9);
        goto LABEL_2;
      }
LABEL_19:
      v10 = *(_DWORD *)(v3 + 644);
      if ( v10 != -1 )
      {
        while ( 1 )
        {
          v11 = 12 * v10;
          v12 = *(_DWORD *)(12 * v10 + *(_DWORD *)(v3 + 632));
          if ( sub_1018ABA0((_DWORD *)v12) )
          {
            if ( *(_DWORD *)(v3 + 740) == *(_DWORD *)(v12 + 744)
              && *(_DWORD *)(v3 + 752) == *(_DWORD *)(v12 + 748)
              && *(_WORD *)(v3 + 40) == *(_WORD *)(v12 + 40)
              && sub_1018BA60((float *)v3, (float *)v12) )
            {
              break;
            }
          }
          v10 = *(_DWORD *)(v11 + *(_DWORD *)(v3 + 632) + 8);
          if ( v10 == -1 )
            goto LABEL_26;
        }
        *(_DWORD *)(v3 + 740) = *(_DWORD *)(v12 + 740);
        *(_DWORD *)(v3 + 752) = *(_DWORD *)(v12 + 752);
        sub_10191950(v3, (int *)v12);
        goto LABEL_2;
      }
LABEL_26:
      v13 = *(_DWORD *)(v3 + 572);
      if ( v13 != -1 )
      {
        while ( 1 )
        {
          v14 = 12 * v13;
          v15 = *(_DWORD *)(12 * v13 + *(_DWORD *)(v3 + 560));
          if ( sub_1018ABA0((_DWORD *)v15) )
          {
            if ( *(_DWORD *)(v15 + 740) == *(_DWORD *)(v3 + 744)
              && *(_DWORD *)(v15 + 752) == *(_DWORD *)(v3 + 748)
              && *(_WORD *)(v3 + 40) == *(_WORD *)(v15 + 40)
              && sub_1018BA60((float *)v3, (float *)v15) )
            {
              break;
            }
          }
          v13 = *(_DWORD *)(*(_DWORD *)(v3 + 560) + v14 + 8);
          if ( v13 == -1 )
            goto LABEL_33;
        }
        *(_DWORD *)(v3 + 744) = *(_DWORD *)(v15 + 744);
        *(_DWORD *)(v3 + 748) = *(_DWORD *)(v15 + 748);
        sub_10191950(v3, (int *)v15);
        goto LABEL_2;
      }
LABEL_33:
      v1 = dword_10632624;
      result = *(_DWORD *)(v16 + dword_10632624 + 8);
      if ( result == -1 )
        return result;
    }
    while ( 1 )
    {
      v5 = 12 * v4;
      v6 = *(_DWORD *)(12 * v4 + *(_DWORD *)(v3 + 524));
      if ( sub_1018ABA0((_DWORD *)v6) )
      {
        if ( *(_DWORD *)(v3 + 740) == *(_DWORD *)(v6 + 752)
          && *(_DWORD *)(v3 + 744) == *(_DWORD *)(v6 + 748)
          && *(_WORD *)(v3 + 40) == *(_WORD *)(v6 + 40)
          && sub_1018BA60((float *)v3, (float *)v6) )
        {
          break;
        }
      }
      v4 = *(_DWORD *)(*(_DWORD *)(v3 + 524) + v5 + 8);
      if ( v4 == -1 )
        goto LABEL_12;
    }
    *(_DWORD *)(v3 + 740) = *(_DWORD *)(v6 + 740);
    *(_DWORD *)(v3 + 744) = *(_DWORD *)(v6 + 744);
    sub_10191950(v3, (int *)v6);
  }
}
