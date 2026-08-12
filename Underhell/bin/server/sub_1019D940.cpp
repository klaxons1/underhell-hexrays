int sub_1019D940()
{
  int v0; // esi
  int result; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    v0 = dword_106B8370;
    result = sub_1025FC50();
    if ( result && *(_DWORD *)(v0 + 1124) != 1 && !*(_BYTE *)(v0 + 1168) )
    {
      sub_1023C380((int)"EDIT_TOGGLE_PLACE_MODE", 0.0, 0);
      result = *(_DWORD *)(v0 + 1124) != 4 ? 4 : 0;
      *(_DWORD *)(v0 + 1124) = result;
      *(_DWORD *)(v0 + 1180) = 0;
      *(_DWORD *)(v0 + 1088) = 0;
      *(_DWORD *)(v0 + 1100) = 4;
    }
  }
  return result;
}
