bool __thiscall sub_100B1BD0(void *this, int a2)
{
  return a2
      && (*(_BYTE *)(a2 + 306) || (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 44))(a2 + 320))
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1916))(a2)
      && sub_100B1470((int)this) == a2;
}
