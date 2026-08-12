_DWORD *__thiscall sub_1004C190(int *this, int a2)
{
  _DWORD *result; // eax

  if ( *(char **)(this[1] + 92) != "npc_monk" && !(unsigned __int8)sub_100D6240("npc_monk")
    || (result = (_DWORD *)this[1], result[581] != 4) )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this[1] + 1088))(this[1]);
    if ( !(_BYTE)result )
      return sub_10044510(this[1], a2);
  }
  return result;
}
