void __thiscall sub_1012B970(int this, int *a2)
{
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  int v6; // eax
  float *v7; // edi
  int *v8; // ecx
  float v9; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 212) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(char **)(this + 212);
      if ( !v4 )
        v4 = (char *)String;
      v3 = sub_1012C5B0(v3, v4, this, *a2, 0);
      if ( !v3 )
        break;
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3);
      if ( v5 )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 808))(
          v5,
          *(float *)(this + 820),
          1,
          0.0,
          0);
      }
      else
      {
        v6 = sub_1012B790(v3, 1);
        if ( v6 )
        {
          v7 = (float *)(v6 + 820);
          v9 = *(float *)(this + 820) + *(float *)(dword_106B31C8 + 12);
          if ( *(_DWORD *)(v6 + 820) != LODWORD(v9) )
          {
            if ( *(_BYTE *)(v6 + 84) )
            {
              *(_BYTE *)(v6 + 88) |= 1u;
              *v7 = v9;
            }
            else
            {
              v8 = *(int **)(v6 + 24);
              if ( v8 )
                sub_100194B0(v8, 820);
              *v7 = v9;
            }
          }
        }
      }
    }
  }
}
