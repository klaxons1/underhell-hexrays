char __thiscall sub_10295F90(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int *v6; // ebx
  int v7; // esi
  _DWORD *v8; // eax

  if ( *(_BYTE *)(this + 36) )
  {
    v3 = dword_106DB118 + 56 * *(_DWORD *)(this + 56);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 48);
      if ( v4 == 5 )
        return 1;
      if ( v4 == 3 )
        goto LABEL_7;
    }
    if ( *(_DWORD *)(v3 + 48) == 4 )
    {
LABEL_7:
      v6 = *(int **)(this + 4);
      v7 = *v6;
      v8 = sub_1023CC80(a2);
      if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, int, _DWORD))(v7 + 544))(v6, v8, 16449, 0) )
        return 1;
    }
  }
  return sub_1004B5E0((_DWORD **)this);
}
