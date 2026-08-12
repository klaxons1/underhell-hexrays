int __thiscall sub_10271CF0(int this, int a2)
{
  int result; // eax
  int v4; // edi
  int *v5; // ecx

  result = (*(int (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3230 + 32))(
             dword_106B3230,
             1,
             a2,
             -1,
             0);
  v4 = result;
  if ( *(_DWORD *)(this + 812) != result )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 812) = v4;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 812);
      *(_DWORD *)(this + 812) = v4;
    }
  }
  return result;
}
