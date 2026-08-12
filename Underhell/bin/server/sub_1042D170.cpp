char __thiscall sub_1042D170(int this, int a2)
{
  char v3; // cl
  int v4; // eax
  char result; // al
  int v6; // ecx

  v3 = *(_BYTE *)(this + 20);
  if ( (v3 & 2) != 0 )
    return 0;
  v4 = *(_DWORD *)(this + 12);
  if ( *(_DWORD *)(this + 28) < v4 + a2 )
  {
    *(_BYTE *)(this + 20) = v3 | 2;
    return 0;
  }
  v6 = *(_DWORD *)(this + 32);
  if ( v4 >= v6 && *(_DWORD *)(this + 4) >= a2 + v4 - v6 )
    return 1;
  result = (*(int (__thiscall **)(int, int))(this + 36))(this, a2);
  if ( result )
    return 1;
  *(_BYTE *)(this + 20) |= 2u;
  return result;
}
