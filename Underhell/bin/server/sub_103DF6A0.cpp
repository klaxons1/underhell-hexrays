void __thiscall sub_103DF6A0(int this)
{
  int v2; // esi
  unsigned __int16 v3; // ax

  sub_10267BD0(this);
  v2 = *(_DWORD *)(this + 424);
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 148))(*(_DWORD *)(this + 424), 0.0);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 72))(v2, v3 | 0x20);
  }
  if ( (**(int (__thiscall ***)(int))(this + 1484))(this + 1484) )
  {
    if ( *(float *)(this + 448) < 3.4028235e38 )
      *(float *)(this + 448) = 3.4028235e38;
  }
}
