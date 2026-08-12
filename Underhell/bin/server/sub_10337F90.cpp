unsigned int __thiscall sub_10337F90(void *this)
{
  unsigned int result; // eax

  result = sub_100E0780((int)this);
  if ( this )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
    dword_1066E9A8 = result;
  }
  else
  {
    dword_1066E9A8 = -1;
  }
  return result;
}
