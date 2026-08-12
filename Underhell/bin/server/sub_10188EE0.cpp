int __thiscall sub_10188EE0(int this)
{
  const char *v2; // eax
  int result; // eax

  sub_10188E10(this);
  sub_100D8290((float *)this, 0.5);
  v2 = *(const char **)(this + 92);
  if ( !v2 )
    v2 = String;
  result = _stricmp(v2, "move_keyframed");
  if ( !result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 720))(this, 1);
  return result;
}
