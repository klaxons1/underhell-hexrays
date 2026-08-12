void __thiscall sub_1023D6F0(int this, int a2)
{
  int v3; // ecx
  float v4; // edx
  char *v5; // eax
  float *v6; // eax
  float *v7; // edi
  const char *v8; // eax
  int v9; // [esp+14h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(int *)(this + 580);
  v4 = *(float *)(this + 584);
  v11 = *(float *)(this + 588);
  v5 = *(char **)(this + 816);
  v9 = v3;
  v10 = v4;
  if ( v5 )
  {
    v6 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
    v7 = v6;
    if ( v6 )
    {
      if ( ((_DWORD)v6[63] & 0x800) != 0 )
        sub_100DAE60((int)v6);
      v9 = *((int *)v7 + 145);
      v10 = v7[146];
      v11 = v7[147];
    }
    else
    {
      v8 = *(const char **)(this + 816);
      if ( !v8 )
        v8 = String;
      DevWarning("Warning- ai_sound cannot find proxy entity named '%s'. Using self.\n", v8);
    }
  }
  sub_1023D4B0(
    *(_DWORD *)(this + 800) | *(_DWORD *)(this + 804),
    (float *)&v9,
    *(_DWORD *)(this + 808),
    *(float *)(this + 812),
    this,
    0,
    0);
}
