bool __stdcall sub_10188440(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  if ( (v1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v2 = *(_DWORD *)(v1 + 12)) != 0 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  }
  else
  {
    v3 = 0;
  }
  if ( *a1 == -1 || off_1061BE18[4 * (*a1 & 0xFFF) + 2] != *a1 >> 12 )
    return v3 == 0;
  else
    return off_1061BE18[4 * (*a1 & 0xFFF) + 1] == v3;
}
