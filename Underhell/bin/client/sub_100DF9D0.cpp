_DWORD *sub_100DF9D0()
{
  _DWORD *result; // eax
  int v1; // esi
  char v2[2048]; // [esp+4h] [ebp-800h] BYREF

  result = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudMessage");
  v1 = (int)result;
  if ( result )
  {
    sub_1022C220(v2, 2048, 0, 0);
    return sub_100DF6B0(v1, v2);
  }
  return result;
}
