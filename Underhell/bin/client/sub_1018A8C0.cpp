int __thiscall sub_1018A8C0(_DWORD *this, int a2)
{
  int v2; // edi
  int *v4; // eax
  int (__thiscall *v5)(int, int *, const char *, int); // edx
  int v6; // ebx
  _DWORD *v7; // eax
  int result; // eax

  v2 = a2;
  sub_1024E7E0((int)this, a2);
  v4 = (int *)this[110];
  v5 = *(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20);
  a2 = 0xFFFFFF;
  v6 = *v4;
  v7 = (_DWORD *)v5(v2, &a2, "MapDescriptionText", 0xFFFFFF);
  (*(void (__thiscall **)(_DWORD, _DWORD))(v6 + 220))(this[110], *v7);
  result = (int)(this + 114);
  if ( *((_BYTE *)this + 456) )
    return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 1032))(this, this + 114);
  return result;
}
