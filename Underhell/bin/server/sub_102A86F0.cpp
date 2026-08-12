void __thiscall sub_102A86F0(_DWORD *this, _DWORD *a2)
{
  if ( *a2 == 100002 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this[1] + 2604) + 76))(*(_DWORD *)(this[1] + 2604), -1);
    if ( sub_10021530((_DWORD *)this[1]) )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 12))(this, 0);
  }
  else
  {
    sub_1004B450(this, (int)a2);
  }
}
