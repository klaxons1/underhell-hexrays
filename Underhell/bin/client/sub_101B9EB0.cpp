_WORD *__stdcall sub_101B9EB0(int a1)
{
  _WORD *result; // eax
  void *v2; // esi
  int v3; // ebx
  unsigned __int16 *v4; // eax

  result = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1);
  if ( *result != 0xFFFF )
  {
    v2 = off_103DCDDC;
    v3 = *(_DWORD *)off_103DCDDC;
    v4 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1);
    return (_WORD *)(*(int (__thiscall **)(void *, _DWORD))(v3 + 48))(v2, *v4);
  }
  return result;
}
