void __thiscall sub_10227FB0(int this, int a2, int a3)
{
  const char *v5; // eax
  int v6; // eax
  double v7; // st7
  int *v8; // ecx
  float v9; // [esp+18h] [ebp+Ch]

  if ( !*(_BYTE *)(this + 1500) )
  {
    v5 = (const char *)sub_104183D0(a3);
    v9 = atof(v5);
    if ( sub_10418860(a3) != -1 )
    {
      v6 = sub_10418840(a3);
      if ( v6 <= 0 )
        return;
      sub_10418850(v6 - 1);
    }
    sub_1041CA50(v9);
    v7 = v9;
    *(float *)(this + 892) = v9;
    if ( *(_DWORD *)(this + 888) != LODWORD(v9) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 888) = v9;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
        {
          sub_100194B0(v8, 888);
          v7 = v9;
        }
        *(float *)(this + 888) = v7;
      }
    }
  }
}
