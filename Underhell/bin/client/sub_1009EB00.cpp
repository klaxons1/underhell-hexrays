int __thiscall sub_1009EB00(_DWORD *this, int *a2, int *a3)
{
  int result; // eax

  result = *(_BYTE *)(this[1] + 28) & 0xF;
  *a2 = result;
  if ( result == 2 )
  {
    if ( (int)this[2] >= 0 )
      *a2 = 0;
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 120))(this[1]);
    *a3 = result;
  }
  else if ( result == 6 )
  {
    result = *(_BYTE *)(this[3] + 28) & 0xF;
    *a2 = result;
    if ( result == 2 )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[3] + 120))(this[3]);
      *a3 = result;
    }
    else if ( result == 6 )
    {
      result = this[4];
      if ( result )
      {
        result = *(_BYTE *)(result + 28) & 0xF;
        *a2 = result;
        if ( result == 2 )
        {
          result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[4] + 120))(this[4]);
          *a3 = result;
        }
      }
    }
  }
  return result;
}
