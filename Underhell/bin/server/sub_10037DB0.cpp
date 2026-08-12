int __thiscall sub_10037DB0(void *this, int a2)
{
  DevMsg("Called wrong StartTask()\n");
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 1256))(this, a2);
  return 0;
}
