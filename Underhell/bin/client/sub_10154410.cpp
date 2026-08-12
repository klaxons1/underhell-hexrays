int __thiscall sub_10154410(int this, int a2)
{
  if ( !a2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
    if ( *(_DWORD *)(this + 1224) == 3 )
      sub_10154350(this - 8);
  }
  *(float *)(this + 1232) = (double)*(unsigned __int8 *)(this + 83) * 0.001 * 0.0039215689;
  return sub_1003CD40((_DWORD *)this, a2);
}
