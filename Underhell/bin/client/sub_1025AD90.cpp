int __thiscall sub_1025AD90(unsigned __int16 *this)
{
  int v2; // esi
  const char *v3; // eax

  (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 928))(this, 1);
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 972))(this);
  if ( this[179] != 0xFFFF )
  {
    v2 = dword_1047CA6C;
    v3 = sub_10230460(dword_1047F658, this[179]);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 300))(v2, v3);
  }
  return (*(int (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)this + 928))(this, 0);
}
