void __thiscall sub_102594E0(int this, int a2, int a3)
{
  int v4; // eax
  bool v5; // zf
  int (__thiscall **v6)(void *, int *, int *); // edx
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 300) )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v8, &v7);
    sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &v8, &v7);
    v4 = sub_10258E30(this, v8, v7);
    v5 = v4 == *(_DWORD *)(this + 308);
    *(_DWORD *)(this + 296) = v4;
    if ( !v5 )
    {
      v6 = *(int (__thiscall ***)(void *, int *, int *))this;
      *(_DWORD *)(this + 308) = v4;
      ((void (__thiscall *)(int))v6[4])(this);
    }
  }
}
