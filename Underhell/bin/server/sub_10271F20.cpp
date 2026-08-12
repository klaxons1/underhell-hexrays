char __thiscall sub_10271F20(void *this, char *Str, char *Source)
{
  char *v4; // eax
  _BYTE v6[64]; // [esp+Ch] [ebp-D8h] BYREF
  _BYTE v7[64]; // [esp+4Ch] [ebp-98h] BYREF
  int v8[16]; // [esp+8Ch] [ebp-58h] BYREF
  int v9[3]; // [esp+CCh] [ebp-18h] BYREF
  int v10[3]; // [esp+D8h] [ebp-Ch] BYREF

  v4 = strchr(Str, 35);
  if ( v4 )
    *v4 = 0;
  if ( Str == "panelname" || !_stricmp(Str, "panelname") )
  {
    sub_10271CF0((int)this, (int)Source);
    return 1;
  }
  else if ( Str == "angles" || !_stricmp(Str, "angles") )
  {
    sub_10264F10((int)v9, Source);
    sub_10425BC0(v9, v7);
    *(float *)v10 = 0.0;
    *(float *)&v10[1] = 1.0;
    *(float *)&v10[2] = 0.0;
    sub_10425F00((int)v8, (int)v10, 90.0);
    sub_10425BE0(v7, v8, v6);
    sub_10425F30((int)v8, 90.0);
    sub_10425BE0(v6, v8, v7);
    sub_10421A90(v7, v9);
    sub_100E0EA0((int)this, (float *)v9);
    return 1;
  }
  else
  {
    return sub_100EBE90((int)this, Str, Source);
  }
}
