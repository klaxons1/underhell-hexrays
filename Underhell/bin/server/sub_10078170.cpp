int __thiscall sub_10078170(float *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 76))(this, -1);
  v2 = (_DWORD *)*((_DWORD *)this + 1);
  if ( v2[593] == 30 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 732))(v2) )
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 1416))(*((_DWORD *)this + 1), 28);
  result = 0;
  this[4] = 0.0;
  return result;
}
