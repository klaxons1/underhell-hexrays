void __thiscall sub_101DD940(int this, int a2, int a3)
{
  BOOL v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax

  sub_10148D10(this, a2, a3);
  v4 = a2 == 0;
  v5 = (_DWORD *)(a3 + 4 * v4);
  if ( 0.0 != *(float *)(this + 992) )
  {
    v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 4 * v4) + 68))(*(_DWORD *)(a3 + 4 * v4));
    if ( (!v6
       || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)
       || (*(_DWORD *)(this + 248) & 0x800000) == 0)
      && ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*v5 + 116))(*v5) * *(float *)(a3 + 24) >= *(float *)(this + 992) )
    {
      sub_101DCE10(this);
    }
  }
}
