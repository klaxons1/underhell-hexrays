int __thiscall sub_1025F7E0(_DWORD **this)
{
  int result; // eax

  if ( this[238] )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[238] + 124))(this[238], 0);
    return ((int (__thiscall *)(_DWORD **))(*this)[284])(this);
  }
  return result;
}
