int __thiscall sub_1011A3D0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int i; // ebx
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int j; // ebx
  int v12; // eax
  int result; // eax

  v2 = *(_DWORD *)(this + 84);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 84) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( *(_BYTE *)(v5 + 1268) )
        {
          sub_101194F0(v5, 0);
        }
        else if ( *(_BYTE *)(v5 + 1204) )
        {
          sub_10118E20(v5);
        }
      }
    }
  }
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i )
  {
    v7 = (_DWORD *)(*(_DWORD *)(this + 60) + 4 * i);
    if ( *v7 != -1 && off_1061BE18[4 * (*v7 & 0xFFF) + 2] == *v7 >> 12 && off_1061BE18[4 * (*v7 & 0xFFF) + 1] )
    {
      if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      sub_1025FAC0(v8);
    }
  }
  v9 = 0;
  *(_DWORD *)(this + 72) = 0;
  if ( *(int *)(this + 68) >= 0 )
  {
    if ( *(_DWORD *)(this + 60) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 60));
      *(_DWORD *)(this + 60) = 0;
    }
    *(_DWORD *)(this + 64) = 0;
  }
  *(_DWORD *)(this + 76) = *(_DWORD *)(this + 60);
  *(_DWORD *)(this + 16) = 0;
  v10 = sub_1012BF20(0, "commentary_semaphore", 0, 0, 0, 0);
  if ( v10 )
    sub_1025FAC0(v10);
  (*(void (__thiscall **)(int, int (__cdecl *)(int, char *, int)))(*(_DWORD *)cvar + 76))(cvar, sub_10119260);
  for ( j = 0; j < *(_DWORD *)(this + 52); v9 += 384 )
  {
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)cvar + 52))(cvar, v9 + *(_DWORD *)(this + 40));
    if ( v12 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v12 + 24) + 8))(v12 + 24, v9 + *(_DWORD *)(this + 40) + 256);
    ++j;
  }
  *(_DWORD *)(this + 52) = 0;
  if ( *(int *)(this + 48) >= 0 )
  {
    if ( *(_DWORD *)(this + 40) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 40));
      *(_DWORD *)(this + 40) = 0;
    }
    *(_DWORD *)(this + 44) = 0;
  }
  *(_DWORD *)(this + 56) = *(_DWORD *)(this + 40);
  result = -1;
  *(_DWORD *)(this + 80) = -1;
  *(_DWORD *)(this + 84) = -1;
  *(_DWORD *)(this + 88) = -1;
  *(float *)(this + 32) = 0.0;
  *(_DWORD *)(this + 36) = 0;
  return result;
}
