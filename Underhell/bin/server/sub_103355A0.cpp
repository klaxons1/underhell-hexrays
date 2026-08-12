bool __thiscall sub_103355A0(_DWORD *this)
{
  _DWORD **v2; // esi
  int v3; // edi
  int v4; // eax

  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1
    && sub_100296A0(this)
    && ((v2 = (_DWORD **)(this + 1127), v3 = sub_10050FC0(v2), v3 == sub_10261B20())
     || (v4 = sub_10050FC0(v2)) != 0
     && (*(char **)(v4 + 92) == "info_target_command_point" || sub_100D6240((_DWORD *)v4, "info_target_command_point"))) )
  {
    return sub_10050C40(v2);
  }
  else
  {
    return 0;
  }
}
