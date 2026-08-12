char __thiscall sub_1024AC70(void *this, int a2, int a3)
{
  if ( !a3
    || (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 408))(this, a2, a3) != 1
    || *(_DWORD *)(dword_106B4CAC + 48)
    || a3 == a2 )
  {
    return sub_101891F0(a2, a3);
  }
  else
  {
    return 0;
  }
}
