char __thiscall sub_100DB970(_DWORD *this, int a2, int a3)
{
  this[1] = (*(int (__thiscall **)(int, const char *, char *, int))(*(_DWORD *)a2 + 44))(
              a2,
              "$alpha",
              (char *)&a2 + 3,
              1);
  return HIBYTE(a2);
}
