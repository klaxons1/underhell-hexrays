int __thiscall sub_100DA010(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax

  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "entity_killed",
             0);
  v4 = result;
  if ( result )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v4 + 40))(v4, "entindex_killed", v5);
    v6 = a2[11];
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (a2[11] & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (a2[11] & 0xFFF) + 2] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                  dword_106B31D0,
                  *(_DWORD *)(v9 + 24));
          (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v4 + 40))(v4, "entindex_attacker", v10);
        }
      }
    }
    v11 = a2[10];
    if ( v11 != -1 )
    {
      v12 = &off_1061BE18[4 * (a2[10] & 0xFFF) + 1];
      v13 = v11 >> 12;
      if ( off_1061BE18[4 * (a2[10] & 0xFFF) + 2] == v13 )
      {
        if ( *v12 )
        {
          if ( off_1061BE18[4 * (a2[10] & 0xFFF) + 2] == v13 )
            v14 = *v12;
          else
            v14 = 0;
          v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                  dword_106B31D0,
                  *(_DWORD *)(v14 + 24));
          (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v4 + 40))(v4, "entindex_inflictor", v15);
        }
      }
    }
    (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v4 + 40))(v4, "damagebits", a2[16]);
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v4, 0);
  }
  return result;
}
