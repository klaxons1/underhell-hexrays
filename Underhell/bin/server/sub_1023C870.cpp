int __thiscall sub_1023C870(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 800);
  if ( result == -1 )
  {
    if ( *(int *)(dword_106CE684 + 48) >= 2 )
      Msg("Free Sound List is full!\n");
    return -1;
  }
  else
  {
    *(_DWORD *)(this + 800) = *(__int16 *)(52 * result + this + 840);
    *(_WORD *)(52 * result + this + 840) = *(_WORD *)(this + 804);
    *(_DWORD *)(this + 804) = result;
  }
  return result;
}
