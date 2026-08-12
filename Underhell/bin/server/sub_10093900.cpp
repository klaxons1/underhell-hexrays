int __stdcall sub_10093900(int a1, int a2)
{
  _DWORD *v2; // eax

  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 16) >= 0xFFFu )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 92))(a2, "<<invalid>>");
  if ( v2[5] >= 0x10u )
    v2 = (_DWORD *)*v2;
  return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 92))(a2, v2);
}
