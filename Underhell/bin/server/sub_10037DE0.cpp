int __thiscall sub_10037DE0(void *this, int a2)
{
  DevMsg("Called wrong RunTask()\n");
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 1264))(this, a2);
  return 0;
}
