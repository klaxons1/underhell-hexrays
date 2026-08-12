_DWORD *__thiscall sub_10062CA0(_QWORD *this)
{
  unsigned __int64 v1; // kr00_8
  _DWORD *result; // eax
  bool v3; // cf
  unsigned __int64 v4; // [esp+4h] [ebp-Ch] BYREF
  unsigned __int64 *v5; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)this )
  {
    v5 = &v4;
    v4 = __rdtsc();
    v1 = v4 - this[1];
    this[1] = v1;
    result = *(_DWORD **)this;
    v3 = __CFADD__((_DWORD)v1, **(_DWORD **)this);
    *result += v1;
    result[1] += *((_DWORD *)this + 3) + v3;
    *(_DWORD *)this = 0;
  }
  return result;
}
