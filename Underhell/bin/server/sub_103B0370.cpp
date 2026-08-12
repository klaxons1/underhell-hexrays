_DWORD *__thiscall sub_103B0370(int *this, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_1007E040((_DWORD *)this[647]);
  if ( (_BYTE)result )
  {
    result = (_DWORD *)sub_1007E000((_DWORD *)this[647]);
    if ( result == (_DWORD *)3 )
    {
      sub_10081C10(this[647]);
      result = sub_10044510((int)this, (int)"Target path cleared via input");
    }
  }
  this[974] = (int)"null";
  this[652] = -1;
  return result;
}
