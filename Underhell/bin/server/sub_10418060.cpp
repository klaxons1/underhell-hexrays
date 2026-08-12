bool __thiscall sub_10418060(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a2);
  return !v2 && (v2 = sub_10261B20()) == 0 || *(_BYTE *)(v2 + 306) == 8;
}
