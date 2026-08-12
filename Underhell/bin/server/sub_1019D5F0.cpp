int __usercall sub_1019D5F0@<eax>(int a1@<ebp>)
{
  int v1; // esi
  int result; // eax
  float v3; // [esp+0h] [ebp-10h]

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
          v3 = 0.0;
          if ( sub_10191EE0(*(_DWORD *)(v1 + 1092)) )
          {
            sub_1023C380((int)"EDIT_SPLIT.MarkedArea", v3, 0);
LABEL_13:
            result = sub_1019EAB0(v1);
            *(_DWORD *)(v1 + 1180) = 0;
            *(_DWORD *)(v1 + 1088) = 0;
            *(_DWORD *)(v1 + 1100) = 4;
            return result;
          }
        }
        else
        {
          v3 = 0.0;
        }
        sub_1023C380((int)"EDIT_SPLIT.NoMarkedArea", v3, 0);
        goto LABEL_13;
      }
    }
  }
  return result;
}
