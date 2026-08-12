int __thiscall sub_1031AC80(int this)
{
  int v1; // ebx
  int *v3; // ecx
  void (__noreturn ***v4)(); // eax

  v1 = dword_106B31C8;
  if ( *(_DWORD *)(this + 1672) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1672);
    }
    *(float *)(this + 1672) = *(float *)(v1 + 12);
  }
  *(float *)(this + 4224) = 0.0;
  *(_DWORD *)(this + 4076) = 0;
  *(_DWORD *)(this + 4088) = 0;
  *(_DWORD *)(this + 3776) = 0;
  v4 = sub_1023DBA0();
  return ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[12])(
           v4,
           *(_DWORD *)(this + 4280),
           0.0,
           0.1);
}
