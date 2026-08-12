char __thiscall sub_1012F420(int this, int a2, int a3)
{
  unsigned int v4; // ecx
  int v5; // ebx
  void *v6; // esp
  int *v7; // ecx
  int v8; // edx
  _BYTE v10[12]; // [esp+0h] [ebp-18h] BYREF
  _BYTE *v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h] BYREF

  *(_WORD *)(this + 28) = 0;
  *(_BYTE *)(this + 51) = 0;
  v4 = *(_DWORD *)(this + 48) & 0xFF000000 | 1;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = v4;
  if ( *((_DWORD *)off_103DC800 + 1) && *((_DWORD *)off_103DC800 + 2) )
  {
    *(_DWORD *)(this + 48) = a3;
    *(_DWORD *)(this + 44) = a2;
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)off_103DC800 + 1) + 32))(
           *((_DWORD *)off_103DC800 + 1),
           a2,
           a3);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int *, int *))(**((_DWORD **)off_103DC800 + 2) + 20))(
           *((_DWORD *)off_103DC800 + 2),
           v5,
           &v12,
           &v13) )
    {
      v6 = alloca(4 * v13 * v12);
      v7 = (int *)*((_DWORD *)off_103DC800 + 2);
      v8 = *v7;
      v11 = v10;
      (*(void (__thiscall **)(int *, int, _BYTE *, int))(v8 + 24))(v7, v5, v10, 4 * v13 * v12);
      sub_1012F390(this, (int)v11, v12, v13);
    }
    sub_1012F180(this);
  }
  return *(_BYTE *)(this + 28);
}
