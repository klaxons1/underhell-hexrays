bool __cdecl sub_103945D0(int a1)
{
  const char *v2; // eax
  const char *v3; // ecx
  const char *v4; // ecx

  if ( !a1 )
    return 0;
  v2 = *(const char **)(a1 + 92);
  if ( !v2 )
    v2 = String;
  v3 = (const char *)dword_106EA240;
  if ( !dword_106EA240 )
    v3 = String;
  if ( v2 == v3 )
    return 1;
  v4 = (const char *)dword_106EA23C;
  if ( !dword_106EA23C )
    v4 = String;
  return v2 == v4;
}
