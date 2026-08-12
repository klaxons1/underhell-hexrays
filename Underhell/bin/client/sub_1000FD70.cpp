int __thiscall sub_1000FD70(int this, int a2)
{
  int result; // eax

  *(_BYTE *)(this + 1108) = 1;
  result = sub_10014020(this);
  if ( a2 )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    *(_DWORD *)(this + 1120) = result;
  }
  else
  {
    *(_DWORD *)(this + 1120) = -1;
  }
  return result;
}
