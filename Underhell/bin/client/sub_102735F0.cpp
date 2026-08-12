char __thiscall sub_102735F0(int (__thiscall ***this)(void *, int *, int *))
{
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v3, &v4);
  sub_10236F60(this, &v3, &v4);
  if ( v3 >= 20 )
    return sub_10238E70((_BYTE **)this);
  else
    return 0;
}
