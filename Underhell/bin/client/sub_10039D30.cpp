int sub_10039D30()
{
  int result; // eax
  int v1; // esi

  result = sub_10039C60();
  v1 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(
               dword_10413178,
               *(_DWORD *)(result + 92));
    if ( result == 3 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(v1 + 4) + 128))(v1 + 4);
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413160 + 36))(*(unsigned __int16 *)(v1 + 300));
    }
  }
  return result;
}
