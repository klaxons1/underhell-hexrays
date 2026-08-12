int __userpurge sub_10163C10@<eax>(int a1@<ecx>, int a2@<edi>, int a3, float a4)
{
  int v6; // edi
  const char *v7; // eax
  double v8; // st7
  const char *v9; // eax
  int result; // eax
  const char *v11; // eax
  float v12; // [esp+0h] [ebp-18h]
  float v13; // [esp+4h] [ebp-14h]
  char *String1; // [esp+14h] [ebp-4h]
  float *v16; // [esp+20h] [ebp+8h]
  float v17; // [esp+24h] [ebp+Ch]

  *(float *)(a1 + 4 * a3 + 4184) = a4;
  String1 = (char *)sub_100BF870(a1, a3);
  v6 = 0;
  if ( sub_100BF790(a1) > 0 )
  {
    v16 = (float *)(a1 + 4184);
    do
    {
      if ( v6 != a3 )
      {
        v7 = (const char *)sub_100BF870(a1, v6);
        if ( !_stricmp(String1, v7) )
          *v16 = 0.0;
      }
      ++v16;
      ++v6;
    }
    while ( v6 < sub_100BF790(a1) );
  }
  v13 = a4 + 0.2;
  v12 = a4 - 0.2;
  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         LODWORD(v12),
         LODWORD(v13),
         a2);
  if ( v8 <= 1.0 )
  {
    if ( v8 < 0.0 )
      v8 = 0.0;
  }
  else
  {
    v8 = 1.0;
  }
  v17 = v8;
  v9 = (const char *)sub_100BF7F0(a1, a3);
  result = strncmp("right_", v9, 6u);
  if ( result )
  {
    v11 = (const char *)sub_100BF7F0(a1, a3);
    result = strncmp("left_", v11, 5u);
    if ( !result )
      *(float *)(a1 + 4 * a3 + 4180) = v17;
  }
  else
  {
    *(float *)(a1 + 4 * a3 + 4188) = v17;
  }
  return result;
}
