int __thiscall sub_1017F900(int this)
{
  int result; // eax
  char *v3; // ecx
  _DWORD *v4; // ecx
  int i; // edi
  _DWORD *v6; // edx
  _DWORD *v7; // ecx

  result = *(_DWORD *)(this + 284);
  if ( result != -1 )
  {
    v3 = (char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 284) & 0xFFF) + 4;
    result = (unsigned int)result >> 12;
    if ( *((_DWORD *)v3 + 1) == result )
    {
      if ( *(_DWORD *)v3 )
      {
        if ( *((_DWORD *)v3 + 1) == result )
          v4 = *(_DWORD **)v3;
        else
          v4 = 0;
        result = sub_10038340(v4);
        *(_DWORD *)(this + 284) = -1;
        *(float *)(this + 272) = 0.0;
      }
    }
  }
  for ( i = 0; i < *(_DWORD *)(this + 300); ++i )
  {
    v6 = (_DWORD *)(*(_DWORD *)(this + 288) + 4 * i);
    if ( *v6 != -1
      && *((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 2) == *v6 >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 1) )
    {
      if ( *v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 2) != *v6 >> 12 )
        v7 = 0;
      else
        v7 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 1);
      sub_10038340(v7);
    }
    result = *(_DWORD *)(this + 300) - i - 1;
    if ( result > 0 )
      result = (int)memcpy(
                      (void *)(*(_DWORD *)(this + 288) + 4 * i),
                      (const void *)(*(_DWORD *)(this + 288) + 4 * i + 4),
                      4 * result);
    --*(_DWORD *)(this + 300);
  }
  return result;
}
