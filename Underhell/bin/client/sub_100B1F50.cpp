int __thiscall sub_100B1F50(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // eax

  if ( (int)this[3] > 0 && (v2 = sub_1012D2F0(this[3])) != 0 )
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 844))(v2);
  else
    v3 = this[2];
  if ( v3 == 5 )
  {
    result = 4;
    if ( this[2] != 4 )
      this[2] = 4;
  }
  else
  {
    if ( (int)this[3] > 0 && (v5 = sub_1012D2F0(this[3])) != 0 )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 844))(v5);
    else
      result = this[2];
    if ( result == 4 && this[2] != 5 )
      this[2] = 5;
  }
  return result;
}
