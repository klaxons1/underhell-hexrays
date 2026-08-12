void __thiscall sub_10407F70(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  unsigned int v4; // eax
  const char *v5; // eax
  const char *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
    *(_DWORD *)(this + 800) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    *(_DWORD *)(this + 800) = -1;
  v4 = *(_DWORD *)(this + 800);
  if ( v4 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v4 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
  {
    v7 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
    v8 = dword_106F06C4;
    v9 = dword_106F06C4;
    if ( dword_106F06C4 + 1 > dword_106F06BC )
    {
      sub_102ABFC0(&dword_106F06B8, dword_106F06C4 - dword_106F06BC + 1);
      v8 = dword_106F06C4;
    }
    v10 = dword_106F06B8;
    dword_106F06C4 = v8 + 1;
    v11 = v8 - v9;
    dword_106F06C8 = dword_106F06B8;
    if ( v11 > 0 )
    {
      memcpy((void *)(dword_106F06B8 + 4 * v9 + 4), (const void *)(dword_106F06B8 + 4 * v9), 4 * v11);
      v10 = dword_106F06B8;
    }
    v12 = (_DWORD *)(v10 + 4 * v9);
    if ( v12 )
      *v12 = v7;
  }
  else
  {
    v5 = *(const char **)(this + 212);
    if ( !v5 )
      v5 = String;
    v6 = *(const char **)(this + 92);
    if ( !v6 )
      v6 = String;
    DevWarning("%s: Could not find target '%s'!\n", v6, v5);
  }
}
