int sub_101164B0()
{
  int result; // eax
  int v1; // eax
  void (__thiscall *v2)(int, int (*)()); // edx

  result = dword_1043753C;
  if ( !dword_1043753C )
  {
    v1 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
           dword_1047C96C,
           "_rt_WaterRefraction",
           "RenderTargets",
           1);
    sub_10233410(v1);
    if ( !byte_10437518 )
    {
      v2 = *(void (__thiscall **)(int, int (*)()))(*(_DWORD *)dword_1047C96C + 172);
      byte_10437518 = 1;
      v2(dword_1047C96C, sub_101161A0);
    }
    return dword_1043753C;
  }
  return result;
}
