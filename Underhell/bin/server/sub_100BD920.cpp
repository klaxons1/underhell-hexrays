int __thiscall sub_100BD920(_DWORD *this, int a2)
{
  int v3; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 760))(this) )
    return (*(int (__thiscall **)(_DWORD *, float *))(*this + 752))(this, &flt_106F1CA8);
  v3 = this[281];
  if ( v3 )
  {
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8);
    --dword_106960D8;
    sub_10184660(v3);
    this[281] = 0;
  }
  return sub_101CB960(this);
}
