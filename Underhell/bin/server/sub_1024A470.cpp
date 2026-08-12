int __thiscall sub_1024A470(float *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // eax

  sub_100E38F0(this);
  if ( sub_100D8840(this) <= 0 || sub_100D8840(this) > 32 )
  {
    v5 = sub_100D8840(this);
    Warning("info_player_teamspawn with invalid team number: %d\n", v5);
    return sub_1025FAC0(this);
  }
  else
  {
    v2 = sub_100D8840(this);
    v3 = sub_10249D60(v2);
    return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 744))(v3, this);
  }
}
