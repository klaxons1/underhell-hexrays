int __thiscall sub_100348C0(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *(_DWORD *)(this + 92));
  if ( result == 3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 128))(this + 4);
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413160 + 36))(*(unsigned __int16 *)(this + 300));
  }
  return result;
}
