char __thiscall sub_101483E0(int this)
{
  char *v2; // eax
  _DWORD *v3; // edi
  const char *v4; // eax
  int v5; // ebx
  int *v6; // ecx
  char *v7; // eax
  _DWORD *v8; // eax
  int v9; // esi
  const char *v10; // eax
  int v11; // edi
  char v13[4]; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v14 = this;
  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 824);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
  {
    v4 = *(const char **)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 28))(v3, v13);
    if ( !v4 )
      v4 = String;
    v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v4);
    if ( *(_DWORD *)(this + 828) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 828);
      }
      *(_DWORD *)(this + 828) = v5;
    }
    sub_100EAB80(v3, 32);
  }
  v7 = *(char **)(this + 212);
  if ( !v7 )
    v7 = (char *)String;
  v8 = sub_1012BF20(&dword_1069E3E0, 0, v7, 0, 0, 0, 0);
  v9 = (int)v8;
  if ( v8 )
  {
    v10 = *(const char **)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 28))(v8, v13);
    if ( !v10 )
      v10 = String;
    v11 = v14;
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v14 + 104))(v14, v10);
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    sub_100E0D20(v11, (float *)(v9 + 580));
    LOBYTE(v8) = sub_100EAB80((_DWORD *)v9, 32);
  }
  return (char)v8;
}
