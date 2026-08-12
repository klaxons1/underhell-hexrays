char __thiscall sub_101645F0(_BYTE *this, int a2, int a3, int a4, int *a5)
{
  int (__thiscall *v6)(_BYTE *, int, int, int); // edx
  int v7; // eax
  int v8; // edi
  int v9; // eax

  v6 = *(int (__thiscall **)(_BYTE *, int, int, int))(*(_DWORD *)this + 104);
  this[8] = 1;
  v7 = v6(this, a2, a3, a4);
  v8 = v7;
  if ( !this[8] )
    return 0;
  if ( !v7 )
  {
    Warning("An AI behavior is in control but has no recommended schedule\n");
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 272))(this, v7) )
  {
    v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 52))(this);
    *a5 = sub_1007DB30((_DWORD *)(v9 + 4), v8);
  }
  else
  {
    *a5 = v8;
  }
  return 1;
}
