int __thiscall sub_101DEFF0(int this)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // edx
  float *v5; // ecx
  int i; // [esp+14h] [ebp-4h]

  result = *(_DWORD *)(this + 1200);
  v3 = 0;
  for ( i = result; v3 < i; ++v3 )
  {
    v4 = (_DWORD *)(*(_DWORD *)(this + 1188) + 8 * v3 + 4);
    if ( *v4 != -1 && off_1061BE18[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12 && off_1061BE18[4 * (*v4 & 0xFFF) + 1] )
    {
      if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
        v5 = 0;
      else
        v5 = (float *)off_1061BE18[4 * (*v4 & 0xFFF) + 1];
      sub_100E06A0(v5, 0.0, 2.0);
    }
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(
               dword_106BAFF4,
               *(_DWORD *)(*(_DWORD *)(this + 1188) + 8 * v3));
  }
  *(_DWORD *)(this + 1200) = 0;
  if ( *(int *)(this + 1196) >= 0 )
  {
    result = *(_DWORD *)(this + 1188);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 1188));
      *(_DWORD *)(this + 1188) = 0;
    }
    *(_DWORD *)(this + 1192) = 0;
  }
  *(_DWORD *)(this + 1204) = *(_DWORD *)(this + 1188);
  *(float *)(this + 1216) = 0.0;
  return result;
}
