int sub_10116450()
{
  int result; // eax
  int v1; // eax
  void (__thiscall *v2)(int, int (*)()); // edx

  result = dword_10437554;
  if ( !dword_10437554 )
  {
    v1 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
           dword_1047C96C,
           "_rt_WaterReflection",
           "RenderTargets",
           1);
    sub_10233410(v1);
    if ( !byte_10437518 )
    {
      v2 = *(void (__thiscall **)(int, int (*)()))(*(_DWORD *)dword_1047C96C + 172);
      byte_10437518 = 1;
      v2(dword_1047C96C, sub_101161A0);
    }
    return dword_10437554;
  }
  return result;
}
