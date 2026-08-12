int __thiscall sub_1035EE90(int this, int a2)
{
  int result; // eax
  int *v4; // ecx
  float v5; // [esp+18h] [ebp+8h]

  result = sub_100209B0((void *)this, a2);
  if ( a2 == 26 )
  {
    v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           0.75);
    result = *(_DWORD *)(this + 904);
    if ( result != LODWORD(v5) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 904) = v5;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = sub_100194B0(v4, 904);
        *(float *)(this + 904) = v5;
      }
    }
  }
  return result;
}
