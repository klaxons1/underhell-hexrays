int __thiscall sub_10261C80(_DWORD *this)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = this[84];
  if ( (double)v3 <= ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 1032))(this) )
    return 0;
  else
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[92] + 772))(this[92]);
}
