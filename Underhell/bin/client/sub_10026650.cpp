void __thiscall sub_10026650(int this)
{
  _DWORD *v2; // esi

  if ( *(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA8C + 164))(*(unsigned __int16 *)(this + 1944));
    v2 = *(_DWORD **)(this + 1940);
    if ( v2[1] )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA8C + 164))(*(unsigned __int16 *)(*v2 + 344));
  }
}
