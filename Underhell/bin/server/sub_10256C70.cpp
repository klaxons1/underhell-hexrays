char __thiscall sub_10256C70(int this)
{
  int v2; // eax

  if ( (*(_DWORD *)(this + 248) & 0x1000) != 0 )
    v2 = sub_100E9630((float *)this, 0, 0, 0);
  else
    v2 = sub_100EA370((float *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 300))(v2);
  *(_DWORD *)(this + 856) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(
                              dword_106BAFF4,
                              this + 860);
  return 1;
}
