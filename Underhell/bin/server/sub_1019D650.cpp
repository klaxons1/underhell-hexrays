int sub_1019D650()
{
  int v0; // esi
  int v1; // ecx
  int result; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    v0 = dword_106B8370;
    result = sub_1025FC50();
    if ( result )
    {
      v1 = *(_DWORD *)(v0 + 1124);
      if ( v1 != 1 && !*(_BYTE *)(v0 + 1168) && v1 != 4 )
      {
        result = sub_1023C380((int)"EDIT_MARK.Enable", 0.0, 0);
        *(_DWORD *)(v0 + 1180) = 0;
        *(_DWORD *)(v0 + 1088) = 0;
        *(_DWORD *)(v0 + 1100) = 4;
      }
    }
  }
  return result;
}
