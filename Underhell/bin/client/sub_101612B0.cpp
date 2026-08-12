int __thiscall sub_101612B0(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  _DWORD *v5; // eax

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    v4 = *(_DWORD *)(this + 1416);
    v5 = sub_100F0920();
    result = (*(int (__thiscall **)(int, _DWORD *, _DWORD))(v4 + 4))(this + 1416, v5, 0);
  }
  *(float *)(this + 1644) = *(float *)(this + 1504) / *(float *)(this + 1520);
  return result;
}
