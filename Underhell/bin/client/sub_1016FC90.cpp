int __thiscall sub_1016FC90(int *this, int a2)
{
  int result; // eax
  int *v3; // ebx
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // eax

  result = a2;
  v3 = this + 13;
  v4 = 8 * (unsigned __int16)a2;
  v5 = *(_DWORD *)(v4 + this[13]);
  if ( v5 )
  {
    sub_1003A300(this + 13, a2);
    *(_WORD *)(*v3 + v4 + 6) = *((_WORD *)v3 + 8);
    *((_WORD *)v3 + 8) = a2;
    sub_10036200((unsigned __int16 *)v5);
    if ( (*(_DWORD *)(v5 + 1980) & 0x8000000) != 0 )
    {
      if ( !*(_BYTE *)(v5 + 2088) )
        sub_100EA4D0((_DWORD *)(v5 + 444), 0, 0, 0);
      v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      sub_1009C130(off_103DCD78, *v6);
    }
    sub_1016FC20((int)&dword_103E9D04, v5);
    (**(void (__thiscall ***)(int, _DWORD))v5)(v5, 0);
    return sub_1022FD10(v5);
  }
  return result;
}
