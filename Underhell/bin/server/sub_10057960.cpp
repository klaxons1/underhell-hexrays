char __thiscall sub_10057960(int this, _DWORD *a2, int a3)
{
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int v8; // [esp+Ch] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD *))(**(_DWORD **)(this + 4) + 1368))(
          *(_DWORD *)(this + 4),
          this,
          a2) )
    return 0;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1548))(*(_DWORD *)(this + 4));
  if ( *(_DWORD *)(dword_10698344 + 48) )
    sub_10023CB0(*(char **)(this + 4), 25);
  v4 = sub_10050F60(a2);
  sub_100577F0(this, v4, 0);
  v5 = *(_DWORD *)(this + 216) == 0;
  v6 = a2[213];
  LOBYTE(v8) = 0;
  *(_DWORD *)(this + 228) = v8;
  *(_DWORD *)(this + 224) = v6;
  if ( !v5 )
  {
    sub_10057030(dword_106921E0, (int *)(this + 216), v6);
    *(float *)(this + 80) = 0.0;
  }
  *(_DWORD *)(this + 232) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  *(float *)(this + 80) = 0.0;
  return 1;
}
