char __thiscall sub_10235BB0(int this, char *String1, char *Source)
{
  int *v5; // ecx
  int v6[3]; // [esp+8h] [ebp-18h] BYREF
  int v7; // [esp+14h] [ebp-Ch] BYREF
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]

  if ( String1 == "color" || !_stricmp(String1, "color") )
  {
    sub_10264FB0((int)&Source, Source);
    if ( *(char **)(this + 812) != Source )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 812) = Source;
        return 1;
      }
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 812);
      *(_DWORD *)(this + 812) = Source;
    }
    return 1;
  }
  else if ( String1 == "angles" || !_stricmp(String1, "angles") )
  {
    sub_10264F10((int)&v7, Source);
    if ( *(float *)&v7 == flt_106F1CB4 && v8 == flt_106F1CB8 && v9 == flt_106F1CBC )
    {
      *(float *)&v7 = 80.0;
      v8 = 30.0;
      v9 = 0.0;
    }
    sub_10422220(&v7, v6);
    sub_10235B40((float *)(this + 800), (float *)v6);
    return 1;
  }
  else if ( String1 == "direction" || !_stricmp(String1, "direction") )
  {
    if ( fabs(
           *(float *)(this + 804) * *(float *)(this + 804)
         + *(float *)(this + 800) * *(float *)(this + 800)
         + *(float *)(this + 808) * *(float *)(this + 808)
         - 1.0) > 0.001 )
    {
      sub_10264F10((int)v6, Source);
      sub_10235B40((float *)(this + 800), (float *)v6);
    }
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, Source);
  }
}
