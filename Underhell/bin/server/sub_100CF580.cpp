int __thiscall sub_100CF580(char *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < 128; i += 4 )
  {
    if ( *(_DWORD *)&this[i + 1780] )
    {
      result = (*(int (__stdcall **)(char *))(*(_DWORD *)this + 1140))(&this[i + 1780]);
      *(_DWORD *)&this[i + 1780] = 0;
    }
  }
  return result;
}
