void __thiscall sub_101450A0(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // ecx
  _BYTE v6[48]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v7[48]; // [esp+38h] [ebp-30h] BYREF

  v3 = 0;
  if ( (int)this[24] > 0 )
  {
    v4 = this + 20;
    do
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v4 + 192))(*v4, v7);
      sub_10421E30(a2, v7, v6);
      (*(void (__thiscall **)(_DWORD, _BYTE *, int))(*(_DWORD *)*v4 + 184))(*v4, v6, 1);
      ++v3;
      ++v4;
    }
    while ( v3 < this[24] );
  }
  if ( this[2] && ((int (*)(void))sub_102667F0)() )
  {
    v5 = *(_DWORD *)(sub_102667F0(this[2]) + 424);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
  }
}
