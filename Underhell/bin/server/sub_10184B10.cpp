char __thiscall sub_10184B10(float *this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax

  v2 = sub_100E9630(this, 0, 0, 0);
  if ( v2 )
  {
    v3 = *(_DWORD *)dword_106B31F0;
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 24))(this);
    if ( ((*(int (__thiscall **)(int, int))(v3 + 108))(dword_106B31F0, v4) & 0x203400B) == 0 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 48))(v2, 0);
  }
  return 1;
}
