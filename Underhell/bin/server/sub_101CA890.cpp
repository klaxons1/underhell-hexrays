int __thiscall sub_101CA890(int this)
{
  unsigned int v2; // eax
  int v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // ecx
  int v12; // ecx
  float v13; // [esp+0h] [ebp-10h]

  v13 = *(float *)(this + 808) + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v13, 0);
  v2 = *(_DWORD *)(this + 804);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
  v4 = *(_DWORD *)(this + 800);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
  sub_101DAAC0(v5, v3);
  v6 = *(_DWORD *)(this + 804);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
  *(_DWORD *)(this + 816) = *(_DWORD *)(v7 + 420);
  v8 = *(_DWORD *)(this + 804);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
  sub_100EBE30(v9, 1);
  result = *(_DWORD *)(this + 804);
  if ( result == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != *(_DWORD *)(this + 804) >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
  if ( *(_DWORD *)(v11 + 424) )
  {
    if ( result == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != *(_DWORD *)(this + 804) >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v12 + 424) + 108))(*(_DWORD *)(v12 + 424));
  }
  return result;
}
