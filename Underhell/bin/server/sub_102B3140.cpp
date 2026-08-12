void __thiscall sub_102B3140(void *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  int v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_10264F10((int)v5, v4);
  sub_100E0EA0((int)this, (float *)v5);
}
