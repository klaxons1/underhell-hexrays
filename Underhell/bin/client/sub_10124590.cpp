int __thiscall sub_10124590(unsigned __int16 *this)
{
  int result; // eax
  int v3; // ecx

  result = *this;
  if ( (_WORD)result != 0xFFFF )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131C0 + 44))(dword_104131C0, result);
    *this = -1;
  }
  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
    *((_DWORD *)this + 4) = 0;
  }
  return result;
}
