void __thiscall sub_1024FDF0(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  bool v7; // zf
  int v8; // edx

  v6 = this[200];
  if ( v6 )
  {
    if ( v6 != 1 )
      return;
    this[248] = sub_1024FB70((int)this, this[243]);
  }
  else
  {
    this[248] = sub_1024FB70((int)this, this[242]);
  }
  if ( this[248] == 1 )
  {
    sub_1023C380(this, (int)"FuncTrackChange.Blocking", 0.0, 0);
  }
  else
  {
    v7 = this[200] == 0;
    v8 = *this;
    this[250] = 0;
    if ( v7 )
      (*(void (__thiscall **)(int *))(v8 + 732))(this);
    else
      (*(void (__thiscall **)(int *))(v8 + 728))(this);
  }
}
