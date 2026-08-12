int __thiscall sub_10069820(void *this, int a2)
{
  int v2; // esi

  v2 = a2;
  if ( a2 < 1000000000 )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 2160))(this);
    v2 = sub_1007DB30(a2);
  }
  return sub_1007DA40(v2);
}
