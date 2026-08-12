void __thiscall sub_1017F630(int this)
{
  unsigned int v2; // ecx
  char *v3; // eax
  unsigned int v4; // ecx
  __int16 *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax

  *(float *)(this + 272) = 0.0;
  v2 = *(_DWORD *)(this + 284);
  if ( v2 != -1 )
  {
    v3 = (char *)off_103DCD74 + 16 * (v2 & 0xFFF) + 4;
    v4 = v2 >> 12;
    if ( *((_DWORD *)v3 + 1) == v4 )
    {
      if ( *(_DWORD *)v3 )
      {
        if ( *((_DWORD *)v3 + 1) == v4 )
          v5 = *(__int16 **)v3;
        else
          v5 = 0;
        v6 = *(_DWORD *)dword_10413178;
        v7 = sub_10034480(v5);
        v8 = (*(int (__thiscall **)(int, int))(v6 + 4))(dword_10413178, v7);
        if ( v8 )
        {
          if ( *(_BYTE *)(this + 276) )
            sub_1017EC00((int *)this, v8);
        }
      }
    }
  }
}
