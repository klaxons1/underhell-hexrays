int __userpurge sub_103AFFD0@<eax>(int a1@<ecx>, double a2@<st0>, int a3)
{
  int v5; // edi

  switch ( a3 )
  {
    case 12:
      return 101;
    case 17:
      return sub_10023D10((_DWORD *)a1, 10) + 100;
    case 35:
    case 36:
      if ( *(_BYTE *)(a1 + 3863) )
        return 12;
      if ( *(_BYTE *)(a1 + 3860) )
        goto LABEL_15;
      if ( sub_103AE840((float *)a1) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 3640) + 8) == 1 )
          return 101;
      }
      else if ( sub_10023D10((_DWORD *)a1, 81) && sub_10023D10((_DWORD *)a1, 10) )
      {
        return 101;
      }
LABEL_15:
      if ( a3 != 36 )
        return sub_10069910((_DWORD *)a1, a3);
      v5 = dword_106B31C8;
      sub_10021820((void *)a1);
      if ( *(float *)(v5 + 12) - a2 < 7.0 )
        return 101;
      if ( sub_10022C70((_DWORD *)a1) )
        return 97;
      else
        return *(_BYTE *)(a1 + 3912) != 0 ? 102 : 75;
    case 41:
      return 93;
    case 42:
      return 94;
    case 43:
      return 88;
    case 44:
      return 89;
    default:
      return sub_10069910((_DWORD *)a1, a3);
  }
}
