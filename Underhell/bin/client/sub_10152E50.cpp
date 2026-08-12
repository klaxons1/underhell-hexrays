char *__thiscall sub_10152E50(_BYTE *this)
{
  char *result; // eax

  result = (char *)dword_1043CDD4;
  if ( *(_DWORD *)(dword_1043CDD4 + 48) )
  {
    if ( dword_103E8C58 != -1 )
    {
      result = (char *)off_103DCD74 + 16 * (dword_103E8C58 & 0xFFF) + 4;
      if ( *((_DWORD *)off_103DCD74 + 4 * (dword_103E8C58 & 0xFFF) + 2) == (unsigned int)dword_103E8C58 >> 12 )
      {
        if ( *(_DWORD *)result )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (dword_103E8C58 & 0xFFF) + 2) == (unsigned int)dword_103E8C58 >> 12 )
          {
            result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)result + 8) + 4))(*(_DWORD *)result + 8);
            this[12] = 0;
            return result;
          }
          result = (char *)(*(int (__thiscall **)(int))(MEMORY[8] + 4))(8);
        }
      }
    }
  }
  this[12] = 0;
  return result;
}
