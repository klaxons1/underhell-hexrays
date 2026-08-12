void __thiscall sub_101ABD90(int this)
{
  char **v1; // edx
  _BYTE *v2; // ebx
  float *v3; // esi
  int v4; // edi
  int *v5; // ecx
  _BYTE *v6; // eax
  int *v7; // ecx

  v1 = (char **)this;
  v2 = (_BYTE *)(this + 808);
  if ( !*(_BYTE *)(this + 808) )
  {
    v3 = (float *)(this + 816);
    v4 = dword_106B31C8;
    if ( *(_DWORD *)(this + 816) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
        {
          sub_100194B0(v5, 816);
          v1 = (char **)this;
        }
      }
      *v3 = *(float *)(v4 + 12);
    }
    if ( *v2 != 1 )
    {
      v6 = v2 - 808;
      if ( *(v2 - 724) )
      {
        v6[88] |= 1u;
        *v2 = 1;
        sub_101ABBE0(v1);
        return;
      }
      v7 = (int *)*((_DWORD *)v6 + 6);
      if ( v7 )
      {
        sub_100194B0(v7, 808);
        v1 = (char **)this;
      }
      *v2 = 1;
    }
    sub_101ABBE0(v1);
  }
}
