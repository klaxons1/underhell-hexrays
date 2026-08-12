int __thiscall sub_100D9450(int this)
{
  int result; // eax

  if ( *(_BYTE *)(this + 49) && *(_BYTE *)(this + 48) )
  {
    if ( *(_BYTE *)(this + 76) )
      SystemParametersInfoA(4u, 0, (PVOID)(this + 80), 0);
    *(_BYTE *)(this + 49) = 0;
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 200))(dword_1047CA6C, 2);
    *(float *)(this + 52) = 0.0;
    *(float *)(this + 56) = 0.0;
  }
  return result;
}
