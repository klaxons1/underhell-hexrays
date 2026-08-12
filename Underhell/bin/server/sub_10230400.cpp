int __thiscall sub_10230400(int this, char a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edi
  char *v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // ebx
  char *v12; // eax

  v3 = *(_DWORD *)(this + 804);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(char **)(this + 808);
  if ( !v6 )
    v6 = (char *)String;
  v7 = *(_DWORD *)(this + 800);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
  v9 = sub_1012C5F0(v8, v6, (float *)(this + 580), *(float *)(this + 812), this, v5, 0, 0);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = sub_100D7680((int)v9);
      v11 = v10;
      if ( v10 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 264))(v10)
          && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 1268))(v11) )
        {
          break;
        }
      }
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v12 = *(char **)(this + 808);
      if ( !v12 )
        v12 = (char *)String;
      v9 = sub_1012C5F0((int)v9, v12, (float *)(this + 580), *(float *)(this + 812), this, 0, 0, 0);
      if ( !v9 )
        goto LABEL_22;
    }
    if ( a2 )
      *(_DWORD *)(this + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
    return v11;
  }
  else
  {
LABEL_22:
    *(_DWORD *)(this + 800) = -1;
    return 0;
  }
}
