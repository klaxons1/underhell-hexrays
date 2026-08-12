char __thiscall sub_100B9070(int this, float *a2, int a3)
{
  int v4; // eax

  v4 = *(_DWORD *)(this + 12);
  if ( (float *)v4 == a2
    || sub_10079D20(*(_DWORD **)(v4 + 2600), (int)a2)
    || *(_BYTE *)(this + 16)
    && ((*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2)
     || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 284))(a2))
    || *(_BYTE *)(this + 18)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1276))(*(_DWORD *)(this + 12))
    && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2)
    || a2[112] >= (double)*(float *)(dword_106B31C8 + 12)
    || *(_BYTE *)(this + 17)
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)dword_106BAFFC + 12))(
         dword_106BAFFC,
         *(_DWORD *)(this + 12),
         a2)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 12) + 2204))(
          *(_DWORD *)(this + 12),
          a2) )
  {
    return 0;
  }
  else
  {
    return sub_10265590(a2, a3);
  }
}
