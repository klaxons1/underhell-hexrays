int sub_102D9AE0()
{
  const char *v0; // eax
  int result; // eax

  v0 = *(const char **)(dword_106B31C8 + 60);
  if ( !v0 )
    v0 = String;
  result = sub_104292D0(v0, "ep1_", 4);
  if ( !result )
    byte_1060F308 = 0;
  return result;
}
