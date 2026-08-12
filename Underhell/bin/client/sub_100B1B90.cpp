void __thiscall sub_100B1B90(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // esi

  if ( (*(_BYTE *)(sub_1000AA30((__int16 *)a2) + 476) & 0x10) == 0 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 8) + 36))(a2 + 8);
    v4 = this[66];
    v5 = 0;
    if ( v4 <= 0 )
    {
LABEL_6:
      sub_100B1A50((int)this, 2, v3, a2, 0, 0);
    }
    else
    {
      v6 = (_DWORD *)(this[63] + 12);
      while ( *v6 != v3 )
      {
        ++v5;
        v6 += 6;
        if ( v5 >= v4 )
          goto LABEL_6;
      }
    }
  }
}
