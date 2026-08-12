int __usercall sub_1019D610@<eax>(int a1@<ebp>)
{
  int v1; // esi
  float *v2; // ecx
  float *v3; // eax
  int result; // eax
  float v5; // [esp+0h] [ebp-10h]

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
        v2 = *(float **)(v1 + 1092);
        if ( v2 )
        {
          v3 = *(float **)(v1 + 1088);
          if ( !v3 || v3 == v2 )
          {
            Msg("To merge, mark an area, highlight a second area, then invoke the merge command");
            v5 = 0.0;
          }
          else
          {
            v5 = 0.0;
            if ( sub_10191780(v2, *(float **)(v1 + 1088)) )
            {
              sub_1023C380((int)"EDIT_MERGE.Enable", v5, 0);
              goto LABEL_15;
            }
          }
          sub_1023C380((int)"EDIT_MERGE.Disable", v5, 0);
        }
LABEL_15:
        result = sub_1019EAB0(v1);
        *(_DWORD *)(v1 + 1180) = 0;
        *(_DWORD *)(v1 + 1088) = 0;
        *(_DWORD *)(v1 + 1100) = 4;
      }
    }
  }
  return result;
}
