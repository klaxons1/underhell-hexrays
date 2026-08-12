int sub_102733F0()
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0);
  if ( result )
  {
    if ( byte_1069362F )
    {
      byte_1069362F = 0;
    }
    else
    {
      result = dword_10693628;
      byte_1069362F = (*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 8) & 0x10000000) == 0;
    }
  }
  return result;
}
