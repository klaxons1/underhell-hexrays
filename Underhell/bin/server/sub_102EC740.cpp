int __thiscall sub_102EC740(void *this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  const char *v7; // eax
  unsigned int v8; // eax
  int v9; // esi
  int v10; // ecx

  v2 = *(_DWORD *)(a2 + 44);
  if ( v2 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v2 >> 12 )
    {
      v5 = (_DWORD *)*v4;
      if ( *v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*v5 + 320))(*v4) )
        {
          v6 = sub_100CF460(v5);
          if ( v6 )
          {
            v7 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1256))(v6);
            if ( !_stricmp(v7, "weapon_crowbar") )
            {
              sub_1023C380(v5, (int)"HL2Player.Use", 0.0, 0);
              v8 = *(_DWORD *)(a2 + 44);
              if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != *(_DWORD *)(a2 + 44) >> 12 )
                v9 = 0;
              else
                v9 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
              if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v8 >> 12 )
                v10 = 0;
              else
                v10 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
              (*(void (__thiscall **)(void *, int, int, int, _DWORD))(*(_DWORD *)this + 372))(this, v10, v9, 3, 0.0);
            }
          }
        }
      }
    }
  }
  return 0;
}
