bool __thiscall sub_102DA280(float *this, _DWORD *a2)
{
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  bool result; // al

  result = 0;
  if ( *(float *)(dword_106B31C8 + 12) >= (double)this[5] )
  {
    v2 = sub_102D9B20();
    v3 = sub_100B9D10(v2, "grenade");
    v4 = sub_100CF5D0(a2, v3);
    v5 = sub_102D9B20();
    if ( v4 < sub_100BA1B0(v5, v3)
      && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
    {
      return 1;
    }
  }
  return result;
}
