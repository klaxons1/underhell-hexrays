void __thiscall sub_1008BFC0(int this)
{
  unsigned __int16 i; // ax
  int v3; // edi
  int v4; // ebx
  int v5; // edi

  if ( *(_BYTE *)(this + 208) )
  {
    for ( i = *(_WORD *)(this + 48); i != 0xFFFF; i = *(_WORD *)(*(_DWORD *)(this + 36) + v4 + 166) )
    {
      v3 = *(_DWORD *)(this + 36);
      v4 = 168 * i;
      if ( *(_BYTE *)(this + 208) )
      {
        if ( (*(_BYTE *)(v3 + v4 + 8) & 4) != 0 )
        {
          sub_1008AD80((_DWORD *)(this + 64), *(_WORD *)(v3 + v4 + 148));
          *(_WORD *)(v3 + v4 + 148) = -1;
        }
      }
      v5 = *(_DWORD *)(this + 36);
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1041318C + 8))(
        *(unsigned __int16 *)(v5 + v4 + 4),
        *(_DWORD *)(this + 20),
        *(_DWORD *)(this + 20),
        0xFFFF);
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 36))(
        *(unsigned __int16 *)(v5 + v4 + 4),
        0.0,
        0.0,
        1.0,
        1.0);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 48))(*(unsigned __int16 *)(*(_DWORD *)(this + 36)
                                                                                           + v4
                                                                                           + 4));
    }
    sub_10233210(this + 24);
    sub_10233210(this + 28);
    sub_10089D70(this + 64);
    sub_10233280(0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047C96C + 260))(dword_1047C96C, 0);
    *(_BYTE *)(this + 208) = 0;
  }
}
