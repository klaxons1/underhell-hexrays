double __thiscall sub_10314220(void *this)
{
  int v2; // eax
  int v3; // eax

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this)
    && (v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2))
    && (v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this),
        (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1096))(v3)) )
  {
    return 8000.0;
  }
  else
  {
    return *(float *)(dword_106E3A04 + 44);
  }
}
