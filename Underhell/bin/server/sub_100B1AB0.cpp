void __thiscall sub_100B1AB0(_DWORD *this, int a2, char a3)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int i; // edi
  int v7; // ecx

  v3 = a2;
  if ( a2 )
  {
    v4 = this + 2;
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    v5 = sub_100B1A20(v4, (int)&a2);
    if ( v5 == -1 )
    {
      DevMsg("ERROR: Attempting to remove non-existing squad membmer!\n");
    }
    else
    {
      if ( v4[16] - v5 - 1 > 0 )
        memcpy(&v4[v5], &v4[v5 + 1], 4 * (v4[16] - v5 - 1));
      --v4[16];
      if ( a3 )
      {
        if ( *(float *)(v3 + 2708) > 0.0 && *(float *)(dword_106B31C8 + 12) - *(float *)(v3 + 2708) >= 5.0 )
        {
          for ( i = 0; i < this[18]; ++v4 )
          {
            if ( *v4 != -1 && off_1061BE18[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12 )
            {
              v7 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              if ( v7 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 2144))(v7, v3);
            }
            ++i;
          }
        }
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 1912))(v3, 0);
      *(_DWORD *)(v3 + 2800) = 0;
    }
  }
}
