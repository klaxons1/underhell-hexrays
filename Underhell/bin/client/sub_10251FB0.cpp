int __thiscall sub_10251FB0(_BYTE *this, unsigned __int16 *a2)
{
  unsigned __int16 *v3; // edi
  int result; // eax

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 908))(this);
  v3 = a2;
  result = *a2;
  if ( (_WORD)result )
  {
    result = (unsigned __int16)result;
    do
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 832))(this, result);
      result = v3[1];
      ++v3;
    }
    while ( (_WORD)result );
  }
  if ( this[340] )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 996))(this);
  return result;
}
