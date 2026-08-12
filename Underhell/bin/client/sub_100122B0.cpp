void *__thiscall sub_100122B0(_BYTE *this)
{
  void *result; // eax

  result = off_103DC81C;
  if ( *((_DWORD *)off_103DC81C + 5) != 1 )
    this[4688] = ((unsigned __int8)this[4688] + 1) % 4;
  return result;
}
