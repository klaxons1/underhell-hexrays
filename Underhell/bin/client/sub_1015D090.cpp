int __thiscall sub_1015D090(int this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // eax
  int result; // eax

  sub_1003CD40((_DWORD *)this, a2);
  if ( a2 )
  {
    if ( *(_BYTE *)(this + 1444) )
    {
      *(float *)(this + 1440) = *(float *)(this + 1420);
      *(float *)(this + 1452) = 1.0 / *(float *)(this + 1420);
      *(float *)(this + 1456) = 0.0;
    }
  }
  else
  {
    *(float *)(this + 1440) = *(float *)(this + 1420);
    *(float *)(this + 1452) = 1.0 / *(float *)(this + 1420);
    *(float *)(this + 1456) = 0.0;
    v3 = *(_DWORD *)(this + 1416);
    v4 = sub_100F0920();
    (*(void (__thiscall **)(int, _DWORD *, _DWORD))(v3 + 4))(this + 1416, v4, 0);
  }
  result = *(_DWORD *)(this + 1460);
  if ( *(_BYTE *)(this + 1445) )
    *(_DWORD *)(result + 236) |= 4u;
  else
    *(_DWORD *)(result + 236) &= ~4u;
  return result;
}
