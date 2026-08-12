int __thiscall sub_1024F6D0(int this)
{
  _DWORD *v2; // esi
  const char *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const char *v8; // eax

  v2 = *(_DWORD **)(this + 800);
  v3 = sub_100D6390((_DWORD *)this);
  DevMsg(2, "TRAIN(%s): Dead end ", v3);
  if ( v2 )
  {
    if ( *(float *)(this + 856) >= 0.0 )
    {
      while ( 1 )
      {
        v6 = sub_101ACC90(v2);
        v7 = sub_101ACC70(v6, 1);
        if ( !v7 )
          break;
        v2 = (_DWORD *)v7;
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = sub_101ACCC0(v2);
        v5 = sub_101ACC70(v4, 1);
        if ( !v5 )
          break;
        v2 = (_DWORD *)v5;
      }
    }
  }
  sub_100DD790((float *)this, &flt_106F1CA8);
  sub_100D7260((float *)this, &flt_106F1CB4);
  if ( !v2 )
    return DevMsg(2, "\n");
  v8 = sub_100D6390(v2);
  DevMsg(2, "at %s\n", v8);
  return (*(int (__thiscall **)(_DWORD *, const char *, int, int, _DWORD))(*v2 + 148))(v2, "InPass", this, this, 0);
}
