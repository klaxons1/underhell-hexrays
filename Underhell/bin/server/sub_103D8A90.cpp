void __thiscall sub_103D8A90(_DWORD *this, char *String2)
{
  _DWORD *v3; // eax
  const char *v4; // eax

  sub_103D86A0(this);
  v3 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( v3 )
  {
    this[915] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  }
  else
  {
    v4 = (const char *)this[23];
    if ( !v4 )
      v4 = String;
    DevMsg("**Sniper %s cannot find sweep target %s\n", v4, String2);
    this[915] = -1;
  }
}
