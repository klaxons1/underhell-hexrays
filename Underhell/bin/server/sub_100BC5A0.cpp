int __thiscall sub_100BC5A0(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 20))(this + 8);
  if ( !(_BYTE)result )
  {
    result = *(_DWORD *)(this + 24);
    if ( result > 0 && *(_DWORD *)(this + 88) >= result )
      *(_BYTE *)(this + 84) = 1;
  }
  return result;
}
