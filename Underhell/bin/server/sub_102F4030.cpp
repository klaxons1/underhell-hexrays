char __thiscall sub_102F4030(int this)
{
  char v2; // bl
  char result; // al
  void (__thiscall *v4)(int); // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2168))(this);
  result = sub_10022AA0((_BYTE *)this);
  if ( result )
  {
    if ( v2 )
    {
      v4 = *(void (__thiscall **)(int))(*(_DWORD *)this + 1900);
      *(float *)(this + 5740) = *(float *)(dword_106B31C8 + 12) + 5.0;
      v4(this);
    }
    return 1;
  }
  return result;
}
