void __thiscall sub_103215B0(char *this)
{
  char v1; // bl
  unsigned int i; // esi

  v1 = 0;
  for ( i = 0; i < 0x10; i += 4 )
  {
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
    {
      sub_101674F0(this, this, 1, 32.0, 1.0, *(int *)((char *)&off_1066D13C + i), 25.0);
      v1 = 1;
    }
  }
  if ( !v1 )
    sub_101674F0(this, this, 1, 32.0, 1.0, off_1066D13C, 25.0);
}
