int __usercall sub_1019D5D0@<eax>(int a1@<ebp>)
{
  int v1; // esi
  float *v2; // ecx
  char v3; // al
  int result; // eax
  float v5; // [esp+4h] [ebp-10h]

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
          v3 = sub_101913A0(v2, *(_BYTE *)(v1 + 1117), *(float *)(v1 + 1120), 0, 0);
          v5 = 0.0;
          if ( v3 )
            sub_1023C380((int)"EDIT_SPLIT.MarkedArea", v5, 0);
          else
            sub_1023C380((int)"EDIT_SPLIT.NoMarkedArea", v5, 0);
        }
        result = sub_1019EAB0(v1);
        *(_DWORD *)(v1 + 1180) = 0;
        *(_DWORD *)(v1 + 1088) = 0;
        *(_DWORD *)(v1 + 1100) = 4;
      }
    }
  }
  return result;
}
