int __usercall sub_1019D6D0@<eax>(int a1@<ebp>)
{
  int v1; // esi
  int *v2; // ecx
  _DWORD *v3; // ecx
  int *v4; // ecx
  int result; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    v1 = dword_106B8370;
    result = sub_1025FC50();
    if ( result )
    {
      result = *(_DWORD *)(v1 + 1124);
      if ( result != 1 && !*(_BYTE *)(v1 + 1168) && result != 4 )
      {
        sub_10192560(v1, a1);
        if ( *(_DWORD *)(v1 + 1092) )
        {
          v2 = *(int **)(v1 + 1088);
          if ( v2 )
          {
            sub_1018F810(v2, *(_DWORD *)(v1 + 1092));
            sub_1018F810(*(int **)(v1 + 1092), *(_DWORD *)(v1 + 1088));
            result = sub_1023C380((int)"EDIT_DISCONNECT.MarkedArea", 0.0, 0);
LABEL_17:
            *(_DWORD *)(v1 + 1180) = 0;
            *(_DWORD *)(v1 + 1088) = 0;
            *(_DWORD *)(v1 + 1100) = 4;
            return result;
          }
          v3 = *(_DWORD **)(v1 + 1180);
          if ( v3 )
          {
            sub_1019C170(v3, *(_DWORD *)(v1 + 1092));
            sub_1018F880(*(int **)(v1 + 1092), *(_DWORD *)(v1 + 1180));
            result = sub_1023C380((int)"EDIT_DISCONNECT.MarkedArea", 0.0, 0);
            goto LABEL_17;
          }
        }
        else
        {
          result = *(_DWORD *)(v1 + 1172);
          if ( !result )
            goto LABEL_17;
          v4 = *(int **)(v1 + 1088);
          if ( v4 )
          {
            sub_1018F880(v4, *(_DWORD *)(v1 + 1172));
            sub_1019C170(*(_DWORD **)(v1 + 1172), *(_DWORD *)(v1 + 1088));
            result = sub_1023C380((int)"EDIT_DISCONNECT.MarkedArea", 0.0, 0);
            goto LABEL_17;
          }
        }
        Msg(
          "To disconnect areas, mark an area, highlight a second area, then invoke the disconnect command. This will remo"
          "ve all connections between the two areas.");
        result = sub_1023C380((int)"EDIT_DISCONNECT.NoMarkedArea", 0.0, 0);
        goto LABEL_17;
      }
    }
  }
  return result;
}
