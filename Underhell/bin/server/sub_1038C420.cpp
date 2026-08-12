bool __thiscall sub_1038C420(int this)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi

  if ( sub_1038A110((void *)this) )
    return 1;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( !v3 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1096))(v3);
  if ( (*(_DWORD *)(this + 248) & 0x80000) == 0 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v5 = v4;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return *(float *)(v5 + 588) - *(float *)(this + 588) <= -36.0;
}
