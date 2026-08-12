void __thiscall sub_1023D600(int this, int a2)
{
  int v3; // ebx
  int v4; // ecx
  float v5; // edx
  char *v6; // eax
  float *v7; // eax
  float *v8; // edi
  const char *v9; // eax
  int v10; // [esp+18h] [ebp-Ch] BYREF
  float v11; // [esp+1Ch] [ebp-8h]
  float v12; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(int *)(this + 580);
  v5 = *(float *)(this + 584);
  v12 = *(float *)(this + 588);
  v6 = *(char **)(this + 816);
  v10 = v4;
  v11 = v5;
  if ( v6 )
  {
    v7 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0);
    v8 = v7;
    if ( v7 )
    {
      if ( ((_DWORD)v7[63] & 0x800) != 0 )
        sub_100DAE60((int)v7);
      v10 = *((int *)v8 + 145);
      v11 = v8[146];
      v12 = v8[147];
    }
    else
    {
      v9 = *(const char **)(this + 816);
      if ( !v9 )
        v9 = String;
      DevWarning("Warning- ai_sound cannot find proxy entity named '%s'. Using self.\n", v9);
    }
  }
  sub_1023D4B0(*(_DWORD *)(this + 800), (float *)&v10, v3, *(float *)(this + 812), this, 0, 0);
}
