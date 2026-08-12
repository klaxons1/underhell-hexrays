char __thiscall sub_102F4290(void *this, float *a2, float *a3, float a4, float a5, char a6)
{
  int v6; // ebx
  _DWORD *v8; // esi
  float *v9; // eax

  v6 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
    return 0;
  while ( 1 )
  {
    v8 = (_DWORD *)sub_1025FB50(v6);
    if ( v8 && (!a6 || (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 1080))(this, v8) != 1) )
    {
      if ( (v8[63] & 0x100000) != 0 )
        return 0;
      v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 576))(v8);
      if ( sub_1001F8D0((int)v8, a2, a3, v9, a4, a5) )
        break;
    }
    if ( ++v6 > *(_DWORD *)(dword_106B31C8 + 20) )
      return 0;
  }
  return 1;
}
