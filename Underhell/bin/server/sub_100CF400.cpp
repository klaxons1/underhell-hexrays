char __thiscall sub_100CF400(void *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int, void *, int))(*(_DWORD *)dword_106B3CDC + 108))(dword_106B3CDC, this, a2);
  if ( !v3 || v3 == a2 )
    return 0;
  else
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 964))(this, v3, 0);
}
