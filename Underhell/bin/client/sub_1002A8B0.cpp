int __thiscall sub_1002A8B0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx

  v2 = *(_DWORD *)(this + 1120);
  if ( v2 != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 1120) & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
      {
        if ( (*(_BYTE *)(v4 + 312) & 1) == 0 )
          (*(void (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 4))(v4 + 8);
      }
    }
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 8))(this + 4) != 0xFFFF )
    sub_10079F20(*(_DWORD *)(this + 156));
  sub_1009C130(*(_DWORD *)(this + 156));
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_10413184 + 20))(140, *(unsigned __int16 *)(this + 382));
  sub_10036200(this - 8);
  sub_10027340(this - 8);
  return sub_1003C4A0(this);
}
