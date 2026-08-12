char __thiscall sub_10234CE0(_DWORD *this, int a2)
{
  int v2; // eax

  if ( !this[1]
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0)
    || (v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24)),
        v2 != 1) )
  {
    LOBYTE(v2) = 0;
  }
  return v2;
}
