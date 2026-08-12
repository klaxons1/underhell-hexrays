char __thiscall sub_1009C150(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  bool v6; // zf

  v4 = a2;
  this[1] = a2;
  v5 = (*(int (__thiscall **)(int, const char *, char *, int))(*(_DWORD *)v4 + 44))(
         v4,
         "$entityorigin",
         (char *)&a2 + 3,
         1);
  v6 = HIBYTE(a2) == 0;
  this[2] = v5;
  if ( !v6 )
    return 1;
  this[2] = 0;
  return 0;
}
