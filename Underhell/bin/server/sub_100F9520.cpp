int __stdcall sub_100F9520(char *String2)
{
  int v1; // esi
  int v2; // edi
  int v4; // [esp+Ch] [ebp-4h]

  v4 = 0;
  v1 = sub_1012BF20(0, String2, 0, 0, 0, 0);
  if ( !v1 )
    return 0;
  v2 = -1;
  do
  {
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, ++v2) < 1 )
      v4 = v1;
    v1 = sub_1012BF20(v1, String2, 0, 0, 0, 0);
  }
  while ( v1 );
  return v4;
}
