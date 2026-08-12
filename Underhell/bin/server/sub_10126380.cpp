char __thiscall sub_10126380(int this)
{
  char result; // al
  _DWORD *v3; // esi

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 0);
  result = sub_100EAB80((_DWORD *)this, 32);
  *(_BYTE *)(this + 800) = 0;
  v3 = (_DWORD *)(this + 220);
  if ( !*v3 )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*(v3 - 55) + 464))(v3 - 55, v3);
    *v3 = 10;
  }
  return result;
}
