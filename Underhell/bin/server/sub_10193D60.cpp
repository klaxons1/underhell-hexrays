int __usercall sub_10193D60@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int result; // eax
  float v4; // [esp+0h] [ebp-14h]

  result = sub_1025FC50();
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1124) == 4 )
      return sub_1023C380((int)"EDIT_END_AREA.NotCreating", 0.0, 0);
    sub_10192560(a1, a2);
    if ( *(_DWORD *)(a1 + 1124) == 1 )
    {
      *(_DWORD *)(a1 + 1124) = 0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 1168) )
      {
        v4 = 0.0;
        if ( *(_BYTE *)(a1 + 1128) )
        {
          result = sub_1023C380((int)"EDIT_BEGIN_AREA.NotCreating", v4, 0);
          *(_BYTE *)(a1 + 1168) = 1;
          *(float *)(a1 + 1144) = *(float *)(a1 + 1076);
          *(float *)(a1 + 1148) = *(float *)(a1 + 1080);
          *(float *)(a1 + 1152) = *(float *)(a1 + 1084);
          *(float *)(a1 + 1156) = *(float *)(a1 + 1132);
          *(float *)(a1 + 1160) = *(float *)(a1 + 1136);
          *(float *)(a1 + 1164) = *(float *)(a1 + 1140);
        }
        else
        {
          result = sub_1023C380((int)"EDIT_BEGIN_AREA.NotCreating", v4, 0);
          *(_DWORD *)(a1 + 1124) = 1;
          *(float *)(a1 + 1104) = *(float *)(a1 + 1076);
          *(float *)(a1 + 1108) = *(float *)(a1 + 1080);
          *(float *)(a1 + 1112) = *(float *)(a1 + 1084);
        }
        goto LABEL_12;
      }
      *(_BYTE *)(a1 + 1168) = 0;
    }
    result = sub_1023C380((int)"EDIT_BEGIN_AREA.Creating", 0.0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 1180) = 0;
    *(_DWORD *)(a1 + 1088) = 0;
    *(_DWORD *)(a1 + 1100) = 4;
  }
  return result;
}
