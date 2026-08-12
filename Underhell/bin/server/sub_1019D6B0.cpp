int __usercall sub_1019D6B0@<eax>(int a1@<ebp>)
{
  int v1; // esi
  float *v2; // ecx
  float *v3; // ecx
  int v4; // eax
  int v5; // ecx
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
          v2 = *(float **)(v1 + 1180);
          if ( v2 )
          {
            sub_1019C500(v2, *(float **)(v1 + 1092));
            result = sub_1023C380((int)"EDIT_CONNECT.Added", 0.0, 0);
LABEL_19:
            *(_DWORD *)(v1 + 1180) = 0;
            *(_DWORD *)(v1 + 1088) = 0;
            *(_DWORD *)(v1 + 1100) = 4;
            return result;
          }
          v3 = *(float **)(v1 + 1088);
          if ( v3 )
          {
            v4 = sub_1018B220(v3, (float *)(v1 + 1076));
            if ( v4 != 4 )
            {
              sub_1018F770(*(char **)(v1 + 1088), *(char **)(v1 + 1092), v4);
              result = sub_1023C380((int)"EDIT_CONNECT.Added", 0.0, 0);
              goto LABEL_19;
            }
LABEL_18:
            result = sub_1023C380((int)"EDIT_CONNECT.AllDirections", 0.0, 0);
            goto LABEL_19;
          }
        }
        else
        {
          result = *(_DWORD *)(v1 + 1172);
          if ( !result )
            goto LABEL_19;
          v5 = *(_DWORD *)(v1 + 1088);
          if ( v5 )
          {
            sub_10190D00(v5, *(_DWORD *)(v1 + 1172));
            result = sub_1023C380((int)"EDIT_CONNECT.Added", 0.0, 0);
            goto LABEL_19;
          }
        }
        Msg(
          "To connect areas, mark an area, highlight a second area, then invoke the connect command. Make sure the cursor"
          " is directly north, south, east, or west of the marked area.");
        goto LABEL_18;
      }
    }
  }
  return result;
}
