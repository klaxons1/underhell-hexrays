int __thiscall sub_1012F7A0(void *this)
{
  int v2; // edi
  int v3; // eax

  v2 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 912))(this) )
  {
    v2 = ((*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 916))(this) != 0) + 1;
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 204))(this) )
  {
    v2 = 3;
  }
  if ( *((_BYTE *)this + v2 + 652) )
  {
    v3 = (**(int (__thiscall ***)(void *))this)(this);
    sub_1012FC70(v3, 0.0, 1.0);
  }
  return sub_1025B8C0(this);
}
