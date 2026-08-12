int __thiscall sub_10272A50(_BYTE *this)
{
  int v2; // eax
  int result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 52) + 916))(*((_DWORD *)this + 52)) )
  {
    v2 = -1;
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 53) + 916))(*((_DWORD *)this + 53)) )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) + 400;
      this[228] = 1;
      *((_DWORD *)this + 56) = result;
      return result;
    }
    v2 = 1;
  }
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 836))(this, v2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  if ( *((_DWORD *)this + 56) >= result )
  {
    this[228] = 0;
  }
  else
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) + 50;
    this[228] = 1;
    *((_DWORD *)this + 56) = result;
  }
  return result;
}
