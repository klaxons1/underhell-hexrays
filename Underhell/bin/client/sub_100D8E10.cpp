_DWORD *__thiscall sub_100D8E10(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // edi
  int (__thiscall ***v4)(_DWORD, int); // ecx
  _DWORD *v5; // ecx

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  result = (_DWORD *)this[45];
  if ( result )
  {
    do
    {
      v3 = (_DWORD *)result[9];
      sub_10034930((int)result);
      result = v3;
    }
    while ( v3 );
  }
  v4 = (int (__thiscall ***)(_DWORD, int))this[60];
  this[45] = 0;
  if ( v4 )
  {
    if ( *(v4 - 1) )
      result = (_DWORD *)(**v4)(v4, 3);
    else
      result = (_DWORD *)sub_10034930((int)(v4 - 1));
  }
  v5 = (_DWORD *)this[61];
  this[60] = 0;
  if ( v5 )
    result = sub_100D8D40(v5, 3);
  this[61] = 0;
  return result;
}
