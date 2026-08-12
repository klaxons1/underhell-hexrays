char __thiscall sub_10193070(_BYTE *this, int a2)
{
  char result; // al

  sub_10024A70((int)this, a2);
  if ( !a2 && this[3376] && this[3377] )
    (*(void (__stdcall **)(_DWORD))(*((_DWORD *)this - 2) + 408))(-1293.0);
  result = this[3384];
  if ( result != this[3385] )
    return (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this - 2) + 792))(this - 8);
  return result;
}
