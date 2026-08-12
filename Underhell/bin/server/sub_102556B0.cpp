char __thiscall sub_102556B0(int this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  int v5; // eax

  if ( this )
    v2 = this + 812;
  else
    v2 = 0;
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, v2);
  v4 = (*(_DWORD *)(this + 248) & 0x1000) == 0;
  *(_DWORD *)(this + 816) = v3;
  if ( v4 )
    v5 = sub_100EA370((float *)this);
  else
    v5 = sub_100E9630((float *)this, 0, 0, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 300))(v5);
  return 1;
}
