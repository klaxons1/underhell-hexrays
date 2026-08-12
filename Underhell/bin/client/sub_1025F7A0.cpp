int __thiscall sub_1025F7A0(_DWORD **this)
{
  int result; // eax

  if ( this[238] )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[238] + 124))(this[238], 0);
    ((void (__thiscall *)(_DWORD **))(*this)[4])(this);
    return ((int (__thiscall *)(_DWORD **, _DWORD *))(*this)[265])(this, this[238]);
  }
  return result;
}
