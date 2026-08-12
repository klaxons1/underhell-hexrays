char *__thiscall sub_102FC9A0(char *this, int a2)
{
  int *v2; // edi
  char **v3; // ebx
  char *v5; // eax
  _DWORD *v6; // edi
  const char *v7; // ebx
  const char *v9; // eax
  int v10; // eax
  int v11; // edx
  double v12; // st7
  char *v13; // eax
  char *v14; // [esp-8h] [ebp-4Ch]
  float v15; // [esp+0h] [ebp-44h]
  float v16[3]; // [esp+1Ch] [ebp-28h] BYREF
  int v17[3]; // [esp+28h] [ebp-1Ch] BYREF
  int v18[3]; // [esp+34h] [ebp-10h] BYREF
  float v19; // [esp+40h] [ebp-4h]

  v2 = (int *)a2;
  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v5 = *v3;
    if ( !*v3 )
      v5 = (char *)String;
  }
  else
  {
    v5 = (char *)sub_1010D460(a2 + 8);
  }
  v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, (int)this, *v2, v2[1], 0);
  if ( v6 )
  {
    if ( (v6[63] & 0x800) != 0 )
      sub_100DAE60((int)v6);
    v18[0] = v6[145];
    v18[1] = v6[146];
    v10 = v6[147];
    *(float *)&a2 = 0.0;
    v11 = *((_DWORD *)this + 63);
    v18[2] = v10;
    v19 = *(float *)(dword_106B6F0C + 44);
    if ( (v11 & 0x800) != 0 )
      sub_100DAE60((int)this);
    v12 = ((double (__thiscall *)(char *))*(_DWORD *)(*(_DWORD *)this + 1732))(this);
    v15 = v12 * v19;
    sub_10079AD0((float *)v17, (float *)this + 145, (float *)v18, v15, (float *)&a2, 800.0, v16);
    if ( *(_DWORD *)(dword_106E2A04 + 48) == 2 )
    {
      v14 = sub_10073730(*((_DWORD *)this + 419));
      v13 = sub_10073710(*((_DWORD *)this + 419));
      sub_1011BB20((int)v18, (int)v13, (int)v14, 0, 255, 0, 0, 5.0);
      if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
        sub_100DAE60((int)this);
      sub_1011BC50((float *)this + 145, (float *)v18, 0, 255, 0, 0, 5.0);
      if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
        sub_100DAE60((int)this);
      sub_1011BC50((float *)this + 145, (float *)v17, 255, 255, 0, 0, 5.0);
    }
    *((float *)this + 1010) = *(float *)v17;
    *((float *)this + 1011) = *(float *)&v17[1];
    *((float *)this + 1012) = *(float *)&v17[2];
    return sub_10023CB0(this, 79);
  }
  else if ( v3[4] == (char *)2 )
  {
    v7 = *v3;
    if ( v7 )
      return (char *)Msg("Unable to find jump target named (%s)\n", v7);
    else
      return (char *)Msg("Unable to find jump target named (%s)\n", String);
  }
  else
  {
    v9 = sub_1010D460((int)v3);
    return (char *)Msg("Unable to find jump target named (%s)\n", v9);
  }
}
