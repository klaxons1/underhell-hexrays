int __thiscall sub_1005DAF0(int this)
{
  int v2; // eax
  int v3; // eax

  v2 = *(_DWORD *)(this + 60);
  if ( (v2 == 3 || v2 == 1)
    && !sub_10023D10(*(_DWORD **)(this + 4), 21)
    && !sub_10023D10(*(_DWORD **)(this + 4), 23)
    && sub_10023D10(*(_DWORD **)(this + 4), 39)
    && sub_100CF460(*(_DWORD *)(this + 4))
    && (v3 = sub_100CF460(*(_DWORD *)(this + 4)), ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1364))(v3) & 0x2000) != 0)
    && (!sub_1004C220((_DWORD **)this, 13)
     || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 99) < 50) )
  {
    return 43;
  }
  else
  {
    return 0;
  }
}
