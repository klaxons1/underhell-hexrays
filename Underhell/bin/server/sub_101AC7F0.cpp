void __thiscall sub_101AC7F0(int this)
{
  int v2; // eax
  char *v3; // eax
  float *v4; // edi
  int v5[3]; // [esp+10h] [ebp-18h] BYREF
  int v6[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 236) & 0x24) != 0 )
  {
    v2 = *(_DWORD *)(this + 252);
    *(float *)v6 = 10.0;
    *(float *)&v6[1] = 10.0;
    *(float *)&v6[2] = 10.0;
    *(float *)v5 = -10.0;
    *(float *)&v5[1] = -10.0;
    *(float *)&v5[2] = -10.0;
    if ( (v2 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BB20(this + 580, (int)v5, (int)v6, 255, 100, 100, 0, 0.0);
    v3 = *(char **)(this + 212);
    if ( v3 )
    {
      v4 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
      if ( v4 )
      {
        if ( ((_DWORD)v4[63] & 0x800) != 0 )
          sub_100DAE60((int)v4);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_1011BC50((float *)(this + 580), v4 + 145, 255, 100, 100, 1, 0.0);
      }
    }
  }
  sub_100DF330((float *)this);
}
