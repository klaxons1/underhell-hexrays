void __thiscall sub_1018F770(char *this, char *a2, int a3)
{
  char *v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  int *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  char **v14; // esi

  if ( a2 != this )
  {
    v3 = &this[36 * a3];
    v4 = *((_DWORD *)v3 + 134);
    if ( v4 == -1 )
    {
LABEL_6:
      v9 = (int *)(v3 + 524);
      v10 = sub_1018CED0((int *)v3 + 131, 0);
      sub_1018ED30(v9, v10);
      v11 = *v9;
      v12 = 12 * v10;
      *(_DWORD *)(v11 + v12 + 8) = -1;
      v13 = v9[4];
      *(_DWORD *)(v11 + v12 + 4) = v13;
      v9[4] = v10;
      if ( v13 == -1 )
        v9[3] = v10;
      else
        *(_DWORD *)(*v9 + 12 * v13 + 8) = v10;
      ++v9[6];
      v14 = (char **)(v12 + *v9);
      if ( v14 )
        *v14 = a2;
    }
    else
    {
      v5 = *((_DWORD *)v3 + 131);
      while ( 1 )
      {
        v6 = 3 * v4;
        v7 = *(_DWORD *)(v5 + 4 * v6) == (_DWORD)a2;
        v8 = v5 + 4 * v6;
        if ( v7 )
          break;
        v4 = *(_DWORD *)(v8 + 8);
        if ( v4 == -1 )
          goto LABEL_6;
      }
    }
  }
}
