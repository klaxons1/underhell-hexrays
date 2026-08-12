int *__thiscall sub_103DE7F0(int this, _DWORD *a2)
{
  int *result; // eax
  char **v4; // ecx
  char *v5; // edi
  _DWORD *v6; // esi
  const char *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // [esp+8h] [ebp-Ch] BYREF
  int v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  result = a2;
  v4 = (char **)(a2 + 2);
  if ( a2[6] != 2 )
  {
    a2 = 0;
    v4 = (char **)&a2;
  }
  v5 = *v4;
  if ( *v4 )
  {
    v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, *result, result[1], 0);
    a2 = v6;
    if ( v6 )
    {
      sub_103DE560((int *)(this + 912), &a2);
      if ( (v6[63] & 0x800) != 0 )
        sub_100DAE60((int)v6);
      v8 = v6[147];
      v9 = v6[146];
      v12 = v6[145];
      v14 = v8;
      v13 = v9;
      sub_103DE4C0((float *)(this + 824), (float *)&v12);
      if ( (v6[63] & 0x800) != 0 )
        sub_100DAE60((int)v6);
      v10 = v6[177];
      v11 = v6[178];
      v12 = v6[176];
      v13 = v10;
      v14 = v11;
      return (int *)sub_100C0DD0((float *)(this + 836), (float *)&v12);
    }
    else
    {
      v7 = *(const char **)(this + 260);
      if ( !v7 )
        v7 = String;
      return (int *)Warning("script_intro %s couldn't find SetCameraViewEntity named %s\n", v7, v5);
    }
  }
  return result;
}
