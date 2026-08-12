void __thiscall sub_1020FC10(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // edi
  int v6; // eax
  const char *v7; // eax
  __int64 v8; // [esp-8h] [ebp-14h]

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    v5 = (char *)sub_1010D460((int)v3);
LABEL_6:
    if ( !v5 )
      return;
    goto LABEL_7;
  }
  v4 = *v3;
  if ( v4 )
  {
    v5 = v4;
    goto LABEL_6;
  }
  v5 = (char *)String;
LABEL_7:
  v6 = sub_100BDF40((int)this, v5);
  if ( v6 <= -1 )
  {
    v7 = sub_100D6390(this);
    Warning("Dynamic prop %s: no sequence named:%s\n", v7, v5);
    sub_100C1170((int)this, 0);
  }
  else
  {
    sub_1020D850((int)this, v6);
    HIDWORD(v8) = this;
    LODWORD(v8) = 0;
    sub_1010DD80(this + 362, v8, 0.0);
  }
}
