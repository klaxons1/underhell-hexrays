int __thiscall sub_101EC340(void *this, char a2, char a3)
{
  int v3; // edi
  float v6; // ebx
  int v7; // eax
  int v8; // [esp+6Ch] [ebp-4h]

  v3 = dword_10700AC8;
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 264))(this)
    || *(float *)(dword_106B31C8 + 12) < (double)*((float *)this + 887) && !a3 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  }
  *((float *)this + 887) = *(float *)(dword_106B31C8 + 12) + 5.0;
  if ( *((_DWORD *)this + 55) )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 464))(this, (int)this + 220);
    *((_DWORD *)this + 55) = 0;
  }
  v6 = *(float *)this;
  v7 = sub_10248110((int)this, (int)this, 0.0, (a2 != 0 ? 8256 : 4096) | 0x800, *((_DWORD *)this + 888));
  (*(void (__thiscall **)(void *, int))(LODWORD(v6) + 268))(this, v7);
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1052))(this);
  *((_DWORD *)this + 888) = 0;
  return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
}
