void __thiscall sub_10073940(_DWORD *this, int a2)
{
  int (__thiscall ***v3)(_DWORD); // ecx
  int v4; // eax

  v3 = (int (__thiscall ***)(_DWORD))this[3];
  if ( v3 )
  {
    this[209] = a2;
    v4 = (**v3)(v3);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 52))(v4, 0);
    this[209] = 0;
  }
}
