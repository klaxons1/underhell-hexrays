int __thiscall sub_10144F50(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 56))(*(_DWORD *)(this + 36));
  if ( !(_BYTE)result && !*(_BYTE *)(this + 308) )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 256))(*(_DWORD *)(this + 8));
    *(_BYTE *)(this + 308) = 1;
  }
  return result;
}
