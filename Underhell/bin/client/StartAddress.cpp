int __stdcall StartAddress(_DWORD *lpThreadParameter)
{
  unsigned int v1; // esi
  int v2; // edi

  v1 = _controlfp(0, 0);
  _controlfp(0x8001Fu, 0x8001Fu);
  v2 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*lpThreadParameter + 32))(
         *lpThreadParameter,
         lpThreadParameter[1],
         lpThreadParameter[2],
         lpThreadParameter[3],
         lpThreadParameter[4],
         lpThreadParameter[5]);
  _controlfp(v1, 0x8001Fu);
  return v2;
}
