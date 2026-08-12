int __thiscall sub_1000C8A0(int this)
{
  int v2; // eax
  int result; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 128))(this);
  sub_1008FA90(2);
  *(_DWORD *)(this + 312) &= ~0x40000u;
  *(float *)(this + 1996) = 0.0;
  if ( *(_DWORD *)(this + 2024) )
    *(_DWORD *)(this + 2024) = 0;
  if ( *(_DWORD *)(this + 1968) )
    *(_DWORD *)(this + 1968) = 0;
  sub_1000C810((_DWORD *)this);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1120))(this);
  sub_1003B810(v2);
  sub_1008FFB0(1, 36.0);
  result = sub_1000DF30(128);
  *(float *)(this + 2112) = 0.0;
  *(_DWORD *)(this + 2100) = 0;
  *(_DWORD *)(this + 2096) = 0;
  return result;
}
