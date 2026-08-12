int __usercall sub_10195210@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int result; // eax
  int *v4; // edi

  result = sub_1025FC50();
  if ( result )
  {
    result = *(_DWORD *)(a1 + 1124);
    if ( result != 1 && !*(_BYTE *)(a1 + 1168) && result != 4 )
    {
      sub_10192560(a1, a2);
      if ( *(_DWORD *)(a1 + 1092) )
      {
        sub_1023C380((int)"EDIT_DELETE", 0.0, 0);
        sub_10194AB0(&dword_10632624, (_DWORD *)(a1 + 1092));
        v4 = *(int **)(a1 + 1092);
        if ( !v4 )
        {
LABEL_12:
          sub_1019EAB0(a1);
          result = 0;
          *(_DWORD *)(a1 + 1180) = 0;
          *(_DWORD *)(a1 + 1088) = 0;
          *(_DWORD *)(a1 + 1100) = 4;
          return result;
        }
        sub_10190B20(v4);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 1172) )
          goto LABEL_12;
        sub_1023C380((int)"EDIT_DELETE", 0.0, 0);
        sub_10194AB0((int *)(a1 + 1200), (_DWORD *)(a1 + 1172));
        v4 = *(int **)(a1 + 1172);
        if ( !v4 )
          goto LABEL_12;
        sub_1019CD00(v4);
      }
      sub_10184660((int)v4);
      goto LABEL_12;
    }
  }
  return result;
}
