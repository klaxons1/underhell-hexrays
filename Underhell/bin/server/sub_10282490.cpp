int __cdecl sub_10282490(float *a1, float *a2, char *a3, char *Source)
{
  double v4; // st7
  int result; // eax
  int v6; // esi
  int v7; // edx
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  float v9; // [esp+90h] [ebp+10h]

  if ( !a3 || !*a3 )
    goto LABEL_11;
  v4 = (double)atoi(a3);
  if ( v4 < 1.0 )
    v4 = 1.0;
  if ( v4 > 1000.0 )
    v4 = 1000.0;
  v9 = v4 + *(float *)(dword_106B31C8 + 12);
  if ( Source && *Source )
  {
    sub_104299C0(String, Source, 0x80u);
    _strlwr(String);
    result = sub_100E2680((int)"te_tester", a1, a2, 0);
    v6 = result;
    if ( result )
    {
      sub_104299C0((char *)(result + 808), String, 0x40u);
      v7 = *(_DWORD *)v6;
      *(float *)(v6 + 804) = v9;
      (*(void (__thiscall **)(int))(v7 + 96))(v6);
      return v6;
    }
  }
  else
  {
LABEL_11:
    Msg("Usage:  te <lifetime> <entname>\n");
    return 0;
  }
  return result;
}
