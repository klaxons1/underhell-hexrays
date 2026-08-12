int (__thiscall *__thiscall sub_10246990(int this))(int)
{
  int (__thiscall *result)(int); // eax

  if ( *(_DWORD *)(this + 908) == 1 )
  {
    sub_1025F370(this, this + 884, 0);
    sub_100DD660(this, &flt_106F1CA8);
  }
  else
  {
    if ( *(_DWORD *)(this + 908) != 2 )
      goto LABEL_6;
    sub_100E11A0(this, (float *)(this + 896));
    sub_100D7260((float *)this, &flt_106F1CB4);
  }
  sub_100D8290((float *)this, -1.0);
LABEL_6:
  result = *(int (__thiscall **)(int))(this + 4);
  *(_DWORD *)(this + 908) = 0;
  if ( result )
    return (int (__thiscall *)(int))result(this);
  return result;
}
