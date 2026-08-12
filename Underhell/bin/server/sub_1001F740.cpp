int __thiscall sub_1001F740(void *this, float a2, char a3, float a4, char a5)
{
  int result; // eax
  int v7; // eax

  result = sub_100C3150((int)this, a2, a3, a4, a5);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v7 = sub_10261B20();
    result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)v7 + 1080))(v7, this);
    if ( result != 3 )
    {
      result = sub_102F3640();
      if ( result )
        return sub_102F37D0(this);
    }
  }
  return result;
}
