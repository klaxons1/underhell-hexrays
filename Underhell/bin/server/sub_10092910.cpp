void __thiscall sub_10092910(int this, float *a2)
{
  int v3; // eax

  sub_100DA300(a2);
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2) && (*(_BYTE *)(this + 2716) & 1) == 0 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3) )
      sub_100347E0((float *)this, a2);
  }
}
