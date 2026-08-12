int __thiscall sub_101EE710(int this, int a2)
{
  int result; // eax
  int v4; // edi
  int *v5; // ecx

  result = a2;
  if ( !a2 )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 116))(dword_106B3CDC);
  v4 = result;
  if ( *(_DWORD *)(this + 3488) != result )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 3488) = v4;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 3488);
      *(_DWORD *)(this + 3488) = v4;
    }
  }
  return result;
}
