int __thiscall sub_10245840(char *this, int a2)
{
  int v3; // esi
  int v4; // ecx

  if ( !*((_DWORD *)this + 1) )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 244) + 92 * a2 + *(_DWORD *)this + 8);
  v3 = *(_DWORD *)(*((_DWORD *)this + 1) + 88) + 144 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 48) + 8 * a2);
  v4 = *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * *(_DWORD *)(sub_102457E0(this, a2) + 8));
  return v4 != -1 ? v4 : 0;
}
