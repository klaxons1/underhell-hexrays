int __thiscall sub_10043FF0(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int *v6; // ecx
  int v7; // ecx
  int v8; // eax

  v2 = (_DWORD *)this[531];
  if ( v2 )
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1304))(this, *v2);
  else
    v3 = 0;
  v4 = this[531];
  v5 = this[533];
  if ( v4 && v5 >= 0 && v5 < *(_DWORD *)(v4 + 8) && (v6 = (int *)(*(_DWORD *)(v4 + 4) + 8 * v5)) != 0 )
    v7 = *v6;
  else
    v7 = 0;
  v8 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1244))(this, v3, v7, this[537]);
  return sub_100696D0(v8);
}
