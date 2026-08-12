int __thiscall sub_102451E0(_DWORD *this, int a2, int a3)
{
  if ( this[1] )
    return a3;
  else
    return *(unsigned __int8 *)(*this + *(_DWORD *)(*this + 252) + *(_DWORD *)(*this + 248) * (a2 - 1) + a3 - 1);
}
