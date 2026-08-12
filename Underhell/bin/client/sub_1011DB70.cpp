char __thiscall sub_1011DB70(int this, int a2, _DWORD *a3, char *a4)
{
  bool v4; // zf
  char result; // al

  v4 = *(_BYTE *)(this + 12) == 0;
  *(_DWORD *)(this + 16) = a2;
  *(_DWORD *)(this + 20) = *a3;
  *(_DWORD *)(this + 24) = a3[1];
  *(_DWORD *)(this + 28) = a3[2];
  *(_DWORD *)(this + 32) = a3[3];
  *(_DWORD *)(this + 36) = a3[4];
  *(_DWORD *)(this + 40) = a3[5];
  result = *a4;
  *(_BYTE *)(this + 44) = *a4;
  if ( !v4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_104376B8 + 28))(dword_104376B8);
  return result;
}
