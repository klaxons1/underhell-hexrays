int __thiscall sub_1018B890(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax

  if ( !sub_1000BAC0(this)
    || (v2 = sub_1000BAC0(this), result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 504))(v2), (_BYTE)result) )
  {
    v4 = sub_1000BAC0(this);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 788))(v4);
  }
  return result;
}
