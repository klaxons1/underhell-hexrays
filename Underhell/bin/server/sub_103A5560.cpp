void __thiscall sub_103A5560(int this, int *a2, int a3)
{
  char *v4; // eax
  _DWORD *v5; // eax
  const char *v6; // eax

  if ( a2[6] == 2 )
  {
    v4 = (char *)a2[2];
    if ( !v4 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)(a2 + 2));
  }
  v5 = sub_1012C5B0(0, v4, this, *a2, 0);
  if ( v5 )
  {
    sub_103A4F80(this, (int)v5, 5.0);
    *(_DWORD *)(this + 3764) = a3;
    sub_10023CB0((char *)this, 77);
    sub_10081C10(*(_DWORD *)(this + 2588));
  }
  else
  {
    if ( a2[6] == 2 )
    {
      if ( a2[2] )
        v6 = (const char *)a2[2];
      else
        v6 = String;
    }
    else
    {
      v6 = sub_1010D460((int)(a2 + 2));
    }
    DevMsg("InspectTarget: target %s not found!\n", v6);
  }
}
