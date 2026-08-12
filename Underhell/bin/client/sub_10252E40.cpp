void __thiscall sub_10252E40(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int (__thiscall **v6)(void *, int *, int *); // edx
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 295) )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v8, &v7);
    sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &v8, &v7);
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 1008))(this, v8, v7);
    *(_DWORD *)(this + 280) = v4;
    if ( !v4 )
      *(_BYTE *)(this + 285) = 0;
    if ( v4 == *(_DWORD *)(this + 376) )
    {
      if ( v4 > 0 )
        *(_DWORD *)(this + 280) = v4 - 1;
      sub_10251EC0((_DWORD *)this);
      *(_DWORD *)(this + 280) = *(_DWORD *)(this + 376);
    }
    v5 = *(_DWORD *)(this + 280);
    if ( v5 != *(_DWORD *)(this + 316) )
    {
      v6 = *(int (__thiscall ***)(void *, int *, int *))this;
      *(_DWORD *)(this + 316) = v5;
      ((void (__thiscall *)(int))v6[4])(this);
    }
  }
}
