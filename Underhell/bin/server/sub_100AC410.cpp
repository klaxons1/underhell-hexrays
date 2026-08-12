int __thiscall sub_100AC410(int this, const char *a2, int a3, int a4)
{
  int v6; // ebx

  if ( !sub_100AC2A0((_DWORD *)this, a4) )
    return -1;
  *(_DWORD *)(this + 12) = -1;
  if ( a3 == -1 )
    return sub_100AC390((_DWORD *)this, a2);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1604))(*(_DWORD *)(this + 4), a3) )
  {
    v6 = sub_100AC390((_DWORD *)this, a2);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 1608))(*(_DWORD *)(this + 4), a3, 2.0);
    return v6;
  }
  else
  {
    sub_100AC150((_DWORD *)this, "CULL", a2);
    return -1;
  }
}
