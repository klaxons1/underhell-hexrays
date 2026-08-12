char __thiscall sub_100ED040(_DWORD *this, _DWORD *a2, int a3, int a4, void *a5, int a6)
{
  char *v7; // eax
  int v8; // eax
  const char *v9; // esi
  const char *v10; // eax
  const char *v12; // [esp-4h] [ebp-Ch]

  v7 = (char *)sub_104183D0(a4);
  v8 = sub_100BDF40((int)this, v7);
  a2[6] = v8;
  if ( v8 >= 0 )
  {
    a2[2] = a5;
    a2[4] = -2;
    return 1;
  }
  else
  {
    v9 = (const char *)this[65];
    if ( !v9 )
      v9 = String;
    v12 = (const char *)sub_104183D0(a4);
    v10 = (const char *)sub_10018D60(a5);
    Warning("CSceneEntity %s :\"%s\" unable to find sequence \"%s\"\n", v9, v10, v12);
    return 0;
  }
}
