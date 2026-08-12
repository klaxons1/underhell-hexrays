double __thiscall sub_103F8460(_DWORD *this, int a2)
{
  int v3; // eax

  if ( sub_100D1940(this)
    && (v3 = sub_100D1940(this), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3)) )
  {
    return *(float *)(dword_106EFA2C + 44);
  }
  else
  {
    return *(float *)(dword_106EFA74 + 44);
  }
}
