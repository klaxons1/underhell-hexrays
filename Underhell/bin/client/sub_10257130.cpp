void __thiscall sub_10257130(int *this, _BYTE *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [esp-10h] [ebp-14h]
  int *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this;
  if ( this[58] )
  {
    v3 = this + 55;
    v6 = this[58];
    v7 = 0;
    v4 = sub_10255420(this + 55, v6, &v7);
    (*(void (__thiscall **)(int, _DWORD, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, *v3, a2, a3);
    v5 = v3[3];
    if ( v5 > 0 )
    {
      *(_WORD *)(*v3 + 2 * v4) = *(_WORD *)(*v3 + 2 * v5 - 2);
      --v3[3];
    }
  }
  else
  {
    *a2 = 0;
  }
}
