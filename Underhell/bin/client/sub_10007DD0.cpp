char __thiscall sub_10007DD0(_DWORD *this, int a2, int a3)
{
  this[1] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
              a2,
              "$alpha",
              (char *)&a2 + 3,
              0);
  return HIBYTE(a2);
}
