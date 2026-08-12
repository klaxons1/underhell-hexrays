char __thiscall sub_100FB7E0(float *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  sub_10112C00(1);
  v2 = sub_100EA370(this);
  if ( v2 )
  {
    v3 = *(_DWORD *)dword_106B31F0;
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 24))(this);
    if ( ((*(int (__thiscall **)(int, int))(v3 + 108))(dword_106B31F0, v4) & 0x203400B) == 0 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 48))(v2, 0);
  }
  return 1;
}
