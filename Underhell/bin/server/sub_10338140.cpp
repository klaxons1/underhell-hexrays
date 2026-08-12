_DWORD *__thiscall sub_10338140(_DWORD *this)
{
  int i; // esi
  int v3; // ecx
  _DWORD *result; // eax

  flt_1066E9A4 = -1.0;
  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3);
  }
  sub_1002FB90((int)this);
  result = sub_1012BC90(&dword_1069E3E0, 0, "info_target_command_point");
  if ( !result )
    return (_DWORD *)sub_101811E0("info_target_command_point", -1);
  return result;
}
