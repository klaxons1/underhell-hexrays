bool __usercall sub_101D3280@<al>(int a1@<esi>, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // esi
  unsigned int v5; // eax
  int v6; // eax

  if ( *a2 != *a3 )
    return *a2 > *a3;
  if ( a2[1] == -1 || off_1061BE18[4 * (a2[1] & 0xFFF) + 2] != a2[1] >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (a2[1] & 0xFFF) + 1];
  v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 72))(
         dword_106B31D0,
         *(_DWORD *)(v3 + 24),
         a1);
  v5 = a3[1];
  if ( v5 == -1 || off_1061BE18[4 * (a3[1] & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (a3[1] & 0xFFF) + 1];
  return v4 > (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v6 + 24));
}
