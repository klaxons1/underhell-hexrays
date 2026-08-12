int __thiscall sub_101F7010(int this, int a2, int a3, int a4)
{
  int result; // eax

  *(float *)(this + 48) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 16))(dword_1047CA80);
  if ( a2 == 109 )
  {
    *(_BYTE *)(this + 60) = fabs(*(float *)(this + 56)) > 1.0;
    result = a3;
    *(_DWORD *)(this + 16) = a3;
    *(_DWORD *)(this + 20) = a4;
  }
  else
  {
    result = a4;
    *(_DWORD *)(this + 16) = a3;
    *(_DWORD *)(this + 20) = a4;
  }
  return result;
}
